<head>

	<script src="https://use.fontawesome.com/7fc439c797.js"></script><link href="https://use.fontawesome.com/7fc439c797.css" media="all" rel="stylesheet">
  <link rel="profile" href="http://www.w3.org/1999/xhtml/vocab">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="shortcut icon" href="http://jnbag.in/sites/all/themes/sub/tourister_bag_theme/favicon.ico" type="image/vnd.microsoft.icon">
	<link rel="alternate" type="application/rss+xml" title="jnbag RSS" href="http://jnbag.in/rss.xml">
	<meta name="Generator" content="Drupal 7 (http://drupal.org)">
  <title>jnbag</title>
	<link href="https://fonts.googleapis.com/css?family=Open+Sans:300,400,600,700,800" rel="stylesheet">
	<link href="https://fonts.googleapis.com/css?family=Lato:300,400,700,900" rel="stylesheet">
	<link href="https://fonts.googleapis.com/css?family=Cookie" rel="stylesheet">

	<link rel="stylesheet" href="/modules/system/system.base.css">
	<link rel="stylesheet" href="/modules/contextual/contextual.css">

	<link type="text/css" rel="stylesheet" href="//cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css" media="all">

	<link rel="stylesheet" href="/sites/all/themes/bootstrap/css/3.3.7/overrides.min.css">
	<link rel="stylesheet" href="/sites/all/themes/sub/tourister_bag_theme/css/basic_layout.css">
	<link rel="stylesheet" href="/sites/all/themes/sub/tourister_bag_theme/css/footer.css">
	<link rel="stylesheet" href="/sites/all/themes/sub/tourister_bag_theme/css/header.css">


</head>
<body class="paytm-response-page">
<header id="navbar" role="banner" class="navbar container navbar-default">
  <div class="container">
         <!--  <div class="notification"><i class="fa fa-bell-o" aria-hidden="true"></i></div>
      <div class="notification-box">
        <div class="heading"><h2>NOTIFICATIONS</h2><a class="close" href="#" >&times;</a></div>
        <div class="content">

        </div>
      </div> -->
        <div class="navbar-header">
              <a class="logo navbar-btn pull-left" href="/" title="Home">
          <img src="http://jnbag.in/sites/default/files/shri-prasanna-industrial-services-120x120.jpg" alt="Home">
        </a>

              <h3><a class="name navbar-brand" href="/" title="Home">Jn<span>bag</span></a></h3>

              <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
          </div>
          <div class="navbar-collapse collapse" id="navbar-collapse">
        <nav role="navigation">
                      <ul class="menu nav navbar-nav"><li class="first leaf active"><a href="/" class="active">Home</a></li>
<li class="leaf"><a href="/bags" title="">Bags</a></li>
<li class="leaf"><a href="/cart" title="">Your Cart</a></li>
<li class="last leaf"><a href="/content/contact-us" title="">Contact Us</a></li>
</ul>                                <ul class="menu nav navbar-nav secondary"><li class="first leaf"><a href="/user">My account</a></li>
<li class="last leaf"><a href="/user/logout">Log out</a></li>
</ul>                            </nav>
      </div>
      </div>
</header>
<div class="page-container">
	<div class="paytm-response">
<?php
header("Pragma: no-cache");
header("Cache-Control: no-cache");
header("Expires: 0");

// following files need to be included
require_once("./lib/config_paytm.php");
require_once("./lib/encdec_paytm.php");

$paytmChecksum = "";
$paramList = array();
$isValidChecksum = "FALSE";

$paramList = $_POST;
$paytmChecksum = isset($_POST["CHECKSUMHASH"]) ? $_POST["CHECKSUMHASH"] : ""; //Sent by Paytm pg

//Verify all parameters received from Paytm pg to your application. Like MID received from paytm pg is same as your application?s MID, TXN_AMOUNT and ORDER_ID are same as what was sent by you to Paytm PG for initiating transaction etc.
$isValidChecksum = verifychecksum_e($paramList, 'iACOFx1tmEEcd7KN', $paytmChecksum); //will return TRUE or FALSE string.


if($isValidChecksum == "TRUE") {
	echo "<b>Checksum matched and following are the transaction details:</b>" . "<br/>";
	if ($_POST["STATUS"] == "TXN_SUCCESS") {
		echo "<b>Transaction status is success</b>" . "<br/>";
		//Process your transaction here as success transaction.
		//Verify amount & order id received from Payment gateway with your application's order id and amount.
	}
	else {
		echo "<b>Transaction status is failure</b>" . "<br/>";
	}

	if (isset($_POST) && count($_POST)>0 )
	{
		foreach($_POST as $paramName => $paramValue) {
				echo "<br/>" . $paramName . " = " . $paramValue;
		}
	}


}
else {
	echo "<b>Checksum mismatched.</b>";
	//Process transaction as suspicious.
}

?>
</div>
	</div>
<div class="site-footer">
    <footer class="footer container">
        <div class="region region-footer">
    <section id="block-block-1" class="block block-block contextual-links-region clearfix">

      <div class="contextual-links-wrapper contextual-links-processed"><a class="contextual-links-trigger" href="#">Configure</a><ul class="contextual-links"><li class="block-configure first last"><a href="/admin/structure/block/manage/block/1/configure?destination=node">Configure block</a></li>
</ul></div>
  <div class="footer-distributed">
<div class="footer-left">
<h3>Jn<span>bag</span></h3>
<p class="footer-company-name">Jnbag	 © 2018</p>
</div>
<div class="footer-center">
<div>
					<i class="fa fa-map-marker"></i>
<p>Shri Prasanna Industrial Services <span>Pachunde Complex, Railtoly- Gondia- 441601 (Maharashtra)</span> </p>
</div>
<div>
					<i class="fa fa-phone"></i>
<p>+91 8830026765</p>
</div>
<div>
					<i class="fa fa-envelope"></i>
<p><a href="mailto:info@jnbag.in">info@jnbag.in</a> or </p>
<p><a href="mailto:support@jnbag.in">support@jnbag.in</a></p>
</div>
</div>
<div class="footer-right">
<p class="footer-company-about">
					<span>About the company</span><br>
					Lorem ipsum dolor sit amet, consectateur adispicing elit. Fusce euismod convallis velit, eu auctor lacus vehicula sit amet.
				</p>
<div class="footer-icons">
<p><a href="#"><i class="fa fa-facebook"></i></a></p>
<!--<p><p><a href="#"><i class="fa fa-twitter"></i></a>
<p><a href="#"><i class="fa fa-linkedin"></i></a>
<p>-->
<p><a href="#"><i class="fa fa-instagram"></i></a>
</p></div>
</div>
</div>

</section>
  </div>
    </footer>
  </div>
</body>
