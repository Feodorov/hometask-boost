



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "xpgIfWMa_uIcVsF7GWxQeT7O9-k:1343107076331";
 
 
 var CS_env = {"profileUrl":["/u/117547682639956396526/"],"token":"xpgIfWMa_uIcVsF7GWxQeT7O9-k:1343107076331","assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/13293733053503680815","projectHomeUrl":"/p/hpcource","relativeBaseUrl":"","projectName":"hpcource","loggedInUserEmail":"K.A.Feodorov@gmail.com"};
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
 
 
 <title>main.cpp - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=http%3A%2F%2Fcode.google.com%2Fp%2Fhpcource%2Fsource%2Fbrowse%2Ftrunk%2Fcsc%2Ffka%2F1%2Fwindows%2Ffka_1_c%2Fsrc%2Fmain.cpp" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/hpcource/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/">csc</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/">fka</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/">1</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/">windows</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/">fka_1_c</a><span class="sp">/&nbsp;</span><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/">src</a><span class="sp">/&nbsp;</span>main.cpp</span>
 
 

 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp?edit=1"
 ><img src="http://www.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp?r=2434" title="Previous">&lsaquo;r2434</a></li>
 
 </ul>
 </td>
 
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
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-cpp"><table id="src_table_0"><tr
id=sl_svn2899_1

 onmouseover="gutterOver(1)"

><td class="source">#include &lt;iostream&gt;<br></td></tr
><tr
id=sl_svn2899_2

 onmouseover="gutterOver(2)"

><td class="source">#include &lt;iomanip&gt;<br></td></tr
><tr
id=sl_svn2899_3

 onmouseover="gutterOver(3)"

><td class="source">#include &lt;stdio.h&gt;<br></td></tr
><tr
id=sl_svn2899_4

 onmouseover="gutterOver(4)"

><td class="source">#include &lt;boost/thread/thread.hpp&gt;<br></td></tr
><tr
id=sl_svn2899_5

 onmouseover="gutterOver(5)"

><td class="source">#include &lt;boost/thread/condition_variable.hpp&gt;<br></td></tr
><tr
id=sl_svn2899_6

 onmouseover="gutterOver(6)"

><td class="source">#include &quot;../inc/DEIntegrator.h&quot;<br></td></tr
><tr
id=sl_svn2899_7

 onmouseover="gutterOver(7)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_8

 onmouseover="gutterOver(8)"

><td class="source">#define INPUT_BUFFER_SIZE       256<br></td></tr
><tr
id=sl_svn2899_9

 onmouseover="gutterOver(9)"

><td class="source">#define MAX_THREADS             10<br></td></tr
><tr
id=sl_svn2899_10

 onmouseover="gutterOver(10)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_11

 onmouseover="gutterOver(11)"

><td class="source">boost::condition_variable cond;<br></td></tr
><tr
id=sl_svn2899_12

 onmouseover="gutterOver(12)"

><td class="source">boost::mutex cond_mutex, io_mutex;<br></td></tr
><tr
id=sl_svn2899_13

 onmouseover="gutterOver(13)"

><td class="source">bool data_ready;<br></td></tr
><tr
id=sl_svn2899_14

 onmouseover="gutterOver(14)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_15

 onmouseover="gutterOver(15)"

><td class="source">typedef struct  <br></td></tr
><tr
id=sl_svn2899_16

 onmouseover="gutterOver(16)"

><td class="source">{<br></td></tr
><tr
id=sl_svn2899_17

 onmouseover="gutterOver(17)"

><td class="source">	double left_limit;<br></td></tr
><tr
id=sl_svn2899_18

 onmouseover="gutterOver(18)"

><td class="source">	double right_limit;<br></td></tr
><tr
id=sl_svn2899_19

 onmouseover="gutterOver(19)"

><td class="source">	double error_limit;<br></td></tr
><tr
id=sl_svn2899_20

 onmouseover="gutterOver(20)"

><td class="source">}integration_params_t;<br></td></tr
><tr
id=sl_svn2899_21

 onmouseover="gutterOver(21)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_22

 onmouseover="gutterOver(22)"

><td class="source">//Integral function is taken from http://www.codeproject.com/Articles/31550/Fast-Numerical-Integration<br></td></tr
><tr
id=sl_svn2899_23

 onmouseover="gutterOver(23)"

