<?php
/**
 * @file
 */
/**
 * function for send all data to gateway.
 */


function page_send_response_data() {

  $link = $_POST['payment_link'] . '?embed=form&intent=buy';

  foreach ($_POST as $key => $value) {
    if(strpos($key, 'data_') === 0){
      if($key == 'data_phone'){
        $value = urlencode($value);
      }
      $link .= '&' . $key . '=' . $value;
    }
  }

  foreach ($_POST as $key => $value) {
    if(strpos($key, 'data_') === 0 and $key !== 'data_sign'){
      $link .= '&data_readonly=' . $key;
    }
    if(strpos($key, 'data_Field') === 0){
      $link .= '&data_hidden=' . $key; 
    }


  }
  drupal_goto($link);
}
