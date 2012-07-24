#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <boost/thread/thread.hpp>
#include <boost/thread/condition_variable.hpp>
#include "../inc/DEIntegrator.h"

#define INPUT_BUFFER_SIZE       256
#define MAX_THREADS             10

boost::condition_variable cond;
boost::mutex cond_mutex, io_mutex;
bool data_ready;

typedef struct  
{
	double left_limit;
	double right_limit;
	double error_limit;
}integration_params_t;

//Integral function is taken from http://www.codeproject.com/Articles/31550/Fast-Numerical-Integration
class IntegralFunction
{
public:
	double operator()(double x) const
	{
		return 2*x;//pow(1.0 - x, 5.0)*pow(x, -1.0/3.0);
	}
};

integration_params_t integration_request;

void wait_for_data_to_process()
{
	integration_params_t params;
	IntegralFunction func;

	{
		boost::mutex::scoped_lock lock(io_mutex);
		std::cout << "Thread id: " << boost::this_thread::get_id() << ": started" << std::endl;
	}
	try
	{
		while(1)
		{
			{
				boost::unique_lock<boost::mutex> lock(cond_mutex);
				while(!data_ready)
				{
					cond.wait(lock);
				}
				//no interruption points here, so on interrupt() thread correctly 
				//ends computation and returns result. Only after that it quits.

				params = integration_request;
				data_ready = false; 
			}
			{
				boost::mutex::scoped_lock lock(io_mutex);
				std::cout << "Thread id: " << boost::this_thread::get_id() << ": data received. Start processing..." << std::endl;
			}			
			//process data

			double integral = DEIntegrator<IntegralFunction>::Integrate(func, params.left_limit, params.right_limit, params.error_limit);
			{
				boost::mutex::scoped_lock lock(io_mutex);
				std::cout << "Thread id: " << boost::this_thread::get_id() << ": processing complete. Answer is: " << std::setprecision(15) << integral << std::endl;
			}
		}
	}
	catch (boost::thread_interrupted)
	{
		boost::mutex::scoped_lock lock(io_mutex);
		std::cout << "Thread is quitting due to interrupt. Thread id: " << boost::this_thread::get_id() << std::endl;
	}
	catch (std::exception & e)
	{
		boost::mutex::scoped_lock lock(io_mutex);
		std::cout << "Exception caught. " << e.what() << " Thread id: " << boost::this_thread::get_id() << std::endl;
	}
}

int main(int argc, char* argv[])
{
	double left_limit, right_limit, error_limit;

	std::cout << "Hello! Lets start." << std::endl << 
		"Input data format: left_limit right_limit error limit." << std::endl <<
		"Example: 1.5 2 1.2e-6" << std::endl <<
		"To quit type \"quit\"" << std::endl;

	boost::thread_group threads;
	for (int i = 0; i < MAX_THREADS; ++i)
		threads.create_thread(&wait_for_data_to_process);

	char input[INPUT_BUFFER_SIZE];

	while(std::cin.getline(input, sizeof(input)))
	{
		if(!memcmp(input, "quit", sizeof("quit")))
		{
			threads.interrupt_all();
			threads.join_all();

			//no mutex here because all threads have quit.
			std::cout << "Goodbye!" << std::endl;
			return 0;
		}

		if(3 != sscanf(input, "%lf %lf %lf", &left_limit, &right_limit, &error_limit))
		{
			boost::mutex::scoped_lock lock(io_mutex);
			std::cout << "Data is incorrect. Try again, please. Example: 1.5, 2, 1.2e-6" << std::endl;

			continue;
		}
		{
			boost::mutex::scoped_lock lock(cond_mutex);
			integration_request.left_limit = left_limit;
			integration_request.right_limit = right_limit;
			integration_request.error_limit = error_limit;
			data_ready = true;
		}

		cond.notify_one();
	}
}