><td class="source">class IntegralFunction<br></td></tr
><tr
id=sl_svn2899_24

 onmouseover="gutterOver(24)"

><td class="source">{<br></td></tr
><tr
id=sl_svn2899_25

 onmouseover="gutterOver(25)"

><td class="source">public:<br></td></tr
><tr
id=sl_svn2899_26

 onmouseover="gutterOver(26)"

><td class="source">	double operator()(double x) const<br></td></tr
><tr
id=sl_svn2899_27

 onmouseover="gutterOver(27)"

><td class="source">	{<br></td></tr
><tr
id=sl_svn2899_28

 onmouseover="gutterOver(28)"

><td class="source">		return 2*x;//pow(1.0 - x, 5.0)*pow(x, -1.0/3.0);<br></td></tr
><tr
id=sl_svn2899_29

 onmouseover="gutterOver(29)"

><td class="source">	}<br></td></tr
><tr
id=sl_svn2899_30

 onmouseover="gutterOver(30)"

><td class="source">};<br></td></tr
><tr
id=sl_svn2899_31

 onmouseover="gutterOver(31)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_32

 onmouseover="gutterOver(32)"

><td class="source">integration_params_t integration_request;<br></td></tr
><tr
id=sl_svn2899_33

 onmouseover="gutterOver(33)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_34

 onmouseover="gutterOver(34)"

><td class="source">void wait_for_data_to_process()<br></td></tr
><tr
id=sl_svn2899_35

 onmouseover="gutterOver(35)"

