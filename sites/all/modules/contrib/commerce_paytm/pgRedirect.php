<?php
header("Pragma: no-cache");
header("Cache-Control: no-cache");
header("Expires: 0");
// following files need to be included
require_once("./lib/config_paytm.php");
require_once("./lib/encdec_paytm.php");

$checkSum = "";
$paramList = array();

$ORDER_ID = $_POST["ORDER_ID"];
$CUST_ID = $_POST["CUST_ID"];
$INDUSTRY_TYPE_ID = $_POST["INDUSTRY_TYPE_ID"];
$CHANNEL_ID = $_POST["CHANNEL_ID"];
$TXN_AMOUNT = $_POST["TXN_AMOUNT"];

// Create an array having all required parameters for creating checksum.
$paramList["MID"] = 'Shripr58879255116694';
$paramList["ORDER_ID"] = $ORDER_ID;
$paramList["CUST_ID"] = $CUST_ID;
$paramList["INDUSTRY_TYPE_ID"] = 'Retail109';
$paramList["CHANNEL_ID"] = $CHANNEL_ID;
$paramList["TXN_AMOUNT"] = $TXN_AMOUNT;
$paramList["WEBSITE"] = 'WEBPROD';
$paramList["CALLBACK_URL"] = "https://jnbag.in/sites/all/modules/contrib/commerce_paytm/pgResponse.php";

$paytm_url = 'https://securegw.paytm.in/theia/processTransaction';
//$paramList["MERC_UNQ_REF"] =  $TXN_AMOUNT . '_' .$CUST_ID;//to add custid in response
/*
$paramList["CALLBACK_URL"] = "http://localhost/PaytmKit/pgResponse.php";
$paramList["CALLBACK_URL"] = "http://localhost/PaytmKit/pgResponse.php";
$paramList["MSISDN"] = $MSISDN; //Mobile number of customer
$paramList["EMAIL"] = $EMAIL; //Email ID of customer
$paramList["VERIFIED_BY"] = "EMAL"; //
$paramList["IS_USER_VERIFIED"] = "YES"; //

*/
print_r($paramList);

//Here checksum string will return by getChecksumFromArray() function.
$checkSum = getChecksumFromArray($paramList,'iACOFx1tmEEcd7KN');

?>
<html>
<head>
<title>Merchant Check Out Page</title>
</head>
<body>
	<center><h1>Please do not refresh this page...</h1></center>
		<form method="post" action="<?php echo $paytm_url; ?>" name="f1">
		<table border="1">
			<tbody>
			<?php
			foreach($paramList as $name => $value) {
				echo '<input type="hidden" name="' . $name .'" value="' . $value . '">';
			}
			?>
			<input type="hidden" name="CHECKSUMHASH" value="<?php echo $checkSum ?>">
			</tbody>
		</table>
		<script type="text/javascript">
			document.f1.submit();
		</script>
	</form>
</body>
</html>
