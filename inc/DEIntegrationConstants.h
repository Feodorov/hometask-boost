



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "boxH0Av0bJFhQLFzUYLzfTCRPW8:1343107067924";
 
 
 var CS_env = {"profileUrl":["/u/117547682639956396526/"],"token":"boxH0Av0bJFhQLFzUYLzfTCRPW8:1343107067924","assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/13293733053503680815","projectHomeUrl":"/p/hpcource","relativeBaseUrl":"","projectName":"hpcource","loggedInUserEmail":"K.A.Feodorov@gmail.com"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-15501782-1'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>DEIntegrationConstants.h - 
 hpcource -
 
 
 Project is aimed to store student&#39;s practical works on high performance computing course - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/13293733053503680815/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/13293733053503680815/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/13293733053503680815/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/13293733053503680815/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 <b>K.A.Feodorov@gmail.com</b>
 
 
 | <a href="/u/117547682639956396526/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/117547682639956396526/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=http%3A%2F%2Fcode.google.com%2Fp%2Fhpcource%2Fsource%2Fbrowse%2Ftrunk%2Fcsc%2Ffka%2F1%2Fwindows%2Ffka_1_c%2Finc%2FDEIntegrationConstants.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 <td id="plogo">
 <link itemprop="url" href="/p/hpcource">
 <a href="/p/hpcource/">
 
 
 <img src="/p/hpcource/logo?cct=1332871635"
 alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/hpcource/"><span itemprop="name">hpcource</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/hpcource/"><span itemprop="description">Project is aimed to store student&#39;s practical works on high performance computing course</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/hpcource/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/hpcource/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/hpcource/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/hpcource/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/hpcource/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/hpcource/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/hpcource/source/browse/trunk">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/hpcource/source/list">Changes</a></span> &nbsp;
 
 &nbsp;
 
 
 <form action="/p/hpcource/source/search" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 
 <a href="/p/hpcource/issues/entry?show=review&former=sourcelist">Request code review</a>
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 
<!-- IE -->




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/hpcource/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/hpcource/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/">csc</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/">fka</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/">1</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/">windows</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/">fka_1_c</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc/">inc</a><span class="sp">/&nbsp;</span>DEIntegrationConstants.h</span>
 
 

 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h?edit=1"
 ><img src="http://www.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper"><b>r2899</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
onmouseout="gutterOut()"><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn2899_1"

 onmouseover="gutterOver(1)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',1);">&nbsp;</span
></td><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn2899_2"

 onmouseover="gutterOver(2)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',2);">&nbsp;</span
></td><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn2899_3"

 onmouseover="gutterOver(3)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',3);">&nbsp;</span
></td><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn2899_4"

 onmouseover="gutterOver(4)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',4);">&nbsp;</span
></td><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn2899_5"

 onmouseover="gutterOver(5)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',5);">&nbsp;</span
></td><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn2899_6"

 onmouseover="gutterOver(6)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',6);">&nbsp;</span
></td><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn2899_7"

 onmouseover="gutterOver(7)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',7);">&nbsp;</span
></td><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn2899_8"

 onmouseover="gutterOver(8)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',8);">&nbsp;</span
></td><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn2899_9"

 onmouseover="gutterOver(9)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',9);">&nbsp;</span
></td><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn2899_10"

 onmouseover="gutterOver(10)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',10);">&nbsp;</span
></td><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn2899_11"

 onmouseover="gutterOver(11)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',11);">&nbsp;</span
></td><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn2899_12"

 onmouseover="gutterOver(12)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',12);">&nbsp;</span
></td><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn2899_13"

 onmouseover="gutterOver(13)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',13);">&nbsp;</span
></td><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn2899_14"

 onmouseover="gutterOver(14)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',14);">&nbsp;</span
></td><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn2899_15"

 onmouseover="gutterOver(15)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',15);">&nbsp;</span
></td><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn2899_16"

 onmouseover="gutterOver(16)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',16);">&nbsp;</span
></td><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn2899_17"

 onmouseover="gutterOver(17)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',17);">&nbsp;</span
></td><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn2899_18"

 onmouseover="gutterOver(18)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',18);">&nbsp;</span
></td><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn2899_19"

 onmouseover="gutterOver(19)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',19);">&nbsp;</span
></td><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn2899_20"

 onmouseover="gutterOver(20)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',20);">&nbsp;</span
></td><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn2899_21"

 onmouseover="gutterOver(21)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',21);">&nbsp;</span
></td><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn2899_22"

 onmouseover="gutterOver(22)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',22);">&nbsp;</span
></td><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn2899_23"

 onmouseover="gutterOver(23)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',23);">&nbsp;</span
></td><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn2899_24"

 onmouseover="gutterOver(24)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',24);">&nbsp;</span
></td><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn2899_25"

 onmouseover="gutterOver(25)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',25);">&nbsp;</span
></td><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn2899_26"

 onmouseover="gutterOver(26)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',26);">&nbsp;</span
></td><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn2899_27"

 onmouseover="gutterOver(27)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',27);">&nbsp;</span
></td><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn2899_28"

 onmouseover="gutterOver(28)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',28);">&nbsp;</span
></td><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn2899_29"

 onmouseover="gutterOver(29)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',29);">&nbsp;</span
></td><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn2899_30"

 onmouseover="gutterOver(30)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',30);">&nbsp;</span
></td><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn2899_31"

 onmouseover="gutterOver(31)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',31);">&nbsp;</span
></td><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn2899_32"

 onmouseover="gutterOver(32)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',32);">&nbsp;</span
></td><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn2899_33"

 onmouseover="gutterOver(33)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',33);">&nbsp;</span
></td><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn2899_34"

 onmouseover="gutterOver(34)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',34);">&nbsp;</span
></td><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn2899_35"

 onmouseover="gutterOver(35)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',35);">&nbsp;</span
></td><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn2899_36"

 onmouseover="gutterOver(36)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',36);">&nbsp;</span
></td><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn2899_37"

 onmouseover="gutterOver(37)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',37);">&nbsp;</span
></td><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn2899_38"

 onmouseover="gutterOver(38)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',38);">&nbsp;</span
></td><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn2899_39"

 onmouseover="gutterOver(39)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',39);">&nbsp;</span
></td><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn2899_40"

 onmouseover="gutterOver(40)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',40);">&nbsp;</span
></td><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn2899_41"

 onmouseover="gutterOver(41)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',41);">&nbsp;</span
></td><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn2899_42"

 onmouseover="gutterOver(42)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',42);">&nbsp;</span
></td><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn2899_43"

 onmouseover="gutterOver(43)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',43);">&nbsp;</span
></td><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn2899_44"

 onmouseover="gutterOver(44)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',44);">&nbsp;</span
></td><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn2899_45"

 onmouseover="gutterOver(45)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',45);">&nbsp;</span
></td><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn2899_46"

 onmouseover="gutterOver(46)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',46);">&nbsp;</span
></td><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn2899_47"

 onmouseover="gutterOver(47)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',47);">&nbsp;</span
></td><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn2899_48"

 onmouseover="gutterOver(48)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',48);">&nbsp;</span
></td><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn2899_49"

 onmouseover="gutterOver(49)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',49);">&nbsp;</span
></td><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn2899_50"

 onmouseover="gutterOver(50)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',50);">&nbsp;</span
></td><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn2899_51"

 onmouseover="gutterOver(51)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',51);">&nbsp;</span
></td><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn2899_52"

 onmouseover="gutterOver(52)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',52);">&nbsp;</span
></td><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn2899_53"

 onmouseover="gutterOver(53)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',53);">&nbsp;</span
></td><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn2899_54"

 onmouseover="gutterOver(54)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',54);">&nbsp;</span
></td><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn2899_55"

 onmouseover="gutterOver(55)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',55);">&nbsp;</span
></td><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn2899_56"

 onmouseover="gutterOver(56)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',56);">&nbsp;</span
></td><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn2899_57"

 onmouseover="gutterOver(57)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',57);">&nbsp;</span
></td><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn2899_58"

 onmouseover="gutterOver(58)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',58);">&nbsp;</span
></td><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn2899_59"

 onmouseover="gutterOver(59)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',59);">&nbsp;</span
></td><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn2899_60"

 onmouseover="gutterOver(60)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',60);">&nbsp;</span
></td><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn2899_61"

 onmouseover="gutterOver(61)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',61);">&nbsp;</span
></td><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn2899_62"

 onmouseover="gutterOver(62)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',62);">&nbsp;</span
></td><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn2899_63"

 onmouseover="gutterOver(63)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',63);">&nbsp;</span
></td><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn2899_64"

 onmouseover="gutterOver(64)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',64);">&nbsp;</span
></td><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn2899_65"

 onmouseover="gutterOver(65)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',65);">&nbsp;</span
></td><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn2899_66"

 onmouseover="gutterOver(66)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',66);">&nbsp;</span
></td><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn2899_67"

 onmouseover="gutterOver(67)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',67);">&nbsp;</span
></td><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn2899_68"

 onmouseover="gutterOver(68)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',68);">&nbsp;</span
></td><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn2899_69"

 onmouseover="gutterOver(69)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',69);">&nbsp;</span
></td><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn2899_70"

 onmouseover="gutterOver(70)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',70);">&nbsp;</span
></td><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn2899_71"

 onmouseover="gutterOver(71)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',71);">&nbsp;</span
></td><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn2899_72"

 onmouseover="gutterOver(72)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',72);">&nbsp;</span
></td><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn2899_73"

 onmouseover="gutterOver(73)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',73);">&nbsp;</span
></td><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn2899_74"

 onmouseover="gutterOver(74)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',74);">&nbsp;</span
></td><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn2899_75"

 onmouseover="gutterOver(75)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',75);">&nbsp;</span
></td><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn2899_76"

 onmouseover="gutterOver(76)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',76);">&nbsp;</span
></td><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn2899_77"

 onmouseover="gutterOver(77)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',77);">&nbsp;</span
></td><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn2899_78"

 onmouseover="gutterOver(78)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',78);">&nbsp;</span
></td><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn2899_79"

 onmouseover="gutterOver(79)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',79);">&nbsp;</span
></td><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn2899_80"

 onmouseover="gutterOver(80)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',80);">&nbsp;</span
></td><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn2899_81"

 onmouseover="gutterOver(81)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',81);">&nbsp;</span
></td><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn2899_82"

 onmouseover="gutterOver(82)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',82);">&nbsp;</span
></td><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn2899_83"

 onmouseover="gutterOver(83)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',83);">&nbsp;</span
></td><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn2899_84"

 onmouseover="gutterOver(84)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',84);">&nbsp;</span
></td><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn2899_85"

 onmouseover="gutterOver(85)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',85);">&nbsp;</span
></td><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn2899_86"

 onmouseover="gutterOver(86)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',86);">&nbsp;</span
></td><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn2899_87"

 onmouseover="gutterOver(87)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',87);">&nbsp;</span
></td><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn2899_88"

 onmouseover="gutterOver(88)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',88);">&nbsp;</span
></td><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn2899_89"

 onmouseover="gutterOver(89)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',89);">&nbsp;</span
></td><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn2899_90"

 onmouseover="gutterOver(90)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',90);">&nbsp;</span
></td><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn2899_91"

 onmouseover="gutterOver(91)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',91);">&nbsp;</span
></td><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn2899_92"

 onmouseover="gutterOver(92)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',92);">&nbsp;</span
></td><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn2899_93"

 onmouseover="gutterOver(93)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',93);">&nbsp;</span
></td><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn2899_94"

 onmouseover="gutterOver(94)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',94);">&nbsp;</span
></td><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn2899_95"

 onmouseover="gutterOver(95)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',95);">&nbsp;</span
></td><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn2899_96"

 onmouseover="gutterOver(96)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',96);">&nbsp;</span
></td><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn2899_97"

 onmouseover="gutterOver(97)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',97);">&nbsp;</span
></td><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn2899_98"

 onmouseover="gutterOver(98)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',98);">&nbsp;</span
></td><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn2899_99"

 onmouseover="gutterOver(99)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',99);">&nbsp;</span
></td><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn2899_100"

 onmouseover="gutterOver(100)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',100);">&nbsp;</span
></td><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn2899_101"

 onmouseover="gutterOver(101)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',101);">&nbsp;</span
></td><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn2899_102"

 onmouseover="gutterOver(102)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',102);">&nbsp;</span
></td><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn2899_103"

 onmouseover="gutterOver(103)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',103);">&nbsp;</span
></td><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn2899_104"

 onmouseover="gutterOver(104)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',104);">&nbsp;</span
></td><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn2899_105"

 onmouseover="gutterOver(105)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',105);">&nbsp;</span
></td><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn2899_106"

 onmouseover="gutterOver(106)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',106);">&nbsp;</span
></td><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn2899_107"

 onmouseover="gutterOver(107)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',107);">&nbsp;</span
></td><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn2899_108"

 onmouseover="gutterOver(108)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',108);">&nbsp;</span
></td><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn2899_109"

 onmouseover="gutterOver(109)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',109);">&nbsp;</span
></td><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn2899_110"

 onmouseover="gutterOver(110)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',110);">&nbsp;</span
></td><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn2899_111"

 onmouseover="gutterOver(111)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',111);">&nbsp;</span
></td><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn2899_112"

 onmouseover="gutterOver(112)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',112);">&nbsp;</span
></td><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn2899_113"

 onmouseover="gutterOver(113)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',113);">&nbsp;</span
></td><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn2899_114"

 onmouseover="gutterOver(114)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',114);">&nbsp;</span
></td><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn2899_115"

 onmouseover="gutterOver(115)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',115);">&nbsp;</span
></td><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn2899_116"

 onmouseover="gutterOver(116)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',116);">&nbsp;</span
></td><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn2899_117"

 onmouseover="gutterOver(117)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',117);">&nbsp;</span
></td><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn2899_118"

 onmouseover="gutterOver(118)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',118);">&nbsp;</span
></td><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn2899_119"

 onmouseover="gutterOver(119)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',119);">&nbsp;</span
></td><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn2899_120"

 onmouseover="gutterOver(120)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',120);">&nbsp;</span
></td><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn2899_121"

 onmouseover="gutterOver(121)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',121);">&nbsp;</span
></td><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn2899_122"

 onmouseover="gutterOver(122)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',122);">&nbsp;</span
></td><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn2899_123"

 onmouseover="gutterOver(123)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',123);">&nbsp;</span
></td><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn2899_124"

 onmouseover="gutterOver(124)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',124);">&nbsp;</span
></td><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn2899_125"

 onmouseover="gutterOver(125)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',125);">&nbsp;</span
></td><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn2899_126"

 onmouseover="gutterOver(126)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',126);">&nbsp;</span
></td><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn2899_127"

 onmouseover="gutterOver(127)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',127);">&nbsp;</span
></td><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn2899_128"

 onmouseover="gutterOver(128)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',128);">&nbsp;</span
></td><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn2899_129"

 onmouseover="gutterOver(129)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',129);">&nbsp;</span
></td><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn2899_130"

 onmouseover="gutterOver(130)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',130);">&nbsp;</span
></td><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn2899_131"

 onmouseover="gutterOver(131)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',131);">&nbsp;</span
></td><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn2899_132"

 onmouseover="gutterOver(132)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',132);">&nbsp;</span
></td><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn2899_133"

 onmouseover="gutterOver(133)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',133);">&nbsp;</span
></td><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn2899_134"

 onmouseover="gutterOver(134)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',134);">&nbsp;</span
></td><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn2899_135"

 onmouseover="gutterOver(135)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',135);">&nbsp;</span
></td><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn2899_136"

 onmouseover="gutterOver(136)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',136);">&nbsp;</span
></td><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn2899_137"

 onmouseover="gutterOver(137)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',137);">&nbsp;</span
></td><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn2899_138"

 onmouseover="gutterOver(138)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',138);">&nbsp;</span
></td><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn2899_139"

 onmouseover="gutterOver(139)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',139);">&nbsp;</span
></td><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn2899_140"

 onmouseover="gutterOver(140)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',140);">&nbsp;</span
></td><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn2899_141"

 onmouseover="gutterOver(141)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',141);">&nbsp;</span
></td><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn2899_142"

 onmouseover="gutterOver(142)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',142);">&nbsp;</span
></td><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn2899_143"

 onmouseover="gutterOver(143)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',143);">&nbsp;</span
></td><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn2899_144"

 onmouseover="gutterOver(144)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',144);">&nbsp;</span
></td><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn2899_145"

 onmouseover="gutterOver(145)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',145);">&nbsp;</span
></td><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn2899_146"

 onmouseover="gutterOver(146)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',146);">&nbsp;</span
></td><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn2899_147"

 onmouseover="gutterOver(147)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',147);">&nbsp;</span
></td><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn2899_148"

 onmouseover="gutterOver(148)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',148);">&nbsp;</span
></td><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn2899_149"

 onmouseover="gutterOver(149)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',149);">&nbsp;</span
></td><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn2899_150"

 onmouseover="gutterOver(150)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',150);">&nbsp;</span
></td><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn2899_151"

 onmouseover="gutterOver(151)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',151);">&nbsp;</span
></td><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn2899_152"

 onmouseover="gutterOver(152)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',152);">&nbsp;</span
></td><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn2899_153"

 onmouseover="gutterOver(153)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',153);">&nbsp;</span
></td><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn2899_154"

 onmouseover="gutterOver(154)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',154);">&nbsp;</span
></td><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn2899_155"

 onmouseover="gutterOver(155)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',155);">&nbsp;</span
></td><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn2899_156"

 onmouseover="gutterOver(156)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',156);">&nbsp;</span
></td><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn2899_157"

 onmouseover="gutterOver(157)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',157);">&nbsp;</span
></td><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn2899_158"

 onmouseover="gutterOver(158)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',158);">&nbsp;</span
></td><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn2899_159"

 onmouseover="gutterOver(159)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',159);">&nbsp;</span
></td><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn2899_160"

 onmouseover="gutterOver(160)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',160);">&nbsp;</span
></td><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn2899_161"

 onmouseover="gutterOver(161)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',161);">&nbsp;</span
></td><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn2899_162"

 onmouseover="gutterOver(162)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',162);">&nbsp;</span
></td><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn2899_163"

 onmouseover="gutterOver(163)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',163);">&nbsp;</span
></td><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn2899_164"

 onmouseover="gutterOver(164)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',164);">&nbsp;</span
></td><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn2899_165"

 onmouseover="gutterOver(165)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',165);">&nbsp;</span
></td><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn2899_166"

 onmouseover="gutterOver(166)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',166);">&nbsp;</span
></td><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn2899_167"

 onmouseover="gutterOver(167)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',167);">&nbsp;</span
></td><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn2899_168"

 onmouseover="gutterOver(168)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',168);">&nbsp;</span
></td><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn2899_169"

 onmouseover="gutterOver(169)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',169);">&nbsp;</span
></td><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn2899_170"

 onmouseover="gutterOver(170)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',170);">&nbsp;</span
></td><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn2899_171"

 onmouseover="gutterOver(171)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',171);">&nbsp;</span
></td><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn2899_172"

 onmouseover="gutterOver(172)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',172);">&nbsp;</span
></td><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn2899_173"

 onmouseover="gutterOver(173)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',173);">&nbsp;</span
></td><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn2899_174"

 onmouseover="gutterOver(174)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',174);">&nbsp;</span
></td><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn2899_175"

 onmouseover="gutterOver(175)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',175);">&nbsp;</span
></td><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn2899_176"

 onmouseover="gutterOver(176)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',176);">&nbsp;</span
></td><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn2899_177"

 onmouseover="gutterOver(177)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',177);">&nbsp;</span
></td><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn2899_178"

 onmouseover="gutterOver(178)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',178);">&nbsp;</span
></td><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn2899_179"

 onmouseover="gutterOver(179)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',179);">&nbsp;</span
></td><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn2899_180"

 onmouseover="gutterOver(180)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',180);">&nbsp;</span
></td><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn2899_181"

 onmouseover="gutterOver(181)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',181);">&nbsp;</span
></td><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn2899_182"

 onmouseover="gutterOver(182)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',182);">&nbsp;</span
></td><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn2899_183"

 onmouseover="gutterOver(183)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',183);">&nbsp;</span
></td><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn2899_184"

 onmouseover="gutterOver(184)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',184);">&nbsp;</span
></td><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn2899_185"

 onmouseover="gutterOver(185)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',185);">&nbsp;</span
></td><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn2899_186"

 onmouseover="gutterOver(186)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',186);">&nbsp;</span
></td><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn2899_187"

 onmouseover="gutterOver(187)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',187);">&nbsp;</span
></td><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn2899_188"

 onmouseover="gutterOver(188)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',188);">&nbsp;</span
></td><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn2899_189"

 onmouseover="gutterOver(189)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',189);">&nbsp;</span
></td><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn2899_190"

 onmouseover="gutterOver(190)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',190);">&nbsp;</span
></td><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn2899_191"

 onmouseover="gutterOver(191)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',191);">&nbsp;</span
></td><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn2899_192"

 onmouseover="gutterOver(192)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',192);">&nbsp;</span
></td><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn2899_193"

 onmouseover="gutterOver(193)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',193);">&nbsp;</span
></td><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn2899_194"

 onmouseover="gutterOver(194)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',194);">&nbsp;</span
></td><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn2899_195"

 onmouseover="gutterOver(195)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',195);">&nbsp;</span
></td><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn2899_196"

 onmouseover="gutterOver(196)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',196);">&nbsp;</span
></td><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn2899_197"

 onmouseover="gutterOver(197)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',197);">&nbsp;</span
></td><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn2899_198"

 onmouseover="gutterOver(198)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',198);">&nbsp;</span
></td><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn2899_199"

 onmouseover="gutterOver(199)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',199);">&nbsp;</span
></td><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn2899_200"

 onmouseover="gutterOver(200)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',200);">&nbsp;</span
></td><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn2899_201"

 onmouseover="gutterOver(201)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',201);">&nbsp;</span
></td><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn2899_202"

 onmouseover="gutterOver(202)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',202);">&nbsp;</span
></td><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn2899_203"

 onmouseover="gutterOver(203)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',203);">&nbsp;</span
></td><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn2899_204"

 onmouseover="gutterOver(204)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',204);">&nbsp;</span
></td><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn2899_205"

 onmouseover="gutterOver(205)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',205);">&nbsp;</span
></td><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn2899_206"

 onmouseover="gutterOver(206)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',206);">&nbsp;</span
></td><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn2899_207"

 onmouseover="gutterOver(207)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',207);">&nbsp;</span
></td><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn2899_208"

 onmouseover="gutterOver(208)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',208);">&nbsp;</span
></td><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn2899_209"

 onmouseover="gutterOver(209)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',209);">&nbsp;</span
></td><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn2899_210"

 onmouseover="gutterOver(210)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',210);">&nbsp;</span
></td><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn2899_211"

 onmouseover="gutterOver(211)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',211);">&nbsp;</span
></td><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn2899_212"

 onmouseover="gutterOver(212)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',212);">&nbsp;</span
></td><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn2899_213"

 onmouseover="gutterOver(213)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',213);">&nbsp;</span
></td><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn2899_214"

 onmouseover="gutterOver(214)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',214);">&nbsp;</span
></td><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn2899_215"

 onmouseover="gutterOver(215)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',215);">&nbsp;</span
></td><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn2899_216"

 onmouseover="gutterOver(216)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',216);">&nbsp;</span
></td><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn2899_217"

 onmouseover="gutterOver(217)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',217);">&nbsp;</span
></td><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn2899_218"

 onmouseover="gutterOver(218)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',218);">&nbsp;</span
></td><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn2899_219"

 onmouseover="gutterOver(219)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',219);">&nbsp;</span
></td><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn2899_220"

 onmouseover="gutterOver(220)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',220);">&nbsp;</span
></td><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn2899_221"

 onmouseover="gutterOver(221)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',221);">&nbsp;</span
></td><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn2899_222"

 onmouseover="gutterOver(222)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',222);">&nbsp;</span
></td><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn2899_223"

 onmouseover="gutterOver(223)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',223);">&nbsp;</span
></td><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn2899_224"

 onmouseover="gutterOver(224)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',224);">&nbsp;</span
></td><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn2899_225"

 onmouseover="gutterOver(225)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',225);">&nbsp;</span
></td><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn2899_226"

 onmouseover="gutterOver(226)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',226);">&nbsp;</span
></td><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn2899_227"

 onmouseover="gutterOver(227)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',227);">&nbsp;</span
></td><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn2899_228"

 onmouseover="gutterOver(228)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',228);">&nbsp;</span
></td><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn2899_229"

 onmouseover="gutterOver(229)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',229);">&nbsp;</span
></td><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn2899_230"

 onmouseover="gutterOver(230)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',230);">&nbsp;</span
></td><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn2899_231"

 onmouseover="gutterOver(231)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',231);">&nbsp;</span
></td><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn2899_232"

 onmouseover="gutterOver(232)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',232);">&nbsp;</span
></td><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn2899_233"

 onmouseover="gutterOver(233)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',233);">&nbsp;</span
></td><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn2899_234"

 onmouseover="gutterOver(234)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',234);">&nbsp;</span
></td><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn2899_235"

 onmouseover="gutterOver(235)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',235);">&nbsp;</span
></td><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn2899_236"

 onmouseover="gutterOver(236)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',236);">&nbsp;</span
></td><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn2899_237"

 onmouseover="gutterOver(237)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',237);">&nbsp;</span
></td><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn2899_238"

 onmouseover="gutterOver(238)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',238);">&nbsp;</span
></td><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn2899_239"

 onmouseover="gutterOver(239)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',239);">&nbsp;</span
></td><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn2899_240"

 onmouseover="gutterOver(240)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',240);">&nbsp;</span
></td><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn2899_241"

 onmouseover="gutterOver(241)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',241);">&nbsp;</span
></td><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn2899_242"

 onmouseover="gutterOver(242)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',242);">&nbsp;</span
></td><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn2899_243"

 onmouseover="gutterOver(243)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',243);">&nbsp;</span
></td><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn2899_244"

 onmouseover="gutterOver(244)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',244);">&nbsp;</span
></td><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn2899_245"

 onmouseover="gutterOver(245)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',245);">&nbsp;</span
></td><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn2899_246"

 onmouseover="gutterOver(246)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',246);">&nbsp;</span
></td><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn2899_247"

 onmouseover="gutterOver(247)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',247);">&nbsp;</span
></td><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn2899_248"

 onmouseover="gutterOver(248)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',248);">&nbsp;</span
></td><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn2899_249"

 onmouseover="gutterOver(249)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',249);">&nbsp;</span
></td><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn2899_250"

 onmouseover="gutterOver(250)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',250);">&nbsp;</span
></td><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn2899_251"

 onmouseover="gutterOver(251)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',251);">&nbsp;</span
></td><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn2899_252"

 onmouseover="gutterOver(252)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',252);">&nbsp;</span
></td><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn2899_253"

 onmouseover="gutterOver(253)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',253);">&nbsp;</span
></td><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn2899_254"

 onmouseover="gutterOver(254)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',254);">&nbsp;</span
></td><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn2899_255"

 onmouseover="gutterOver(255)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',255);">&nbsp;</span
></td><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn2899_256"

 onmouseover="gutterOver(256)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',256);">&nbsp;</span
></td><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn2899_257"

 onmouseover="gutterOver(257)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',257);">&nbsp;</span
></td><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn2899_258"

 onmouseover="gutterOver(258)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',258);">&nbsp;</span
></td><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn2899_259"

 onmouseover="gutterOver(259)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',259);">&nbsp;</span
></td><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn2899_260"

 onmouseover="gutterOver(260)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',260);">&nbsp;</span
></td><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn2899_261"

 onmouseover="gutterOver(261)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',261);">&nbsp;</span
></td><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn2899_262"

 onmouseover="gutterOver(262)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',262);">&nbsp;</span
></td><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn2899_263"

 onmouseover="gutterOver(263)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',263);">&nbsp;</span
></td><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn2899_264"

 onmouseover="gutterOver(264)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',264);">&nbsp;</span
></td><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn2899_265"

 onmouseover="gutterOver(265)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',265);">&nbsp;</span
></td><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn2899_266"

 onmouseover="gutterOver(266)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',266);">&nbsp;</span
></td><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn2899_267"

 onmouseover="gutterOver(267)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',267);">&nbsp;</span
></td><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn2899_268"

 onmouseover="gutterOver(268)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',268);">&nbsp;</span
></td><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn2899_269"

 onmouseover="gutterOver(269)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',269);">&nbsp;</span
></td><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn2899_270"

 onmouseover="gutterOver(270)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',270);">&nbsp;</span
></td><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn2899_271"

 onmouseover="gutterOver(271)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',271);">&nbsp;</span
></td><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn2899_272"

 onmouseover="gutterOver(272)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',272);">&nbsp;</span
></td><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn2899_273"

 onmouseover="gutterOver(273)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',273);">&nbsp;</span
></td><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn2899_274"

 onmouseover="gutterOver(274)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',274);">&nbsp;</span
></td><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn2899_275"

 onmouseover="gutterOver(275)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',275);">&nbsp;</span
></td><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn2899_276"

 onmouseover="gutterOver(276)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',276);">&nbsp;</span
></td><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn2899_277"

 onmouseover="gutterOver(277)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',277);">&nbsp;</span
></td><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn2899_278"

 onmouseover="gutterOver(278)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',278);">&nbsp;</span
></td><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn2899_279"

 onmouseover="gutterOver(279)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',279);">&nbsp;</span
></td><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn2899_280"

 onmouseover="gutterOver(280)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',280);">&nbsp;</span
></td><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn2899_281"

 onmouseover="gutterOver(281)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',281);">&nbsp;</span
></td><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn2899_282"

 onmouseover="gutterOver(282)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',282);">&nbsp;</span
></td><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn2899_283"

 onmouseover="gutterOver(283)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',283);">&nbsp;</span
></td><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn2899_284"

 onmouseover="gutterOver(284)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',284);">&nbsp;</span
></td><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn2899_285"

 onmouseover="gutterOver(285)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',285);">&nbsp;</span
></td><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn2899_286"

 onmouseover="gutterOver(286)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',286);">&nbsp;</span
></td><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn2899_287"

 onmouseover="gutterOver(287)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',287);">&nbsp;</span
></td><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn2899_288"

 onmouseover="gutterOver(288)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',288);">&nbsp;</span
></td><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn2899_289"

 onmouseover="gutterOver(289)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',289);">&nbsp;</span
></td><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn2899_290"

 onmouseover="gutterOver(290)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',290);">&nbsp;</span
></td><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn2899_291"

 onmouseover="gutterOver(291)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',291);">&nbsp;</span
></td><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn2899_292"

 onmouseover="gutterOver(292)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',292);">&nbsp;</span
></td><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn2899_293"

 onmouseover="gutterOver(293)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',293);">&nbsp;</span
></td><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn2899_294"

 onmouseover="gutterOver(294)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',294);">&nbsp;</span
></td><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn2899_295"

 onmouseover="gutterOver(295)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',295);">&nbsp;</span
></td><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn2899_296"

 onmouseover="gutterOver(296)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',296);">&nbsp;</span
></td><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn2899_297"

 onmouseover="gutterOver(297)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',297);">&nbsp;</span
></td><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn2899_298"

 onmouseover="gutterOver(298)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',298);">&nbsp;</span
></td><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn2899_299"

 onmouseover="gutterOver(299)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',299);">&nbsp;</span
></td><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn2899_300"

 onmouseover="gutterOver(300)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',300);">&nbsp;</span
></td><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn2899_301"

 onmouseover="gutterOver(301)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',301);">&nbsp;</span
></td><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn2899_302"

 onmouseover="gutterOver(302)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',302);">&nbsp;</span
></td><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn2899_303"

 onmouseover="gutterOver(303)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',303);">&nbsp;</span
></td><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn2899_304"

 onmouseover="gutterOver(304)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',304);">&nbsp;</span
></td><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn2899_305"

 onmouseover="gutterOver(305)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',305);">&nbsp;</span
></td><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn2899_306"

 onmouseover="gutterOver(306)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',306);">&nbsp;</span
></td><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn2899_307"

 onmouseover="gutterOver(307)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',307);">&nbsp;</span
></td><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn2899_308"

 onmouseover="gutterOver(308)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',308);">&nbsp;</span
></td><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn2899_309"

 onmouseover="gutterOver(309)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',309);">&nbsp;</span
></td><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn2899_310"

 onmouseover="gutterOver(310)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',310);">&nbsp;</span
></td><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn2899_311"

 onmouseover="gutterOver(311)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',311);">&nbsp;</span
></td><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn2899_312"

 onmouseover="gutterOver(312)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',312);">&nbsp;</span
></td><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn2899_313"

 onmouseover="gutterOver(313)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',313);">&nbsp;</span
></td><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn2899_314"

 onmouseover="gutterOver(314)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',314);">&nbsp;</span
></td><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn2899_315"

 onmouseover="gutterOver(315)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',315);">&nbsp;</span
></td><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn2899_316"

 onmouseover="gutterOver(316)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',316);">&nbsp;</span
></td><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn2899_317"

 onmouseover="gutterOver(317)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',317);">&nbsp;</span
></td><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn2899_318"

 onmouseover="gutterOver(318)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',318);">&nbsp;</span
></td><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn2899_319"

 onmouseover="gutterOver(319)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',319);">&nbsp;</span
></td><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn2899_320"

 onmouseover="gutterOver(320)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',320);">&nbsp;</span
></td><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn2899_321"

 onmouseover="gutterOver(321)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',321);">&nbsp;</span
></td><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn2899_322"

 onmouseover="gutterOver(322)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',322);">&nbsp;</span
></td><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn2899_323"

 onmouseover="gutterOver(323)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',323);">&nbsp;</span
></td><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn2899_324"

 onmouseover="gutterOver(324)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',324);">&nbsp;</span
></td><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn2899_325"

 onmouseover="gutterOver(325)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',325);">&nbsp;</span
></td><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn2899_326"

 onmouseover="gutterOver(326)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',326);">&nbsp;</span
></td><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn2899_327"

 onmouseover="gutterOver(327)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',327);">&nbsp;</span
></td><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn2899_328"

 onmouseover="gutterOver(328)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',328);">&nbsp;</span
></td><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn2899_329"

 onmouseover="gutterOver(329)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',329);">&nbsp;</span
></td><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn2899_330"

 onmouseover="gutterOver(330)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',330);">&nbsp;</span
></td><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn2899_331"

 onmouseover="gutterOver(331)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',331);">&nbsp;</span
></td><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn2899_332"

 onmouseover="gutterOver(332)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',332);">&nbsp;</span
></td><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn2899_333"

 onmouseover="gutterOver(333)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',333);">&nbsp;</span
></td><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn2899_334"

 onmouseover="gutterOver(334)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',334);">&nbsp;</span
></td><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn2899_335"

 onmouseover="gutterOver(335)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',335);">&nbsp;</span
></td><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn2899_336"

 onmouseover="gutterOver(336)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',336);">&nbsp;</span
></td><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn2899_337"

 onmouseover="gutterOver(337)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',337);">&nbsp;</span
></td><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn2899_338"

 onmouseover="gutterOver(338)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',338);">&nbsp;</span
></td><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn2899_339"

 onmouseover="gutterOver(339)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',339);">&nbsp;</span
></td><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn2899_340"

 onmouseover="gutterOver(340)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',340);">&nbsp;</span
></td><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn2899_341"

 onmouseover="gutterOver(341)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',341);">&nbsp;</span
></td><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn2899_342"

 onmouseover="gutterOver(342)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',342);">&nbsp;</span
></td><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn2899_343"

 onmouseover="gutterOver(343)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',343);">&nbsp;</span
></td><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn2899_344"

 onmouseover="gutterOver(344)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',344);">&nbsp;</span
></td><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn2899_345"

 onmouseover="gutterOver(345)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',345);">&nbsp;</span
></td><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn2899_346"

 onmouseover="gutterOver(346)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',346);">&nbsp;</span
></td><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn2899_347"

 onmouseover="gutterOver(347)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',347);">&nbsp;</span
></td><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn2899_348"

 onmouseover="gutterOver(348)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',348);">&nbsp;</span
></td><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn2899_349"

 onmouseover="gutterOver(349)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',349);">&nbsp;</span
></td><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn2899_350"

 onmouseover="gutterOver(350)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',350);">&nbsp;</span
></td><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn2899_351"

 onmouseover="gutterOver(351)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',351);">&nbsp;</span
></td><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn2899_352"

 onmouseover="gutterOver(352)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',352);">&nbsp;</span
></td><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn2899_353"

 onmouseover="gutterOver(353)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',353);">&nbsp;</span
></td><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn2899_354"

 onmouseover="gutterOver(354)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',354);">&nbsp;</span
></td><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn2899_355"

 onmouseover="gutterOver(355)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',355);">&nbsp;</span
></td><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn2899_356"

 onmouseover="gutterOver(356)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',356);">&nbsp;</span
></td><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn2899_357"

 onmouseover="gutterOver(357)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',357);">&nbsp;</span
></td><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn2899_358"

 onmouseover="gutterOver(358)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',358);">&nbsp;</span
></td><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn2899_359"

 onmouseover="gutterOver(359)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',359);">&nbsp;</span
></td><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn2899_360"

 onmouseover="gutterOver(360)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',360);">&nbsp;</span
></td><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn2899_361"

 onmouseover="gutterOver(361)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',361);">&nbsp;</span
></td><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn2899_362"

 onmouseover="gutterOver(362)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',362);">&nbsp;</span
></td><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn2899_363"

 onmouseover="gutterOver(363)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',363);">&nbsp;</span
></td><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn2899_364"

 onmouseover="gutterOver(364)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',364);">&nbsp;</span
></td><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn2899_365"

 onmouseover="gutterOver(365)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',365);">&nbsp;</span
></td><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn2899_366"

 onmouseover="gutterOver(366)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',366);">&nbsp;</span
></td><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn2899_367"

 onmouseover="gutterOver(367)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',367);">&nbsp;</span
></td><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn2899_368"

 onmouseover="gutterOver(368)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',368);">&nbsp;</span
></td><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn2899_369"

 onmouseover="gutterOver(369)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',369);">&nbsp;</span
></td><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn2899_370"

 onmouseover="gutterOver(370)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',370);">&nbsp;</span
></td><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn2899_371"

 onmouseover="gutterOver(371)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',371);">&nbsp;</span
></td><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn2899_372"

 onmouseover="gutterOver(372)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',372);">&nbsp;</span
></td><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn2899_373"

 onmouseover="gutterOver(373)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',373);">&nbsp;</span
></td><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn2899_374"

 onmouseover="gutterOver(374)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',374);">&nbsp;</span
></td><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn2899_375"

 onmouseover="gutterOver(375)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',375);">&nbsp;</span
></td><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn2899_376"

 onmouseover="gutterOver(376)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',376);">&nbsp;</span
></td><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn2899_377"

 onmouseover="gutterOver(377)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',377);">&nbsp;</span
></td><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn2899_378"

 onmouseover="gutterOver(378)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',378);">&nbsp;</span
></td><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn2899_379"

 onmouseover="gutterOver(379)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',379);">&nbsp;</span
></td><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn2899_380"

 onmouseover="gutterOver(380)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',380);">&nbsp;</span
></td><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn2899_381"

 onmouseover="gutterOver(381)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',381);">&nbsp;</span
></td><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn2899_382"

 onmouseover="gutterOver(382)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',382);">&nbsp;</span
></td><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn2899_383"

 onmouseover="gutterOver(383)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',383);">&nbsp;</span
></td><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn2899_384"

 onmouseover="gutterOver(384)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',384);">&nbsp;</span
></td><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn2899_385"

 onmouseover="gutterOver(385)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',385);">&nbsp;</span
></td><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn2899_386"

 onmouseover="gutterOver(386)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',386);">&nbsp;</span
></td><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn2899_387"

 onmouseover="gutterOver(387)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',387);">&nbsp;</span
></td><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn2899_388"

 onmouseover="gutterOver(388)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',388);">&nbsp;</span
></td><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn2899_389"

 onmouseover="gutterOver(389)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',389);">&nbsp;</span
></td><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn2899_390"

 onmouseover="gutterOver(390)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',390);">&nbsp;</span
></td><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn2899_391"

 onmouseover="gutterOver(391)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',391);">&nbsp;</span
></td><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn2899_392"

 onmouseover="gutterOver(392)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',392);">&nbsp;</span
></td><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn2899_393"

 onmouseover="gutterOver(393)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',393);">&nbsp;</span
></td><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn2899_394"

 onmouseover="gutterOver(394)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',394);">&nbsp;</span
></td><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn2899_395"

 onmouseover="gutterOver(395)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',395);">&nbsp;</span
></td><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn2899_396"

 onmouseover="gutterOver(396)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',396);">&nbsp;</span
></td><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn2899_397"

 onmouseover="gutterOver(397)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',397);">&nbsp;</span
></td><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn2899_398"

 onmouseover="gutterOver(398)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',398);">&nbsp;</span
></td><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn2899_399"

 onmouseover="gutterOver(399)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',399);">&nbsp;</span
></td><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn2899_400"

 onmouseover="gutterOver(400)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',400);">&nbsp;</span
></td><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn2899_401"

 onmouseover="gutterOver(401)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',401);">&nbsp;</span
></td><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn2899_402"

 onmouseover="gutterOver(402)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',402);">&nbsp;</span
></td><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn2899_403"

 onmouseover="gutterOver(403)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',403);">&nbsp;</span
></td><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn2899_404"

 onmouseover="gutterOver(404)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',404);">&nbsp;</span
></td><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn2899_405"

 onmouseover="gutterOver(405)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',405);">&nbsp;</span
></td><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn2899_406"

 onmouseover="gutterOver(406)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',406);">&nbsp;</span
></td><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn2899_407"

 onmouseover="gutterOver(407)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',407);">&nbsp;</span
></td><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn2899_408"

 onmouseover="gutterOver(408)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',408);">&nbsp;</span
></td><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn2899_409"

 onmouseover="gutterOver(409)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',409);">&nbsp;</span
></td><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn2899_410"

 onmouseover="gutterOver(410)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',410);">&nbsp;</span
></td><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn2899_411"

 onmouseover="gutterOver(411)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',411);">&nbsp;</span
></td><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn2899_412"

 onmouseover="gutterOver(412)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',412);">&nbsp;</span
></td><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn2899_413"

 onmouseover="gutterOver(413)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',413);">&nbsp;</span
></td><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn2899_414"

 onmouseover="gutterOver(414)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',414);">&nbsp;</span
></td><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn2899_415"

 onmouseover="gutterOver(415)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',415);">&nbsp;</span
></td><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn2899_416"

 onmouseover="gutterOver(416)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',416);">&nbsp;</span
></td><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn2899_417"

 onmouseover="gutterOver(417)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',417);">&nbsp;</span
></td><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn2899_418"

 onmouseover="gutterOver(418)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',418);">&nbsp;</span
></td><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn2899_419"

 onmouseover="gutterOver(419)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',419);">&nbsp;</span
></td><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn2899_420"

 onmouseover="gutterOver(420)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',420);">&nbsp;</span
></td><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn2899_421"

 onmouseover="gutterOver(421)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',421);">&nbsp;</span
></td><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn2899_422"

 onmouseover="gutterOver(422)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',422);">&nbsp;</span
></td><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn2899_423"

 onmouseover="gutterOver(423)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',423);">&nbsp;</span
></td><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn2899_424"

 onmouseover="gutterOver(424)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',424);">&nbsp;</span
></td><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn2899_425"

 onmouseover="gutterOver(425)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',425);">&nbsp;</span
></td><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn2899_426"

 onmouseover="gutterOver(426)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',426);">&nbsp;</span
></td><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn2899_427"

 onmouseover="gutterOver(427)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',427);">&nbsp;</span
></td><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn2899_428"

 onmouseover="gutterOver(428)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',428);">&nbsp;</span
></td><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn2899_429"

 onmouseover="gutterOver(429)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',429);">&nbsp;</span
></td><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn2899_430"

 onmouseover="gutterOver(430)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',430);">&nbsp;</span
></td><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn2899_431"

 onmouseover="gutterOver(431)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',431);">&nbsp;</span
></td><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn2899_432"

 onmouseover="gutterOver(432)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',432);">&nbsp;</span
></td><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn2899_433"

 onmouseover="gutterOver(433)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',433);">&nbsp;</span
></td><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn2899_434"

 onmouseover="gutterOver(434)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',434);">&nbsp;</span
></td><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn2899_435"

 onmouseover="gutterOver(435)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',435);">&nbsp;</span
></td><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn2899_436"

 onmouseover="gutterOver(436)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',436);">&nbsp;</span
></td><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn2899_437"

 onmouseover="gutterOver(437)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',437);">&nbsp;</span
></td><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn2899_438"

 onmouseover="gutterOver(438)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',438);">&nbsp;</span
></td><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn2899_439"

 onmouseover="gutterOver(439)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',439);">&nbsp;</span
></td><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn2899_440"

 onmouseover="gutterOver(440)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',440);">&nbsp;</span
></td><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn2899_441"

 onmouseover="gutterOver(441)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',441);">&nbsp;</span
></td><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn2899_442"

 onmouseover="gutterOver(442)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',442);">&nbsp;</span
></td><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn2899_443"

 onmouseover="gutterOver(443)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn2899',443);">&nbsp;</span
></td><td id="443"><a href="#443">443</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn2899_1

 onmouseover="gutterOver(1)"

><td class="source">#ifndef DOUBLE_EXPONENTIAL_INTEGRATION_CONSTANTS_H<br></td></tr
><tr
id=sl_svn2899_2

 onmouseover="gutterOver(2)"

><td class="source">#define DOUBLE_EXPONENTIAL_INTEGRATION_CONSTANTS_H<br></td></tr
><tr
id=sl_svn2899_3

 onmouseover="gutterOver(3)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_4

 onmouseover="gutterOver(4)"

><td class="source">/*<br></td></tr
><tr
id=sl_svn2899_5

 onmouseover="gutterOver(5)"

><td class="source">The double exponential rule is based on the observation that the trapezoid rule converges<br></td></tr
><tr
id=sl_svn2899_6

 onmouseover="gutterOver(6)"

><td class="source">very rapidly for functions on the entire real line that go to zero like exp( - exp(t) ).<br></td></tr
><tr
id=sl_svn2899_7

 onmouseover="gutterOver(7)"

><td class="source">The change of variables x = tanh( pi sinh(t) /2) transforms an integral over [-1, 1]<br></td></tr
><tr
id=sl_svn2899_8

 onmouseover="gutterOver(8)"

><td class="source">into an integral with integrand suited to the double exponential rule.<br></td></tr
><tr
id=sl_svn2899_9

 onmouseover="gutterOver(9)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_10

 onmouseover="gutterOver(10)"

><td class="source">The transformed integral is infinite, but we truncate the domain of integration to [-3, 3].<br></td></tr
><tr
id=sl_svn2899_11

 onmouseover="gutterOver(11)"

><td class="source">The limit &#39;3&#39; was chosen for two reasons: for t = 3, the transformed x values<br></td></tr
><tr
id=sl_svn2899_12

 onmouseover="gutterOver(12)"

><td class="source">are nearly equal to 1 for 12 or more significant figures.  Also, for t = 3, the<br></td></tr
><tr
id=sl_svn2899_13

 onmouseover="gutterOver(13)"

><td class="source">smallest weights are 12 orders of magnitude smaller than the largest weights; setting<br></td></tr
><tr
id=sl_svn2899_14

 onmouseover="gutterOver(14)"

><td class="source">the cutoff larger than 3 would not have a significant impact on the integral value<br></td></tr
><tr
id=sl_svn2899_15

 onmouseover="gutterOver(15)"

><td class="source">unless there is a strong singularity at one of the end points.<br></td></tr
><tr
id=sl_svn2899_16

 onmouseover="gutterOver(16)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_17

 onmouseover="gutterOver(17)"

><td class="source">The change of variables x(t) is an odd function, i.e. x(-t) = -x(t), and so we need only<br></td></tr
><tr
id=sl_svn2899_18

 onmouseover="gutterOver(18)"

><td class="source">store the positive x values.  Also, the derivative w(t) = x&#39;(t) is even, i.e. w(-t) = w(t),<br></td></tr
><tr
id=sl_svn2899_19

 onmouseover="gutterOver(19)"

><td class="source">and so we need only store the weights corresponding to positive values of x.<br></td></tr
><tr
id=sl_svn2899_20

 onmouseover="gutterOver(20)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_21

 onmouseover="gutterOver(21)"

><td class="source">The integration first applies the trapezoid rule to [-3, 3] in steps of size 1.<br></td></tr
><tr
id=sl_svn2899_22

 onmouseover="gutterOver(22)"

><td class="source">Then it subsequently cuts the step size in half each time, comparing the results.<br></td></tr
><tr
id=sl_svn2899_23

 onmouseover="gutterOver(23)"

><td class="source">Integration stops when subsequent iterations are close enough together or the maximum<br></td></tr
><tr
id=sl_svn2899_24

 onmouseover="gutterOver(24)"

><td class="source">integration points have been used.<br></td></tr
><tr
id=sl_svn2899_25

 onmouseover="gutterOver(25)"

><td class="source">By cutting h in half, the previous integral can be reused; we only need evaluate the<br></td></tr
><tr
id=sl_svn2899_26

 onmouseover="gutterOver(26)"

><td class="source">integrand at the newly added points.<br></td></tr
><tr
id=sl_svn2899_27

 onmouseover="gutterOver(27)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_28

 onmouseover="gutterOver(28)"

><td class="source">Finally, note that we&#39;re not strictly using the trapezoid rule: we don&#39;t treat the<br></td></tr
><tr
id=sl_svn2899_29

 onmouseover="gutterOver(29)"

><td class="source">end points differently.  This is because we assume the values at the ends of the interval<br></td></tr
><tr
id=sl_svn2899_30

 onmouseover="gutterOver(30)"

><td class="source">hardly matter due to the rapid decay of the integrand.<br></td></tr
><tr
id=sl_svn2899_31

 onmouseover="gutterOver(31)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_32

 onmouseover="gutterOver(32)"

><td class="source">All values below were calculated with Mathematica.<br></td></tr
><tr
id=sl_svn2899_33

 onmouseover="gutterOver(33)"

><td class="source">*/<br></td></tr
><tr
id=sl_svn2899_34

 onmouseover="gutterOver(34)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_35

 onmouseover="gutterOver(35)"

><td class="source">static const double doubleExponentialAbcissas[] = <br></td></tr
><tr
id=sl_svn2899_36

 onmouseover="gutterOver(36)"

><td class="source">{<br></td></tr
><tr
id=sl_svn2899_37

 onmouseover="gutterOver(37)"

><td class="source">    // 1st layer abcissas: transformed 0, 1, 2, 3<br></td></tr
><tr
id=sl_svn2899_38

 onmouseover="gutterOver(38)"

><td class="source">    0.00000000000000000000,<br></td></tr
><tr
id=sl_svn2899_39

 onmouseover="gutterOver(39)"

><td class="source">    0.95136796407274694573,<br></td></tr
><tr
id=sl_svn2899_40

 onmouseover="gutterOver(40)"

><td class="source">    0.99997747719246159286,<br></td></tr
><tr
id=sl_svn2899_41

 onmouseover="gutterOver(41)"

><td class="source">    0.99999999999995705839,<br></td></tr
><tr
id=sl_svn2899_42

 onmouseover="gutterOver(42)"

><td class="source">    // 2nd layer abcissas: transformed 1/2, 3/2, 5/2<br></td></tr
><tr
id=sl_svn2899_43

 onmouseover="gutterOver(43)"

><td class="source">    0.67427149224843582608,<br></td></tr
><tr
id=sl_svn2899_44

 onmouseover="gutterOver(44)"

><td class="source">    0.99751485645722438683,<br></td></tr
><tr
id=sl_svn2899_45

 onmouseover="gutterOver(45)"

><td class="source">    0.99999998887566488198,<br></td></tr
><tr
id=sl_svn2899_46

 onmouseover="gutterOver(46)"

><td class="source">    // 3rd layer abcissas: transformed 1/4, 3/4, ...<br></td></tr
><tr
id=sl_svn2899_47

 onmouseover="gutterOver(47)"

><td class="source">    0.37720973816403417379,<br></td></tr
><tr
id=sl_svn2899_48

 onmouseover="gutterOver(48)"

><td class="source">    0.85956905868989663517,<br></td></tr
><tr
id=sl_svn2899_49

 onmouseover="gutterOver(49)"

><td class="source">    0.98704056050737689169,<br></td></tr
><tr
id=sl_svn2899_50

 onmouseover="gutterOver(50)"

><td class="source">    0.99968826402835320905,<br></td></tr
><tr
id=sl_svn2899_51

 onmouseover="gutterOver(51)"

><td class="source">    0.99999920473711471266,<br></td></tr
><tr
id=sl_svn2899_52

 onmouseover="gutterOver(52)"

><td class="source">    0.99999999995285644818,<br></td></tr
><tr
id=sl_svn2899_53

 onmouseover="gutterOver(53)"

><td class="source">    // 4th layer abcissas: transformed 1/8, 3/8, ...<br></td></tr
><tr
id=sl_svn2899_54

 onmouseover="gutterOver(54)"

><td class="source">    0.19435700332493543161,<br></td></tr
><tr
id=sl_svn2899_55

 onmouseover="gutterOver(55)"

><td class="source">    0.53914670538796776905,<br></td></tr
><tr
id=sl_svn2899_56

 onmouseover="gutterOver(56)"

><td class="source">    0.78060743898320029925,<br></td></tr
><tr
id=sl_svn2899_57

 onmouseover="gutterOver(57)"

><td class="source">    0.91487926326457461091,<br></td></tr
><tr
id=sl_svn2899_58

 onmouseover="gutterOver(58)"

><td class="source">    0.97396686819567744856,<br></td></tr
><tr
id=sl_svn2899_59

 onmouseover="gutterOver(59)"

><td class="source">    0.99405550663140214329,<br></td></tr
><tr
id=sl_svn2899_60

 onmouseover="gutterOver(60)"

><td class="source">    0.99906519645578584642,<br></td></tr
><tr
id=sl_svn2899_61

 onmouseover="gutterOver(61)"

><td class="source">    0.99990938469514399984,<br></td></tr
><tr
id=sl_svn2899_62

 onmouseover="gutterOver(62)"

><td class="source">    0.99999531604122052843,<br></td></tr
><tr
id=sl_svn2899_63

 onmouseover="gutterOver(63)"

><td class="source">    0.99999989278161241838,<br></td></tr
><tr
id=sl_svn2899_64

 onmouseover="gutterOver(64)"

><td class="source">    0.99999999914270509218,<br></td></tr
><tr
id=sl_svn2899_65

 onmouseover="gutterOver(65)"

><td class="source">    0.99999999999823216531,<br></td></tr
><tr
id=sl_svn2899_66

 onmouseover="gutterOver(66)"

><td class="source">    // 5th layer abcissa: transformed 1/16, 3/16, ...<br></td></tr
><tr
id=sl_svn2899_67

 onmouseover="gutterOver(67)"

><td class="source">    0.097923885287832333262,<br></td></tr
><tr
id=sl_svn2899_68

 onmouseover="gutterOver(68)"

><td class="source">    0.28787993274271591456,<br></td></tr
><tr
id=sl_svn2899_69

 onmouseover="gutterOver(69)"

><td class="source">    0.46125354393958570440,<br></td></tr
><tr
id=sl_svn2899_70

 onmouseover="gutterOver(70)"

><td class="source">    0.61027365750063894488,<br></td></tr
><tr
id=sl_svn2899_71

 onmouseover="gutterOver(71)"

><td class="source">    0.73101803479256151149,<br></td></tr
><tr
id=sl_svn2899_72

 onmouseover="gutterOver(72)"

><td class="source">    0.82331700550640237006,<br></td></tr
><tr
id=sl_svn2899_73

 onmouseover="gutterOver(73)"

><td class="source">    0.88989140278426019808,<br></td></tr
><tr
id=sl_svn2899_74

 onmouseover="gutterOver(74)"

><td class="source">    0.93516085752198468323,<br></td></tr
><tr
id=sl_svn2899_75

 onmouseover="gutterOver(75)"

><td class="source">    0.96411216422354729193,<br></td></tr
><tr
id=sl_svn2899_76

 onmouseover="gutterOver(76)"

><td class="source">    0.98145482667733517003,<br></td></tr
><tr
id=sl_svn2899_77

 onmouseover="gutterOver(77)"

><td class="source">    0.99112699244169880223,<br></td></tr
><tr
id=sl_svn2899_78

 onmouseover="gutterOver(78)"

><td class="source">    0.99610866543750854254,<br></td></tr
><tr
id=sl_svn2899_79

 onmouseover="gutterOver(79)"

><td class="source">    0.99845420876769773751,<br></td></tr
><tr
id=sl_svn2899_80

 onmouseover="gutterOver(80)"

><td class="source">    0.99945143443527460584,<br></td></tr
><tr
id=sl_svn2899_81

 onmouseover="gutterOver(81)"

><td class="source">    0.99982882207287494166,<br></td></tr
><tr
id=sl_svn2899_82

 onmouseover="gutterOver(82)"

><td class="source">    0.99995387100562796075,<br></td></tr
><tr
id=sl_svn2899_83

 onmouseover="gutterOver(83)"

><td class="source">    0.99998948201481850361,<br></td></tr
><tr
id=sl_svn2899_84

 onmouseover="gutterOver(84)"

><td class="source">    0.99999801714059543208,<br></td></tr
><tr
id=sl_svn2899_85

 onmouseover="gutterOver(85)"

><td class="source">    0.99999969889415261122,<br></td></tr
><tr
id=sl_svn2899_86

 onmouseover="gutterOver(86)"

><td class="source">    0.99999996423908091534,<br></td></tr
><tr
id=sl_svn2899_87

 onmouseover="gutterOver(87)"

><td class="source">    0.99999999678719909830,<br></td></tr
><tr
id=sl_svn2899_88

 onmouseover="gutterOver(88)"

><td class="source">    0.99999999978973286224,<br></td></tr
><tr
id=sl_svn2899_89

 onmouseover="gutterOver(89)"

><td class="source">    0.99999999999039393352,<br></td></tr
><tr
id=sl_svn2899_90

 onmouseover="gutterOver(90)"

><td class="source">    0.99999999999970809734,<br></td></tr
><tr
id=sl_svn2899_91

 onmouseover="gutterOver(91)"

><td class="source">    // 6th layer abcissas: transformed 1/32, 3/32, ...<br></td></tr
><tr
id=sl_svn2899_92

 onmouseover="gutterOver(92)"

><td class="source">    0.049055967305077886315,<br></td></tr
><tr
id=sl_svn2899_93

 onmouseover="gutterOver(93)"

><td class="source">    0.14641798429058794053,<br></td></tr
><tr
id=sl_svn2899_94

 onmouseover="gutterOver(94)"

><td class="source">    0.24156631953888365838,<br></td></tr
><tr
id=sl_svn2899_95

 onmouseover="gutterOver(95)"

><td class="source">    0.33314226457763809244,<br></td></tr
><tr
id=sl_svn2899_96

 onmouseover="gutterOver(96)"

><td class="source">    0.41995211127844715849,<br></td></tr
><tr
id=sl_svn2899_97

 onmouseover="gutterOver(97)"

><td class="source">    0.50101338937930910152,<br></td></tr
><tr
id=sl_svn2899_98

 onmouseover="gutterOver(98)"

><td class="source">    0.57558449063515165995,<br></td></tr
><tr
id=sl_svn2899_99

 onmouseover="gutterOver(99)"

><td class="source">    0.64317675898520470128,<br></td></tr
><tr
id=sl_svn2899_100

 onmouseover="gutterOver(100)"

><td class="source">    0.70355000514714201566,<br></td></tr
><tr
id=sl_svn2899_101

 onmouseover="gutterOver(101)"

><td class="source">    0.75669390863372994941,<br></td></tr
><tr
id=sl_svn2899_102

 onmouseover="gutterOver(102)"

><td class="source">    0.80279874134324126576,<br></td></tr
><tr
id=sl_svn2899_103

 onmouseover="gutterOver(103)"

><td class="source">    0.84221924635075686382,<br></td></tr
><tr
id=sl_svn2899_104

 onmouseover="gutterOver(104)"

><td class="source">    0.87543539763040867837,<br></td></tr
><tr
id=sl_svn2899_105

 onmouseover="gutterOver(105)"

><td class="source">    0.90301328151357387064,<br></td></tr
><tr
id=sl_svn2899_106

 onmouseover="gutterOver(106)"

><td class="source">    0.92556863406861266645,<br></td></tr
><tr
id=sl_svn2899_107

 onmouseover="gutterOver(107)"

><td class="source">    0.94373478605275715685,<br></td></tr
><tr
id=sl_svn2899_108

 onmouseover="gutterOver(108)"

><td class="source">    0.95813602271021369012,<br></td></tr
><tr
id=sl_svn2899_109

 onmouseover="gutterOver(109)"

><td class="source">    0.96936673289691733517,<br></td></tr
><tr
id=sl_svn2899_110

 onmouseover="gutterOver(110)"

><td class="source">    0.97797623518666497298,<br></td></tr
><tr
id=sl_svn2899_111

 onmouseover="gutterOver(111)"

><td class="source">    0.98445883116743083087,<br></td></tr
><tr
id=sl_svn2899_112

 onmouseover="gutterOver(112)"

><td class="source">    0.98924843109013389601,<br></td></tr
><tr
id=sl_svn2899_113

 onmouseover="gutterOver(113)"

><td class="source">    0.99271699719682728538,<br></td></tr
><tr
id=sl_svn2899_114

 onmouseover="gutterOver(114)"

><td class="source">    0.99517602615532735426,<br></td></tr
><tr
id=sl_svn2899_115

 onmouseover="gutterOver(115)"

><td class="source">    0.99688031812819187372,<br></td></tr
><tr
id=sl_svn2899_116

 onmouseover="gutterOver(116)"

><td class="source">    0.99803333631543375402,<br></td></tr
><tr
id=sl_svn2899_117

 onmouseover="gutterOver(117)"

><td class="source">    0.99879353429880589929,<br></td></tr
><tr
id=sl_svn2899_118

 onmouseover="gutterOver(118)"

><td class="source">    0.99928111192179195541,<br></td></tr
><tr
id=sl_svn2899_119

 onmouseover="gutterOver(119)"

><td class="source">    0.99958475035151758732,<br></td></tr
><tr
id=sl_svn2899_120

 onmouseover="gutterOver(120)"

><td class="source">    0.99976797159956083506,<br></td></tr
><tr
id=sl_svn2899_121

 onmouseover="gutterOver(121)"

><td class="source">    0.99987486504878034648,<br></td></tr
><tr
id=sl_svn2899_122

 onmouseover="gutterOver(122)"

><td class="source">    0.99993501992508242369,<br></td></tr
><tr
id=sl_svn2899_123

 onmouseover="gutterOver(123)"

><td class="source">    0.99996759306794345976,<br></td></tr
><tr
id=sl_svn2899_124

 onmouseover="gutterOver(124)"

><td class="source">    0.99998451990227082442,<br></td></tr
><tr
id=sl_svn2899_125

 onmouseover="gutterOver(125)"

><td class="source">    0.99999293787666288565,<br></td></tr
><tr
id=sl_svn2899_126

 onmouseover="gutterOver(126)"

><td class="source">    0.99999693244919035751,<br></td></tr
><tr
id=sl_svn2899_127

 onmouseover="gutterOver(127)"

><td class="source">    0.99999873547186590954,<br></td></tr
><tr
id=sl_svn2899_128

 onmouseover="gutterOver(128)"

><td class="source">    0.99999950700571943689,<br></td></tr
><tr
id=sl_svn2899_129

 onmouseover="gutterOver(129)"

><td class="source">    0.99999981889371276701,<br></td></tr
><tr
id=sl_svn2899_130

 onmouseover="gutterOver(130)"

><td class="source">    0.99999993755407837378,<br></td></tr
><tr
id=sl_svn2899_131

 onmouseover="gutterOver(131)"

><td class="source">    0.99999997987450320175,<br></td></tr
><tr
id=sl_svn2899_132

 onmouseover="gutterOver(132)"

><td class="source">    0.99999999396413420165,<br></td></tr
><tr
id=sl_svn2899_133

 onmouseover="gutterOver(133)"

><td class="source">    0.99999999832336194826,<br></td></tr
><tr
id=sl_svn2899_134

 onmouseover="gutterOver(134)"

><td class="source">    0.99999999957078777261,<br></td></tr
><tr
id=sl_svn2899_135

 onmouseover="gutterOver(135)"

><td class="source">    0.99999999989927772326,<br></td></tr
><tr
id=sl_svn2899_136

 onmouseover="gutterOver(136)"

><td class="source">    0.99999999997845533741,<br></td></tr
><tr
id=sl_svn2899_137

 onmouseover="gutterOver(137)"

><td class="source">    0.99999999999582460688,<br></td></tr
><tr
id=sl_svn2899_138

 onmouseover="gutterOver(138)"

><td class="source">    0.99999999999927152627,<br></td></tr
><tr
id=sl_svn2899_139

 onmouseover="gutterOver(139)"

><td class="source">    0.99999999999988636130,<br></td></tr
><tr
id=sl_svn2899_140

 onmouseover="gutterOver(140)"

><td class="source">    // 7th layer abcissas: transformed 1/64, 3/64, ...<br></td></tr
><tr
id=sl_svn2899_141

 onmouseover="gutterOver(141)"

><td class="source">    0.024539763574649160379,<br></td></tr
><tr
id=sl_svn2899_142

 onmouseover="gutterOver(142)"

><td class="source">    0.073525122985671294475,<br></td></tr
><tr
id=sl_svn2899_143

 onmouseover="gutterOver(143)"

><td class="source">    0.12222912220155764235,<br></td></tr
><tr
id=sl_svn2899_144

 onmouseover="gutterOver(144)"

><td class="source">    0.17046797238201051811,<br></td></tr
><tr
id=sl_svn2899_145

 onmouseover="gutterOver(145)"

><td class="source">    0.21806347346971200463,<br></td></tr
><tr
id=sl_svn2899_146

 onmouseover="gutterOver(146)"

><td class="source">    0.26484507658344795046,<br></td></tr
><tr
id=sl_svn2899_147

 onmouseover="gutterOver(147)"

><td class="source">    0.31065178055284596083,<br></td></tr
><tr
id=sl_svn2899_148

 onmouseover="gutterOver(148)"

><td class="source">    0.35533382516507453330,<br></td></tr
><tr
id=sl_svn2899_149

 onmouseover="gutterOver(149)"

><td class="source">    0.39875415046723775644,<br></td></tr
><tr
id=sl_svn2899_150

 onmouseover="gutterOver(150)"

><td class="source">    0.44078959903390086627,<br></td></tr
><tr
id=sl_svn2899_151

 onmouseover="gutterOver(151)"

><td class="source">    0.48133184611690504422,<br></td></tr
><tr
id=sl_svn2899_152

 onmouseover="gutterOver(152)"

><td class="source">    0.52028805069123015958,<br></td></tr
><tr
id=sl_svn2899_153

 onmouseover="gutterOver(153)"

><td class="source">    0.55758122826077823080,<br></td></tr
><tr
id=sl_svn2899_154

 onmouseover="gutterOver(154)"

><td class="source">    0.59315035359195315880,<br></td></tr
><tr
id=sl_svn2899_155

 onmouseover="gutterOver(155)"

><td class="source">    0.62695020805104287950,<br></td></tr
><tr
id=sl_svn2899_156

 onmouseover="gutterOver(156)"

><td class="source">    0.65895099174335012438,<br></td></tr
><tr
id=sl_svn2899_157

 onmouseover="gutterOver(157)"

><td class="source">    0.68913772506166767176,<br></td></tr
><tr
id=sl_svn2899_158

 onmouseover="gutterOver(158)"

><td class="source">    0.71750946748732412721,<br></td></tr
><tr
id=sl_svn2899_159

 onmouseover="gutterOver(159)"

><td class="source">    0.74407838354734739913,<br></td></tr
><tr
id=sl_svn2899_160

 onmouseover="gutterOver(160)"

><td class="source">    0.76886868676824658459,<br></td></tr
><tr
id=sl_svn2899_161

 onmouseover="gutterOver(161)"

><td class="source">    0.79191549237614211447,<br></td></tr
><tr
id=sl_svn2899_162

 onmouseover="gutterOver(162)"

><td class="source">    0.81326360850297385168,<br></td></tr
><tr
id=sl_svn2899_163

 onmouseover="gutterOver(163)"

><td class="source">    0.83296629391941087564,<br></td></tr
><tr
id=sl_svn2899_164

 onmouseover="gutterOver(164)"

><td class="source">    0.85108400798784873261,<br></td></tr
><tr
id=sl_svn2899_165

 onmouseover="gutterOver(165)"

><td class="source">    0.86768317577564598669,<br></td></tr
><tr
id=sl_svn2899_166

 onmouseover="gutterOver(166)"

><td class="source">    0.88283498824466895513,<br></td></tr
><tr
id=sl_svn2899_167

 onmouseover="gutterOver(167)"

><td class="source">    0.89661425428007602579,<br></td></tr
><tr
id=sl_svn2899_168

 onmouseover="gutterOver(168)"

><td class="source">    0.90909831816302043511,<br></td></tr
><tr
id=sl_svn2899_169

 onmouseover="gutterOver(169)"

><td class="source">    0.92036605303195280235,<br></td></tr
><tr
id=sl_svn2899_170

 onmouseover="gutterOver(170)"

><td class="source">    0.93049693799715340631,<br></td></tr
><tr
id=sl_svn2899_171

 onmouseover="gutterOver(171)"

><td class="source">    0.93957022393327475539,<br></td></tr
><tr
id=sl_svn2899_172

 onmouseover="gutterOver(172)"

><td class="source">    0.94766419061515309734,<br></td></tr
><tr
id=sl_svn2899_173

 onmouseover="gutterOver(173)"

><td class="source">    0.95485549580502268541,<br></td></tr
><tr
id=sl_svn2899_174

 onmouseover="gutterOver(174)"

><td class="source">    0.96121861515111640753,<br></td></tr
><tr
id=sl_svn2899_175

 onmouseover="gutterOver(175)"

><td class="source">    0.96682537031235585284,<br></td></tr
><tr
id=sl_svn2899_176

 onmouseover="gutterOver(176)"

><td class="source">    0.97174454156548730892,<br></td></tr
><tr
id=sl_svn2899_177

 onmouseover="gutterOver(177)"

><td class="source">    0.97604156025657673933,<br></td></tr
><tr
id=sl_svn2899_178

 onmouseover="gutterOver(178)"

><td class="source">    0.97977827580061576265,<br></td></tr
><tr
id=sl_svn2899_179

 onmouseover="gutterOver(179)"

><td class="source">    0.98301279148110110558,<br></td></tr
><tr
id=sl_svn2899_180

 onmouseover="gutterOver(180)"

><td class="source">    0.98579936302528343597,<br></td></tr
><tr
id=sl_svn2899_181

 onmouseover="gutterOver(181)"

><td class="source">    0.98818835380074264243,<br></td></tr
><tr
id=sl_svn2899_182

 onmouseover="gutterOver(182)"

><td class="source">    0.99022624046752774694,<br></td></tr
><tr
id=sl_svn2899_183

 onmouseover="gutterOver(183)"

><td class="source">    0.99195566300267761562,<br></td></tr
><tr
id=sl_svn2899_184

 onmouseover="gutterOver(184)"

><td class="source">    0.99341551316926403900,<br></td></tr
><tr
id=sl_svn2899_185

 onmouseover="gutterOver(185)"

><td class="source">    0.99464105571251119672,<br></td></tr
><tr
id=sl_svn2899_186

 onmouseover="gutterOver(186)"

><td class="source">    0.99566407681695316965,<br></td></tr
><tr
id=sl_svn2899_187

 onmouseover="gutterOver(187)"

><td class="source">    0.99651305464025377317,<br></td></tr
><tr
id=sl_svn2899_188

 onmouseover="gutterOver(188)"

><td class="source">    0.99721334704346870224,<br></td></tr
><tr
id=sl_svn2899_189

 onmouseover="gutterOver(189)"

><td class="source">    0.99778739195890653083,<br></td></tr
><tr
id=sl_svn2899_190

 onmouseover="gutterOver(190)"

><td class="source">    0.99825491617199629344,<br></td></tr
><tr
id=sl_svn2899_191

 onmouseover="gutterOver(191)"

><td class="source">    0.99863314864067747762,<br></td></tr
><tr
id=sl_svn2899_192

 onmouseover="gutterOver(192)"

><td class="source">    0.99893703483351217373,<br></td></tr
><tr
id=sl_svn2899_193

 onmouseover="gutterOver(193)"

><td class="source">    0.99917944893488591716,<br></td></tr
><tr
id=sl_svn2899_194

 onmouseover="gutterOver(194)"

><td class="source">    0.99937140114093768690,<br></td></tr
><tr
id=sl_svn2899_195

 onmouseover="gutterOver(195)"

><td class="source">    0.99952223765121720422,<br></td></tr
><tr
id=sl_svn2899_196

 onmouseover="gutterOver(196)"

><td class="source">    0.99963983134560036519,<br></td></tr
><tr
id=sl_svn2899_197

 onmouseover="gutterOver(197)"

><td class="source">    0.99973076151980848263,<br></td></tr
><tr
id=sl_svn2899_198

 onmouseover="gutterOver(198)"

><td class="source">    0.99980048143113838630,<br></td></tr
><tr
id=sl_svn2899_199

 onmouseover="gutterOver(199)"

><td class="source">    0.99985347277311141171,<br></td></tr
><tr
id=sl_svn2899_200

 onmouseover="gutterOver(200)"

><td class="source">    0.99989338654759256426,<br></td></tr
><tr
id=sl_svn2899_201

 onmouseover="gutterOver(201)"

><td class="source">    0.99992317012928932869,<br></td></tr
><tr
id=sl_svn2899_202

 onmouseover="gutterOver(202)"

><td class="source">    0.99994518061445869309,<br></td></tr
><tr
id=sl_svn2899_203

 onmouseover="gutterOver(203)"

><td class="source">    0.99996128480785666613,<br></td></tr
><tr
id=sl_svn2899_204

 onmouseover="gutterOver(204)"

><td class="source">    0.99997294642523223656,<br></td></tr
><tr
id=sl_svn2899_205

 onmouseover="gutterOver(205)"

><td class="source">    0.99998130127012072679,<br></td></tr
><tr
id=sl_svn2899_206

 onmouseover="gutterOver(206)"

><td class="source">    0.99998722128200062811,<br></td></tr
><tr
id=sl_svn2899_207

 onmouseover="gutterOver(207)"

><td class="source">    0.99999136844834487344,<br></td></tr
><tr
id=sl_svn2899_208

 onmouseover="gutterOver(208)"

><td class="source">    0.99999423962761663478,<br></td></tr
><tr
id=sl_svn2899_209

 onmouseover="gutterOver(209)"

><td class="source">    0.99999620334716617675,<br></td></tr
><tr
id=sl_svn2899_210

 onmouseover="gutterOver(210)"

><td class="source">    0.99999752962380516793,<br></td></tr
><tr
id=sl_svn2899_211

 onmouseover="gutterOver(211)"

><td class="source">    0.99999841381096473542,<br></td></tr
><tr
id=sl_svn2899_212

 onmouseover="gutterOver(212)"

><td class="source">    0.99999899541068996962,<br></td></tr
><tr
id=sl_svn2899_213

 onmouseover="gutterOver(213)"

><td class="source">    0.99999937270733536947,<br></td></tr
><tr
id=sl_svn2899_214

 onmouseover="gutterOver(214)"

><td class="source">    0.99999961398855024275,<br></td></tr
><tr
id=sl_svn2899_215

 onmouseover="gutterOver(215)"

><td class="source">    0.99999976602333243312,<br></td></tr
><tr
id=sl_svn2899_216

 onmouseover="gutterOver(216)"

><td class="source">    0.99999986037121459941,<br></td></tr
><tr
id=sl_svn2899_217

 onmouseover="gutterOver(217)"

><td class="source">    0.99999991800479471056,<br></td></tr
><tr
id=sl_svn2899_218

 onmouseover="gutterOver(218)"

><td class="source">    0.99999995264266446185,<br></td></tr
><tr
id=sl_svn2899_219

 onmouseover="gutterOver(219)"

><td class="source">    0.99999997311323594362,<br></td></tr
><tr
id=sl_svn2899_220

 onmouseover="gutterOver(220)"

><td class="source">    0.99999998500307631173,<br></td></tr
><tr
id=sl_svn2899_221

 onmouseover="gutterOver(221)"

><td class="source">    0.99999999178645609907,<br></td></tr
><tr
id=sl_svn2899_222

 onmouseover="gutterOver(222)"

><td class="source">    0.99999999558563361584,<br></td></tr
><tr
id=sl_svn2899_223

 onmouseover="gutterOver(223)"

><td class="source">    0.99999999767323673790,<br></td></tr
><tr
id=sl_svn2899_224

 onmouseover="gutterOver(224)"

><td class="source">    0.99999999879798350040,<br></td></tr
><tr
id=sl_svn2899_225

 onmouseover="gutterOver(225)"

><td class="source">    0.99999999939177687583,<br></td></tr
><tr
id=sl_svn2899_226

 onmouseover="gutterOver(226)"

><td class="source">    0.99999999969875436925,<br></td></tr
><tr
id=sl_svn2899_227

 onmouseover="gutterOver(227)"

><td class="source">    0.99999999985405611550,<br></td></tr
><tr
id=sl_svn2899_228

 onmouseover="gutterOver(228)"

><td class="source">    0.99999999993088839501,<br></td></tr
><tr
id=sl_svn2899_229

 onmouseover="gutterOver(229)"

><td class="source">    0.99999999996803321674,<br></td></tr
><tr
id=sl_svn2899_230

 onmouseover="gutterOver(230)"

><td class="source">    0.99999999998556879008,<br></td></tr
><tr
id=sl_svn2899_231

 onmouseover="gutterOver(231)"

><td class="source">    0.99999999999364632387,<br></td></tr
><tr
id=sl_svn2899_232

 onmouseover="gutterOver(232)"

><td class="source">    0.99999999999727404948,<br></td></tr
><tr
id=sl_svn2899_233

 onmouseover="gutterOver(233)"

><td class="source">    0.99999999999886126543,<br></td></tr
><tr
id=sl_svn2899_234

 onmouseover="gutterOver(234)"

><td class="source">    0.99999999999953722654,<br></td></tr
><tr
id=sl_svn2899_235

 onmouseover="gutterOver(235)"

><td class="source">    0.99999999999981720098,<br></td></tr
><tr
id=sl_svn2899_236

 onmouseover="gutterOver(236)"

><td class="source">    0.99999999999992987953<br></td></tr
><tr
id=sl_svn2899_237

 onmouseover="gutterOver(237)"

><td class="source">}; // end abcissas<br></td></tr
><tr
id=sl_svn2899_238

 onmouseover="gutterOver(238)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_239

 onmouseover="gutterOver(239)"

><td class="source">static const double doubleExponentialWeights[] =<br></td></tr
><tr
id=sl_svn2899_240

 onmouseover="gutterOver(240)"

><td class="source">{<br></td></tr
><tr
id=sl_svn2899_241

 onmouseover="gutterOver(241)"

><td class="source">    // First layer weights<br></td></tr
><tr
id=sl_svn2899_242

 onmouseover="gutterOver(242)"

><td class="source">    1.5707963267948966192,<br></td></tr
><tr
id=sl_svn2899_243

 onmouseover="gutterOver(243)"

><td class="source">    0.230022394514788685,<br></td></tr
><tr
id=sl_svn2899_244

 onmouseover="gutterOver(244)"

><td class="source">    0.00026620051375271690866,<br></td></tr
><tr
id=sl_svn2899_245

 onmouseover="gutterOver(245)"

><td class="source">    1.3581784274539090834e-12,<br></td></tr
><tr
id=sl_svn2899_246

 onmouseover="gutterOver(246)"

><td class="source">    // 2nd layer weights<br></td></tr
><tr
id=sl_svn2899_247

 onmouseover="gutterOver(247)"

><td class="source">    0.96597657941230114801,<br></td></tr
><tr
id=sl_svn2899_248

 onmouseover="gutterOver(248)"

><td class="source">    0.018343166989927842087,<br></td></tr
><tr
id=sl_svn2899_249

 onmouseover="gutterOver(249)"

><td class="source">    2.1431204556943039358e-7,<br></td></tr
><tr
id=sl_svn2899_250

 onmouseover="gutterOver(250)"

><td class="source">    // 3rd layer weights<br></td></tr
><tr
id=sl_svn2899_251

 onmouseover="gutterOver(251)"

><td class="source">    1.3896147592472563229,<br></td></tr
><tr
id=sl_svn2899_252

 onmouseover="gutterOver(252)"

><td class="source">    0.53107827542805397476,<br></td></tr
><tr
id=sl_svn2899_253

 onmouseover="gutterOver(253)"

><td class="source">    0.076385743570832304188,<br></td></tr
><tr
id=sl_svn2899_254

 onmouseover="gutterOver(254)"

><td class="source">    0.0029025177479013135936,<br></td></tr
><tr
id=sl_svn2899_255

 onmouseover="gutterOver(255)"

><td class="source">    0.000011983701363170720047,<br></td></tr
><tr
id=sl_svn2899_256

 onmouseover="gutterOver(256)"

><td class="source">    1.1631165814255782766e-9,<br></td></tr
><tr
id=sl_svn2899_257

 onmouseover="gutterOver(257)"

><td class="source">    // 4th layer weights<br></td></tr
><tr
id=sl_svn2899_258

 onmouseover="gutterOver(258)"

><td class="source">    1.5232837186347052132,<br></td></tr
><tr
id=sl_svn2899_259

 onmouseover="gutterOver(259)"

><td class="source">    1.1934630258491569639,<br></td></tr
><tr
id=sl_svn2899_260

 onmouseover="gutterOver(260)"

><td class="source">    0.73743784836154784136,<br></td></tr
><tr
id=sl_svn2899_261

 onmouseover="gutterOver(261)"

><td class="source">    0.36046141846934367417,<br></td></tr
><tr
id=sl_svn2899_262

 onmouseover="gutterOver(262)"

><td class="source">    0.13742210773316772341,<br></td></tr
><tr
id=sl_svn2899_263

 onmouseover="gutterOver(263)"

><td class="source">    0.039175005493600779072,<br></td></tr
><tr
id=sl_svn2899_264

 onmouseover="gutterOver(264)"

><td class="source">    0.0077426010260642407123,<br></td></tr
><tr
id=sl_svn2899_265

 onmouseover="gutterOver(265)"

><td class="source">    0.00094994680428346871691,<br></td></tr
><tr
id=sl_svn2899_266

 onmouseover="gutterOver(266)"

><td class="source">    0.000062482559240744082891,<br></td></tr
><tr
id=sl_svn2899_267

 onmouseover="gutterOver(267)"

><td class="source">    1.8263320593710659699e-6,<br></td></tr
><tr
id=sl_svn2899_268

 onmouseover="gutterOver(268)"

><td class="source">    1.8687282268736410132e-8,<br></td></tr
><tr
id=sl_svn2899_269

 onmouseover="gutterOver(269)"

><td class="source">    4.9378538776631926964e-11,<br></td></tr
><tr
id=sl_svn2899_270

 onmouseover="gutterOver(270)"

><td class="source">    //  5th layer weights<br></td></tr
><tr
id=sl_svn2899_271

 onmouseover="gutterOver(271)"

><td class="source">    1.5587733555333301451,<br></td></tr
><tr
id=sl_svn2899_272

 onmouseover="gutterOver(272)"

><td class="source">    1.466014426716965781,<br></td></tr
><tr
id=sl_svn2899_273

 onmouseover="gutterOver(273)"

><td class="source">    1.297475750424977998,<br></td></tr
><tr
id=sl_svn2899_274

 onmouseover="gutterOver(274)"

><td class="source">    1.0816349854900704074,<br></td></tr
><tr
id=sl_svn2899_275

 onmouseover="gutterOver(275)"

><td class="source">    0.85017285645662006895,<br></td></tr
><tr
id=sl_svn2899_276

 onmouseover="gutterOver(276)"

><td class="source">    0.63040513516474369106,<br></td></tr
><tr
id=sl_svn2899_277

 onmouseover="gutterOver(277)"

><td class="source">    0.44083323627385823707,<br></td></tr
><tr
id=sl_svn2899_278

 onmouseover="gutterOver(278)"

><td class="source">    0.290240679312454185,<br></td></tr
><tr
id=sl_svn2899_279

 onmouseover="gutterOver(279)"

><td class="source">    0.17932441211072829296,<br></td></tr
><tr
id=sl_svn2899_280

 onmouseover="gutterOver(280)"

><td class="source">    0.10343215422333290062,<br></td></tr
><tr
id=sl_svn2899_281

 onmouseover="gutterOver(281)"

><td class="source">    0.055289683742240583845,<br></td></tr
><tr
id=sl_svn2899_282

 onmouseover="gutterOver(282)"

><td class="source">    0.027133510013712003219,<br></td></tr
><tr
id=sl_svn2899_283

 onmouseover="gutterOver(283)"

><td class="source">    0.012083543599157953493,<br></td></tr
><tr
id=sl_svn2899_284

 onmouseover="gutterOver(284)"

><td class="source">    0.0048162981439284630173,<br></td></tr
><tr
id=sl_svn2899_285

 onmouseover="gutterOver(285)"

><td class="source">    0.0016908739981426396472,<br></td></tr
><tr
id=sl_svn2899_286

 onmouseover="gutterOver(286)"

><td class="source">    0.00051339382406790336017,<br></td></tr
><tr
id=sl_svn2899_287

 onmouseover="gutterOver(287)"

><td class="source">    0.00013205234125609974879,<br></td></tr
><tr
id=sl_svn2899_288

 onmouseover="gutterOver(288)"

><td class="source">    0.000028110164327940134749,<br></td></tr
><tr
id=sl_svn2899_289

 onmouseover="gutterOver(289)"

><td class="source">    4.8237182032615502124e-6,<br></td></tr
><tr
id=sl_svn2899_290

 onmouseover="gutterOver(290)"

><td class="source">    6.4777566035929719908e-7,<br></td></tr
><tr
id=sl_svn2899_291

 onmouseover="gutterOver(291)"

><td class="source">    6.5835185127183396672e-8,<br></td></tr
><tr
id=sl_svn2899_292

 onmouseover="gutterOver(292)"

><td class="source">    4.8760060974240625869e-9,<br></td></tr
><tr
id=sl_svn2899_293

 onmouseover="gutterOver(293)"

><td class="source">    2.5216347918530148572e-10,<br></td></tr
><tr
id=sl_svn2899_294

 onmouseover="gutterOver(294)"

><td class="source">    8.6759314149796046502e-12,<br></td></tr
><tr
id=sl_svn2899_295

 onmouseover="gutterOver(295)"

><td class="source">    // 6th layer weights<br></td></tr
><tr
id=sl_svn2899_296

 onmouseover="gutterOver(296)"

><td class="source">    1.5677814313072218572,<br></td></tr
><tr
id=sl_svn2899_297

 onmouseover="gutterOver(297)"

><td class="source">    1.5438811161769592204,<br></td></tr
><tr
id=sl_svn2899_298

 onmouseover="gutterOver(298)"

><td class="source">    1.4972262225410362896,<br></td></tr
><tr
id=sl_svn2899_299

 onmouseover="gutterOver(299)"

><td class="source">    1.4300083548722996676,<br></td></tr
><tr
id=sl_svn2899_300

 onmouseover="gutterOver(300)"

><td class="source">    1.3452788847662516615,<br></td></tr
><tr
id=sl_svn2899_301

 onmouseover="gutterOver(301)"

><td class="source">    1.2467012074518577048,<br></td></tr
><tr
id=sl_svn2899_302

 onmouseover="gutterOver(302)"

><td class="source">    1.1382722433763053734,<br></td></tr
><tr
id=sl_svn2899_303

 onmouseover="gutterOver(303)"

><td class="source">    1.0240449331118114483,<br></td></tr
><tr
id=sl_svn2899_304

 onmouseover="gutterOver(304)"

><td class="source">    0.90787937915489531693,<br></td></tr
><tr
id=sl_svn2899_305

 onmouseover="gutterOver(305)"

><td class="source">    0.79324270082051671787,<br></td></tr
><tr
id=sl_svn2899_306

 onmouseover="gutterOver(306)"

><td class="source">    0.68306851634426375464,<br></td></tr
><tr
id=sl_svn2899_307

 onmouseover="gutterOver(307)"

><td class="source">    0.57967810308778764708,<br></td></tr
><tr
id=sl_svn2899_308

 onmouseover="gutterOver(308)"

><td class="source">    0.48475809121475539287,<br></td></tr
><tr
id=sl_svn2899_309

 onmouseover="gutterOver(309)"

><td class="source">    0.39938474152571713515,<br></td></tr
><tr
id=sl_svn2899_310

 onmouseover="gutterOver(310)"

><td class="source">    0.32408253961152890402,<br></td></tr
><tr
id=sl_svn2899_311

 onmouseover="gutterOver(311)"

><td class="source">    0.258904639514053516,<br></td></tr
><tr
id=sl_svn2899_312

 onmouseover="gutterOver(312)"

><td class="source">    0.20352399885860174519,<br></td></tr
><tr
id=sl_svn2899_313

 onmouseover="gutterOver(313)"

><td class="source">    0.15732620348436615027,<br></td></tr
><tr
id=sl_svn2899_314

 onmouseover="gutterOver(314)"

><td class="source">    0.11949741128869592428,<br></td></tr
><tr
id=sl_svn2899_315

 onmouseover="gutterOver(315)"

><td class="source">    0.089103139240941462841,<br></td></tr
><tr
id=sl_svn2899_316

 onmouseover="gutterOver(316)"

><td class="source">    0.065155533432536205042,<br></td></tr
><tr
id=sl_svn2899_317

 onmouseover="gutterOver(317)"

><td class="source">    0.046668208054846613644,<br></td></tr
><tr
id=sl_svn2899_318

 onmouseover="gutterOver(318)"

><td class="source">    0.032698732726609031113,<br></td></tr
><tr
id=sl_svn2899_319

 onmouseover="gutterOver(319)"

><td class="source">    0.022379471063648476483,<br></td></tr
><tr
id=sl_svn2899_320

 onmouseover="gutterOver(320)"

><td class="source">    0.014937835096050129696,<br></td></tr
><tr
id=sl_svn2899_321

 onmouseover="gutterOver(321)"

><td class="source">    0.0097072237393916892692,<br></td></tr
><tr
id=sl_svn2899_322

 onmouseover="gutterOver(322)"

><td class="source">    0.0061300376320830301252,<br></td></tr
><tr
id=sl_svn2899_323

 onmouseover="gutterOver(323)"

><td class="source">    0.0037542509774318343023,<br></td></tr
><tr
id=sl_svn2899_324

 onmouseover="gutterOver(324)"

><td class="source">    0.0022250827064786427022,<br></td></tr
><tr
id=sl_svn2899_325

 onmouseover="gutterOver(325)"

><td class="source">    0.0012733279447082382027,<br></td></tr
><tr
id=sl_svn2899_326

 onmouseover="gutterOver(326)"

><td class="source">    0.0007018595156842422708,<br></td></tr
><tr
id=sl_svn2899_327

 onmouseover="gutterOver(327)"

><td class="source">    0.00037166693621677760301,<br></td></tr
><tr
id=sl_svn2899_328

 onmouseover="gutterOver(328)"

><td class="source">    0.00018856442976700318572,<br></td></tr
><tr
id=sl_svn2899_329

 onmouseover="gutterOver(329)"

><td class="source">    0.000091390817490710122732,<br></td></tr
><tr
id=sl_svn2899_330

 onmouseover="gutterOver(330)"

><td class="source">    0.000042183183841757600604,<br></td></tr
><tr
id=sl_svn2899_331

 onmouseover="gutterOver(331)"

><td class="source">    0.000018481813599879217116,<br></td></tr
><tr
id=sl_svn2899_332

 onmouseover="gutterOver(332)"

><td class="source">    7.6595758525203162562e-6,<br></td></tr
><tr
id=sl_svn2899_333

 onmouseover="gutterOver(333)"

><td class="source">    2.9916615878138787094e-6,<br></td></tr
><tr
id=sl_svn2899_334

 onmouseover="gutterOver(334)"

><td class="source">    1.0968835125901264732e-6,<br></td></tr
><tr
id=sl_svn2899_335

 onmouseover="gutterOver(335)"

><td class="source">    3.7595411862360630091e-7,<br></td></tr
><tr
id=sl_svn2899_336

 onmouseover="gutterOver(336)"

><td class="source">    1.1992442782902770219e-7,<br></td></tr
><tr
id=sl_svn2899_337

 onmouseover="gutterOver(337)"

><td class="source">    3.5434777171421953043e-8,<br></td></tr
><tr
id=sl_svn2899_338

 onmouseover="gutterOver(338)"

><td class="source">    9.6498888961089633609e-9,<br></td></tr
><tr
id=sl_svn2899_339

 onmouseover="gutterOver(339)"

><td class="source">    2.4091773256475940779e-9,<br></td></tr
><tr
id=sl_svn2899_340

 onmouseover="gutterOver(340)"

><td class="source">    5.482835779709497755e-10,<br></td></tr
><tr
id=sl_svn2899_341

 onmouseover="gutterOver(341)"

><td class="source">    1.1306055347494680536e-10,<br></td></tr
><tr
id=sl_svn2899_342

 onmouseover="gutterOver(342)"

><td class="source">    2.0989335404511469109e-11,<br></td></tr
><tr
id=sl_svn2899_343

 onmouseover="gutterOver(343)"

><td class="source">    3.4841937670261059685e-12,<br></td></tr
><tr
id=sl_svn2899_344

 onmouseover="gutterOver(344)"

><td class="source">    // 7th layer weights<br></td></tr
><tr
id=sl_svn2899_345

 onmouseover="gutterOver(345)"

><td class="source">    1.5700420292795931467,<br></td></tr
><tr
id=sl_svn2899_346

 onmouseover="gutterOver(346)"

><td class="source">    1.5640214037732320999,<br></td></tr
><tr
id=sl_svn2899_347

 onmouseover="gutterOver(347)"

><td class="source">    1.5520531698454121192,<br></td></tr
><tr
id=sl_svn2899_348

 onmouseover="gutterOver(348)"

><td class="source">    1.5342817381543034316,<br></td></tr
><tr
id=sl_svn2899_349

 onmouseover="gutterOver(349)"

><td class="source">    1.5109197230741697127,<br></td></tr
><tr
id=sl_svn2899_350

 onmouseover="gutterOver(350)"

><td class="source">    1.48224329788553807,<br></td></tr
><tr
id=sl_svn2899_351

 onmouseover="gutterOver(351)"

><td class="source">    1.4485862549613225916,<br></td></tr
><tr
id=sl_svn2899_352

 onmouseover="gutterOver(352)"

><td class="source">    1.4103329714462590129,<br></td></tr
><tr
id=sl_svn2899_353

 onmouseover="gutterOver(353)"

><td class="source">    1.3679105116808964881,<br></td></tr
><tr
id=sl_svn2899_354

 onmouseover="gutterOver(354)"

><td class="source">    1.3217801174437728579,<br></td></tr
><tr
id=sl_svn2899_355

 onmouseover="gutterOver(355)"

><td class="source">    1.2724283455378627082,<br></td></tr
><tr
id=sl_svn2899_356

 onmouseover="gutterOver(356)"

><td class="source">    1.2203581095793582207,<br></td></tr
><tr
id=sl_svn2899_357

 onmouseover="gutterOver(357)"

><td class="source">    1.1660798699324345766,<br></td></tr
><tr
id=sl_svn2899_358

 onmouseover="gutterOver(358)"

><td class="source">    1.1101031939653403796,<br></td></tr
><tr
id=sl_svn2899_359

 onmouseover="gutterOver(359)"

><td class="source">    1.0529288799552666556,<br></td></tr
><tr
id=sl_svn2899_360

 onmouseover="gutterOver(360)"

><td class="source">    0.99504180404613271514,<br></td></tr
><tr
id=sl_svn2899_361

 onmouseover="gutterOver(361)"

><td class="source">    0.93690461274566793366,<br></td></tr
><tr
id=sl_svn2899_362

 onmouseover="gutterOver(362)"

><td class="source">    0.87895234555278212039,<br></td></tr
><tr
id=sl_svn2899_363

 onmouseover="gutterOver(363)"

><td class="source">    0.82158803526696470334,<br></td></tr
><tr
id=sl_svn2899_364

 onmouseover="gutterOver(364)"

><td class="source">    0.7651792989089561367,<br></td></tr
><tr
id=sl_svn2899_365

 onmouseover="gutterOver(365)"

><td class="source">    0.71005590120546898385,<br></td></tr
><tr
id=sl_svn2899_366

 onmouseover="gutterOver(366)"

><td class="source">    0.65650824613162753076,<br></td></tr
><tr
id=sl_svn2899_367

 onmouseover="gutterOver(367)"

><td class="source">    0.60478673057840362158,<br></td></tr
><tr
id=sl_svn2899_368

 onmouseover="gutterOver(368)"

><td class="source">    0.55510187800363350959,<br></td></tr
><tr
id=sl_svn2899_369

 onmouseover="gutterOver(369)"

><td class="source">    0.5076251588319080997,<br></td></tr
><tr
id=sl_svn2899_370

 onmouseover="gutterOver(370)"

><td class="source">    0.4624903980553677613,<br></td></tr
><tr
id=sl_svn2899_371

 onmouseover="gutterOver(371)"

><td class="source">    0.41979566844501548066,<br></td></tr
><tr
id=sl_svn2899_372

 onmouseover="gutterOver(372)"

><td class="source">    0.37960556938665160999,<br></td></tr
><tr
id=sl_svn2899_373

 onmouseover="gutterOver(373)"

><td class="source">    0.3419537959230168323,<br></td></tr
><tr
id=sl_svn2899_374

 onmouseover="gutterOver(374)"

><td class="source">    0.30684590941791694932,<br></td></tr
><tr
id=sl_svn2899_375

 onmouseover="gutterOver(375)"

><td class="source">    0.27426222968906810637,<br></td></tr
><tr
id=sl_svn2899_376

 onmouseover="gutterOver(376)"

><td class="source">    0.24416077786983990868,<br></td></tr
><tr
id=sl_svn2899_377

 onmouseover="gutterOver(377)"

><td class="source">    0.21648020911729617038,<br></td></tr
><tr
id=sl_svn2899_378

 onmouseover="gutterOver(378)"

><td class="source">    0.19114268413342749532,<br></td></tr
><tr
id=sl_svn2899_379

 onmouseover="gutterOver(379)"

><td class="source">    0.16805663794826916233,<br></td></tr
><tr
id=sl_svn2899_380

 onmouseover="gutterOver(380)"

><td class="source">    0.14711941325785693248,<br></td></tr
><tr
id=sl_svn2899_381

 onmouseover="gutterOver(381)"

><td class="source">    0.12821973363120098675,<br></td></tr
><tr
id=sl_svn2899_382

 onmouseover="gutterOver(382)"

><td class="source">    0.11123999898874453035,<br></td></tr
><tr
id=sl_svn2899_383

 onmouseover="gutterOver(383)"

><td class="source">    0.096058391865189467849,<br></td></tr
><tr
id=sl_svn2899_384

 onmouseover="gutterOver(384)"

><td class="source">    0.082550788110701737654,<br></td></tr
><tr
id=sl_svn2899_385

 onmouseover="gutterOver(385)"

><td class="source">    0.070592469906866999352,<br></td></tr
><tr
id=sl_svn2899_386

 onmouseover="gutterOver(386)"

><td class="source">    0.060059642358636300319,<br></td></tr
><tr
id=sl_svn2899_387

 onmouseover="gutterOver(387)"

><td class="source">    0.05083075757257047107,<br></td></tr
><tr
id=sl_svn2899_388

 onmouseover="gutterOver(388)"

><td class="source">    0.042787652157725676034,<br></td></tr
><tr
id=sl_svn2899_389

 onmouseover="gutterOver(389)"

><td class="source">    0.035816505604196436523,<br></td></tr
><tr
id=sl_svn2899_390

 onmouseover="gutterOver(390)"

><td class="source">    0.029808628117310126969,<br></td></tr
><tr
id=sl_svn2899_391

 onmouseover="gutterOver(391)"

><td class="source">    0.024661087314753282511,<br></td></tr
><tr
id=sl_svn2899_392

 onmouseover="gutterOver(392)"

><td class="source">    0.020277183817500123926,<br></td></tr
><tr
id=sl_svn2899_393

 onmouseover="gutterOver(393)"

><td class="source">    0.016566786254247575375,<br></td></tr
><tr
id=sl_svn2899_394

 onmouseover="gutterOver(394)"

><td class="source">    0.013446536605285730674,<br></td></tr
><tr
id=sl_svn2899_395

 onmouseover="gutterOver(395)"

><td class="source">    0.010839937168255907211,<br></td></tr
><tr
id=sl_svn2899_396

 onmouseover="gutterOver(396)"

><td class="source">    0.0086773307495391815854,<br></td></tr
><tr
id=sl_svn2899_397

 onmouseover="gutterOver(397)"

><td class="source">    0.0068957859690660035329,<br></td></tr
><tr
id=sl_svn2899_398

 onmouseover="gutterOver(398)"

><td class="source">    0.0054388997976239984331,<br></td></tr
><tr
id=sl_svn2899_399

 onmouseover="gutterOver(399)"

><td class="source">    0.0042565295990178580165,<br></td></tr
><tr
id=sl_svn2899_400

 onmouseover="gutterOver(400)"

><td class="source">    0.0033044669940348302363,<br></td></tr
><tr
id=sl_svn2899_401

 onmouseover="gutterOver(401)"

><td class="source">    0.0025440657675291729678,<br></td></tr
><tr
id=sl_svn2899_402

 onmouseover="gutterOver(402)"

><td class="source">    0.0019418357759843675814,<br></td></tr
><tr
id=sl_svn2899_403

 onmouseover="gutterOver(403)"

><td class="source">    0.0014690143599429791058,<br></td></tr
><tr
id=sl_svn2899_404

 onmouseover="gutterOver(404)"

><td class="source">    0.0011011261134519383862,<br></td></tr
><tr
id=sl_svn2899_405

 onmouseover="gutterOver(405)"

><td class="source">    0.00081754101332469493115,<br></td></tr
><tr
id=sl_svn2899_406

 onmouseover="gutterOver(406)"

><td class="source">    0.00060103987991147422573,<br></td></tr
><tr
id=sl_svn2899_407

 onmouseover="gutterOver(407)"

><td class="source">    0.00043739495615911687786,<br></td></tr
><tr
id=sl_svn2899_408

 onmouseover="gutterOver(408)"

><td class="source">    0.00031497209186021200274,<br></td></tr
><tr
id=sl_svn2899_409

 onmouseover="gutterOver(409)"

><td class="source">    0.00022435965205008549104,<br></td></tr
><tr
id=sl_svn2899_410

 onmouseover="gutterOver(410)"

><td class="source">    0.00015802788400701191949,<br></td></tr
><tr
id=sl_svn2899_411

 onmouseover="gutterOver(411)"

><td class="source">    0.00011002112846666697224,<br></td></tr
><tr
id=sl_svn2899_412

 onmouseover="gutterOver(412)"

><td class="source">    0.000075683996586201477788,<br></td></tr
><tr
id=sl_svn2899_413

 onmouseover="gutterOver(413)"

><td class="source">    0.000051421497447658802092,<br></td></tr
><tr
id=sl_svn2899_414

 onmouseover="gutterOver(414)"

><td class="source">    0.0000344921247593431977,<br></td></tr
><tr
id=sl_svn2899_415

 onmouseover="gutterOver(415)"

><td class="source">    0.000022832118109036146591,<br></td></tr
><tr
id=sl_svn2899_416

 onmouseover="gutterOver(416)"

><td class="source">    0.000014908514031870608449,<br></td></tr
><tr
id=sl_svn2899_417

 onmouseover="gutterOver(417)"

><td class="source">    9.5981941283784710776e-6,<br></td></tr
><tr
id=sl_svn2899_418

 onmouseover="gutterOver(418)"

><td class="source">    6.0899100320949039256e-6,<br></td></tr
><tr
id=sl_svn2899_419

 onmouseover="gutterOver(419)"

><td class="source">    3.8061983264644899045e-6,<br></td></tr
><tr
id=sl_svn2899_420

 onmouseover="gutterOver(420)"

><td class="source">    2.3421667208528096843e-6,<br></td></tr
><tr
id=sl_svn2899_421

 onmouseover="gutterOver(421)"

><td class="source">    1.4183067155493917523e-6,<br></td></tr
><tr
id=sl_svn2899_422

 onmouseover="gutterOver(422)"

><td class="source">    8.4473756384859863469e-7,<br></td></tr
><tr
id=sl_svn2899_423

 onmouseover="gutterOver(423)"

><td class="source">    4.9458288702754198508e-7,<br></td></tr
><tr
id=sl_svn2899_424

 onmouseover="gutterOver(424)"

><td class="source">    2.8449923659159806339e-7,<br></td></tr
><tr
id=sl_svn2899_425

 onmouseover="gutterOver(425)"

><td class="source">    1.6069394579076224911e-7,<br></td></tr
><tr
id=sl_svn2899_426

 onmouseover="gutterOver(426)"

><td class="source">    8.9071395140242387124e-8,<br></td></tr
><tr
id=sl_svn2899_427

 onmouseover="gutterOver(427)"

><td class="source">    4.8420950198072369669e-8,<br></td></tr
><tr
id=sl_svn2899_428

 onmouseover="gutterOver(428)"

><td class="source">    2.579956822953589238e-8,<br></td></tr
><tr
id=sl_svn2899_429

 onmouseover="gutterOver(429)"

><td class="source">    1.3464645522302038796e-8,<br></td></tr
><tr
id=sl_svn2899_430

 onmouseover="gutterOver(430)"

><td class="source">    6.8784610955899001111e-9,<br></td></tr
><tr
id=sl_svn2899_431

 onmouseover="gutterOver(431)"

><td class="source">    3.4371856744650090511e-9,<br></td></tr
><tr
id=sl_svn2899_432

 onmouseover="gutterOver(432)"

><td class="source">    1.6788897682161906807e-9,<br></td></tr
><tr
id=sl_svn2899_433

 onmouseover="gutterOver(433)"

><td class="source">    8.0099784479729665356e-10,<br></td></tr
><tr
id=sl_svn2899_434

 onmouseover="gutterOver(434)"

><td class="source">    3.7299501843052790038e-10,<br></td></tr
><tr
id=sl_svn2899_435

 onmouseover="gutterOver(435)"

><td class="source">    1.6939457789411646876e-10,<br></td></tr
><tr
id=sl_svn2899_436

 onmouseover="gutterOver(436)"

><td class="source">    7.4967397573818224522e-11,<br></td></tr
><tr
id=sl_svn2899_437

 onmouseover="gutterOver(437)"

><td class="source">    3.230446433325236576e-11,<br></td></tr
><tr
id=sl_svn2899_438

 onmouseover="gutterOver(438)"

><td class="source">    1.3542512912336274432e-11,<br></td></tr
><tr
id=sl_svn2899_439

 onmouseover="gutterOver(439)"

><td class="source">    5.5182369468174885821e-12,<br></td></tr
><tr
id=sl_svn2899_440

 onmouseover="gutterOver(440)"

><td class="source">    2.1835922099233609052e-12<br></td></tr
><tr
id=sl_svn2899_441

 onmouseover="gutterOver(441)"

><td class="source">}; // end weights<br></td></tr
><tr
id=sl_svn2899_442

 onmouseover="gutterOver(442)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_443

 onmouseover="gutterOver(443)"

><td class="source">#endif // include guard<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn2899_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn2899_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/hpcource/source/detail?spec=svn2899&amp;r=2434">r2434</a>
 by K.A.Feodorov@gmail.com
 on Mar 9, 2012
 &nbsp; <a href="/p/hpcource/source/diff?spec=svn2899&r=2434&amp;format=side&amp;path=/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h&amp;old_path=/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h&amp;old=">Diff</a>
 </div>
 <pre>На проверку</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/hpcource/source/detail?r=2434&spec=svn2899';
 var publish_url = '/p/hpcource/source/detail?r=2434&spec=svn2899#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c?r\x3d2434\x26spec\x3dsvn2899');
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/fka_1_c.vcproj');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/fka_1_c.vcproj?r\x3d2434\x26spec\x3dsvn2899');
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/fka_1_c.vcproj.KosVF.Admin.user');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/fka_1_c.vcproj.KosVF.Admin.user?r\x3d2434\x26spec\x3dsvn2899');
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/inc');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc?r\x3d2434\x26spec\x3dsvn2899');
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h?r\x3d2434\x26spec\x3dsvn2899');
 
 var selected_path = '/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h';
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrator.h');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrator.h?r\x3d2434\x26spec\x3dsvn2899');
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/src');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src?r\x3d2434\x26spec\x3dsvn2899');
 
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp?r\x3d2434\x26spec\x3dsvn2899');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c?r=2434&amp;spec=svn2899"
 
 >/trunk/csc/fka/1/windows/fka_1_c</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/fka_1_c.vcproj?r=2434&amp;spec=svn2899"
 
 >...1/windows/fka_1_c/fka_1_c.vcproj</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/fka_1_c.vcproj.KosVF.Admin.user?r=2434&amp;spec=svn2899"
 
 >.../fka_1_c.vcproj.KosVF.Admin.user</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc?r=2434&amp;spec=svn2899"
 
 >...nk/csc/fka/1/windows/fka_1_c/inc</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h?r=2434&amp;spec=svn2899"
 selected="selected"
 >...1_c/inc/DEIntegrationConstants.h</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrator.h?r=2434&amp;spec=svn2899"
 
 >...ndows/fka_1_c/inc/DEIntegrator.h</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src?r=2434&amp;spec=svn2899"
 
 >...nk/csc/fka/1/windows/fka_1_c/src</option>
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp?r=2434&amp;spec=svn2899"
 
 >...a/1/windows/fka_1_c/src/main.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 <div id="review_instr" class="closed">
 <a class="ifOpened" href="/p/hpcource/source/detail?r=2434&spec=svn2899#publish">Publish your comments</a>
 <div class="ifClosed">Double click a line to add a comment</div>
 </div>
 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 <a href="/p/hpcource/source/list?path=/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h&start=2434">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 14052 bytes,
 443 lines</div>
 
 <div><a href="//hpcource.googlecode.com/svn/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/13293733053503680815/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/13293733053503680815/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://kibbles.googlecode.com/files/kibbles-1.3.3.comp.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 kibbles.keys.addKeyPressListener('h', toggleComments);
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/13293733053503680815/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn2899': '/trunk/csc/fka/1/windows/fka_1_c/inc/DEIntegrationConstants.h'}
 codereviews = CR_controller.setup(
 {"profileUrl":["/u/117547682639956396526/"],"token":"boxH0Av0bJFhQLFzUYLzfTCRPW8:1343107067924","assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/13293733053503680815","projectHomeUrl":"/p/hpcource","relativeBaseUrl":"","projectName":"hpcource","loggedInUserEmail":"K.A.Feodorov@gmail.com"}, '', 'svn2899', paths,
 CR_BrowseIntegrationFactory);
 
 // register our source container with the commenting code
 // in this case we're registering the container and the revison
 // associated with the contianer which may be the primary revision
 // or may be a previous revision against which the primary revision
 // of the file is being compared.
 codereviews.registerSourceContainer(document.getElementById('lines'), 'svn2899');
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/13293733053503680815/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/13293733053503680815/js/ph_core.js"></script>
 
 
 
 
 <script type="text/javascript" src="/js/codesite_product_dictionary_ph.pack.04102009.js"></script>
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