><td class="source">{<br></td></tr
><tr
id=sl_svn2899_36

 onmouseover="gutterOver(36)"

><td class="source">	integration_params_t params;<br></td></tr
><tr
id=sl_svn2899_37

 onmouseover="gutterOver(37)"

><td class="source">	IntegralFunction func;<br></td></tr
><tr
id=sl_svn2899_38

 onmouseover="gutterOver(38)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_39

 onmouseover="gutterOver(39)"

><td class="source">	{<br></td></tr
><tr
id=sl_svn2899_40

 onmouseover="gutterOver(40)"

><td class="source">		boost::mutex::scoped_lock lock(io_mutex);<br></td></tr
><tr
id=sl_svn2899_41

 onmouseover="gutterOver(41)"

><td class="source">		std::cout &lt;&lt; &quot;Thread id: &quot; &lt;&lt; boost::this_thread::get_id() &lt;&lt; &quot;: started&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_42

 onmouseover="gutterOver(42)"

><td class="source">	}<br></td></tr
><tr
id=sl_svn2899_43

 onmouseover="gutterOver(43)"

><td class="source">	try<br></td></tr
><tr
id=sl_svn2899_44

 onmouseover="gutterOver(44)"

><td class="source">	{<br></td></tr
><tr
id=sl_svn2899_45

 onmouseover="gutterOver(45)"

><td class="source">		while(1)<br></td></tr
><tr
id=sl_svn2899_46

 onmouseover="gutterOver(46)"

><td class="source">		{<br></td></tr
><tr
id=sl_svn2899_47

 onmouseover="gutterOver(47)"

><td class="source">			{<br></td></tr
><tr
id=sl_svn2899_48

 onmouseover="gutterOver(48)"

><td class="source">				boost::unique_lock&lt;boost::mutex&gt; lock(cond_mutex);<br></td></tr
><tr
id=sl_svn2899_49

 onmouseover="gutterOver(49)"

><td class="source">				while(!data_ready)<br></td></tr
><tr
id=sl_svn2899_50

 onmouseover="gutterOver(50)"

><td class="source">				{<br></td></tr
><tr
id=sl_svn2899_51

 onmouseover="gutterOver(51)"

><td class="source">					cond.wait(lock);<br></td></tr
><tr
id=sl_svn2899_52

 onmouseover="gutterOver(52)"

><td class="source">				}<br></td></tr
><tr
id=sl_svn2899_53

 onmouseover="gutterOver(53)"

><td class="source">				//no interruption points here, so on interrupt() thread correctly <br></td></tr
><tr
id=sl_svn2899_54

 onmouseover="gutterOver(54)"

><td class="source">				//ends computation and returns result. Only after that it quits.<br></td></tr
><tr
id=sl_svn2899_55

 onmouseover="gutterOver(55)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_56

 onmouseover="gutterOver(56)"

><td class="source">				params = integration_request;<br></td></tr
><tr
id=sl_svn2899_57

 onmouseover="gutterOver(57)"

><td class="source">				data_ready = false; <br></td></tr
><tr
id=sl_svn2899_58

 onmouseover="gutterOver(58)"

><td class="source">			}<br></td></tr
><tr
id=sl_svn2899_59

 onmouseover="gutterOver(59)"

><td class="source">			{<br></td></tr
><tr
id=sl_svn2899_60

 onmouseover="gutterOver(60)"

><td class="source">				boost::mutex::scoped_lock lock(io_mutex);<br></td></tr
><tr
id=sl_svn2899_61

 onmouseover="gutterOver(61)"

><td class="source">				std::cout &lt;&lt; &quot;Thread id: &quot; &lt;&lt; boost::this_thread::get_id() &lt;&lt; &quot;: data received. Start processing...&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_62

 onmouseover="gutterOver(62)"

><td class="source">			}			<br></td></tr
><tr
id=sl_svn2899_63

 onmouseover="gutterOver(63)"

><td class="source">			//process data<br></td></tr
><tr
id=sl_svn2899_64

 onmouseover="gutterOver(64)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_65

 onmouseover="gutterOver(65)"

><td class="source">			double integral = DEIntegrator&lt;IntegralFunction&gt;::Integrate(func, params.left_limit, params.right_limit, params.error_limit);<br></td></tr
><tr
id=sl_svn2899_66

 onmouseover="gutterOver(66)"

><td class="source">			{<br></td></tr
><tr
id=sl_svn2899_67

 onmouseover="gutterOver(67)"

><td class="source">				boost::mutex::scoped_lock lock(io_mutex);<br></td></tr
><tr
id=sl_svn2899_68

 onmouseover="gutterOver(68)"

><td class="source">				std::cout &lt;&lt; &quot;Thread id: &quot; &lt;&lt; boost::this_thread::get_id() &lt;&lt; &quot;: processing complete. Answer is: &quot; &lt;&lt; std::setprecision(15) &lt;&lt; integral &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_69

 onmouseover="gutterOver(69)"

><td class="source">			}<br></td></tr
><tr
id=sl_svn2899_70

 onmouseover="gutterOver(70)"

><td class="source">		}<br></td></tr
><tr
id=sl_svn2899_71

 onmouseover="gutterOver(71)"

><td class="source">	}<br></td></tr
><tr
id=sl_svn2899_72

 onmouseover="gutterOver(72)"

><td class="source">	catch (boost::thread_interrupted)<br></td></tr
><tr
id=sl_svn2899_73

 onmouseover="gutterOver(73)"

><td class="source">	{<br></td></tr
><tr
id=sl_svn2899_74

 onmouseover="gutterOver(74)"

><td class="source">		boost::mutex::scoped_lock lock(io_mutex);<br></td></tr
><tr
id=sl_svn2899_75

 onmouseover="gutterOver(75)"

><td class="source">		std::cout &lt;&lt; &quot;Thread is quitting due to interrupt. Thread id: &quot; &lt;&lt; boost::this_thread::get_id() &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_76

 onmouseover="gutterOver(76)"

><td class="source">	}<br></td></tr
><tr
id=sl_svn2899_77

 onmouseover="gutterOver(77)"

><td class="source">	catch (std::exception &amp; e)<br></td></tr
><tr
id=sl_svn2899_78

 onmouseover="gutterOver(78)"

><td class="source">	{<br></td></tr
><tr
id=sl_svn2899_79

 onmouseover="gutterOver(79)"

><td class="source">		boost::mutex::scoped_lock lock(io_mutex);<br></td></tr
><tr
id=sl_svn2899_80

 onmouseover="gutterOver(80)"

><td class="source">		std::cout &lt;&lt; &quot;Exception caught. &quot; &lt;&lt; e.what() &lt;&lt; &quot; Thread id: &quot; &lt;&lt; boost::this_thread::get_id() &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_81

 onmouseover="gutterOver(81)"

><td class="source">	}<br></td></tr
><tr
id=sl_svn2899_82

 onmouseover="gutterOver(82)"

><td class="source">}<br></td></tr
><tr
id=sl_svn2899_83

 onmouseover="gutterOver(83)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_84

 onmouseover="gutterOver(84)"

