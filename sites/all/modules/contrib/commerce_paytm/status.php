<?php
header("Pragma: no-cache");
header("Cache-Control: no-cache");
header("Expires: 0");
// following files need to be included
require_once("./lib/config_paytm.php");
require_once("./lib/encdec_paytm.php");

$checkSum = "";   

$paramList = array();
$paramList["MID"] = 'amitgo59443067266036'; //Provided by Paytm
$paramList["ORDER_ID"] = 'ORDS65411784'; //unique OrderId for every request

$checkSum = getChecksumFromArray($paramList,"_MP4@l_2ahyb!#e@");
$paramList["CHECKSUMHASH"] = urlencode($checkSum);
print_r($paramList);
$data_string = 'JsonData='.json_encode($paramList);

print_r($data_string);


$ch = curl_init();                    // initiate curl
$url = "https://securegw-stage.paytm.in/merchant-status/getTxnStatus"; // where you want to post data

curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 0);
curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);

curl_setopt($ch, CURLOPT_URL,$url);
curl_setopt($ch, CURLOPT_POST, true);  // tell curl you want to post something
curl_setopt($ch, CURLOPT_POSTFIELDS,$data_string); // define what you want to post
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true); // return the output in string format
$headers = array();
$headers[] = 'Content-Type: application/json';
curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
$output = curl_exec ($ch); // execute
$info = curl_getinfo($ch);
echo $output;

$data = json_decode($output, true);
echo "<pre>";
print_r($data);
echo "</pre>";
//echo $data['RESPONSE_CODE'];

?>