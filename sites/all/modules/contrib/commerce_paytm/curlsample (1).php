<?php
$MID = 'WorldP64425807474247';
$ORDER_ID = 'ORDS74190813';

$apiURL="https://pguat.paytm.com/oltp/HANDLER_INTERNAL/TXNSTATUS";
        $jsonResponse = "";
        $responseParamList = array();
		$requestParamList = array("MID" => $MID , "ORDERID" => $ORDER_ID); 
        $JsonData = json_encode($requestParamList);
        $postData = 'JsonData=' . urlencode($JsonData);
        $ch = curl_init($apiURL);
        curl_setopt($ch, CURLOPT_CUSTOMREQUEST, "POST");
        curl_setopt($ch, CURLOPT_POSTFIELDS, $postData);
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
        curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 0);
        curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
        curl_setopt($ch, CURLOPT_HTTPHEADER, array(
            'Content-Type: application/json',
            'Content-Length: ' . strlen($postData))
        );
        $jsonResponse = curl_exec($ch);
		echo "<pre>";print_r($jsonResponse);
        $responseParamList = json_decode($jsonResponse, true);
		print_r($responseParamList);
        return $responseParamList;
		?>