><td class="source">int main(int argc, char* argv[])<br></td></tr
><tr
id=sl_svn2899_85

 onmouseover="gutterOver(85)"

><td class="source">{<br></td></tr
><tr
id=sl_svn2899_86

 onmouseover="gutterOver(86)"

><td class="source">	double left_limit, right_limit, error_limit;<br></td></tr
><tr
id=sl_svn2899_87

 onmouseover="gutterOver(87)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_88

 onmouseover="gutterOver(88)"

><td class="source">	std::cout &lt;&lt; &quot;Hello! Lets start.&quot; &lt;&lt; std::endl &lt;&lt; <br></td></tr
><tr
id=sl_svn2899_89

 onmouseover="gutterOver(89)"

><td class="source">		&quot;Input data format: left_limit right_limit error limit.&quot; &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn2899_90

 onmouseover="gutterOver(90)"

><td class="source">		&quot;Example: 1.5 2 1.2e-6&quot; &lt;&lt; std::endl &lt;&lt;<br></td></tr
><tr
id=sl_svn2899_91

 onmouseover="gutterOver(91)"

><td class="source">		&quot;To quit type \&quot;quit\&quot;&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_92

 onmouseover="gutterOver(92)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_93

 onmouseover="gutterOver(93)"

><td class="source">	boost::thread_group threads;<br></td></tr
><tr
id=sl_svn2899_94

 onmouseover="gutterOver(94)"

><td class="source">	for (int i = 0; i &lt; MAX_THREADS; ++i)<br></td></tr
><tr
id=sl_svn2899_95

 onmouseover="gutterOver(95)"

><td class="source">		threads.create_thread(&amp;wait_for_data_to_process);<br></td></tr
><tr
id=sl_svn2899_96

 onmouseover="gutterOver(96)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_97

 onmouseover="gutterOver(97)"

><td class="source">	char input[INPUT_BUFFER_SIZE];<br></td></tr
><tr
id=sl_svn2899_98

 onmouseover="gutterOver(98)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_99

 onmouseover="gutterOver(99)"

><td class="source">	while(std::cin.getline(input, sizeof(input)))<br></td></tr
><tr
id=sl_svn2899_100

 onmouseover="gutterOver(100)"

><td class="source">	{<br></td></tr
><tr
id=sl_svn2899_101

 onmouseover="gutterOver(101)"

><td class="source">		if(!memcmp(input, &quot;quit&quot;, sizeof(&quot;quit&quot;)))<br></td></tr
><tr
id=sl_svn2899_102

 onmouseover="gutterOver(102)"

><td class="source">		{<br></td></tr
><tr
id=sl_svn2899_103

 onmouseover="gutterOver(103)"

><td class="source">			threads.interrupt_all();<br></td></tr
><tr
id=sl_svn2899_104

 onmouseover="gutterOver(104)"

><td class="source">			threads.join_all();<br></td></tr
><tr
id=sl_svn2899_105

 onmouseover="gutterOver(105)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_106

 onmouseover="gutterOver(106)"

><td class="source">			//no mutex here because all threads have quit.<br></td></tr
><tr
id=sl_svn2899_107

 onmouseover="gutterOver(107)"

><td class="source">			std::cout &lt;&lt; &quot;Goodbye!&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_108

 onmouseover="gutterOver(108)"

><td class="source">			return 0;<br></td></tr
><tr
id=sl_svn2899_109

 onmouseover="gutterOver(109)"

><td class="source">		}<br></td></tr
><tr
id=sl_svn2899_110

 onmouseover="gutterOver(110)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_111

 onmouseover="gutterOver(111)"

><td class="source">		if(3 != sscanf(input, &quot;%lf %lf %lf&quot;, &amp;left_limit, &amp;right_limit, &amp;error_limit))<br></td></tr
><tr
id=sl_svn2899_112

 onmouseover="gutterOver(112)"

><td class="source">		{<br></td></tr
><tr
id=sl_svn2899_113

 onmouseover="gutterOver(113)"

><td class="source">			boost::mutex::scoped_lock lock(io_mutex);<br></td></tr
><tr
id=sl_svn2899_114

 onmouseover="gutterOver(114)"

><td class="source">			std::cout &lt;&lt; &quot;Data is incorrect. Try again, please. Example: 1.5, 2, 1.2e-6&quot; &lt;&lt; std::endl;<br></td></tr
><tr
id=sl_svn2899_115

 onmouseover="gutterOver(115)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_116

 onmouseover="gutterOver(116)"

><td class="source">			continue;<br></td></tr
><tr
id=sl_svn2899_117

 onmouseover="gutterOver(117)"

><td class="source">		}<br></td></tr
><tr
id=sl_svn2899_118

 onmouseover="gutterOver(118)"

><td class="source">		{<br></td></tr
><tr
id=sl_svn2899_119

 onmouseover="gutterOver(119)"

><td class="source">			boost::mutex::scoped_lock lock(cond_mutex);<br></td></tr
><tr
id=sl_svn2899_120

 onmouseover="gutterOver(120)"

><td class="source">			integration_request.left_limit = left_limit;<br></td></tr
><tr
id=sl_svn2899_121

 onmouseover="gutterOver(121)"

><td class="source">			integration_request.right_limit = right_limit;<br></td></tr
><tr
id=sl_svn2899_122

 onmouseover="gutterOver(122)"

><td class="source">			integration_request.error_limit = error_limit;<br></td></tr
><tr
id=sl_svn2899_123

 onmouseover="gutterOver(123)"

><td class="source">			data_ready = true;<br></td></tr
><tr
id=sl_svn2899_124

 onmouseover="gutterOver(124)"

><td class="source">		}<br></td></tr
><tr
id=sl_svn2899_125

 onmouseover="gutterOver(125)"

><td class="source"><br></td></tr
><tr
id=sl_svn2899_126

 onmouseover="gutterOver(126)"

><td class="source">		cond.notify_one();<br></td></tr
><tr
id=sl_svn2899_127

 onmouseover="gutterOver(127)"

><td class="source">	}<br></td></tr
><tr
id=sl_svn2899_128

 onmouseover="gutterOver(128)"

><td class="source">}<br></td></tr
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
 <a href="/p/hpcource/source/detail?spec=svn2899&amp;r=2486">r2486</a>
 by K.A.Feodorov@gmail.com
 on Mar 22, 2012
 &nbsp; <a href="/p/hpcource/source/diff?spec=svn2899&r=2486&amp;format=side&amp;path=/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp&amp;old_path=/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp&amp;old=2434">Diff</a>
 </div>
 <pre>Исправил замечания 1 и 2, нашел с помощью
helgrind и исправил гонку данных на
data_mutex (раньше я защищал условие для
condition_variable отдельным мьютексом).

На проверку</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/hpcource/source/detail?r=2486&spec=svn2899';
 var publish_url = '/p/hpcource/source/detail?r=2486&spec=svn2899#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp');
 changed_urls.push('/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp?r\x3d2486\x26spec\x3dsvn2899');
 
 var selected_path = '/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp';
 
 
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
 
 <option value="/p/hpcource/source/browse/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp?r=2486&amp;spec=svn2899"
 selected="selected"
 >...a/1/windows/fka_1_c/src/main.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 <div id="review_instr" class="closed">
 <a class="ifOpened" href="/p/hpcource/source/detail?r=2486&spec=svn2899#publish">Publish your comments</a>
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
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/hpcource/source/detail?spec=svn2899&r=2434">r2434</a>
 by K.A.Feodorov@gmail.com
 on Mar 9, 2012
 &nbsp; <a href="/p/hpcource/source/diff?spec=svn2899&r=2434&amp;format=side&amp;path=/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp&amp;old_path=/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp&amp;old=">Diff</a>
 <br>
 <pre class="ifOpened">На проверку</pre>
 </div>
 
 
 <a href="/p/hpcource/source/list?path=/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp&start=2486">All revisions of this file</a>
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
 
 <div>Size: 3418 bytes,
 128 lines</div>
 
 <div><a href="//hpcource.googlecode.com/svn/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp">View raw file</a></div>
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
 var paths = {'svn2899': '/trunk/csc/fka/1/windows/fka_1_c/src/main.cpp'}
 codereviews = CR_controller.setup(
 {"profileUrl":["/u/117547682639956396526/"],"token":"xpgIfWMa_uIcVsF7GWxQeT7O9-k:1343107076331","assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/13293733053503680815","projectHomeUrl":"/p/hpcource","relativeBaseUrl":"","projectName":"hpcource","loggedInUserEmail":"K.A.Feodorov@gmail.com"}, '', 'svn2899', paths,
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

