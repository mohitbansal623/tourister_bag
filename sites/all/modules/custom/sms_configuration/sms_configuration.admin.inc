<?php

/**
 * @file
 * Administration page callbacks for the Indeed module.
 */

/**
 * Form builder. Configure Indeed search.
 */
function sms_configuration_admin_settings() {

  $form['smsmsg91_authKey'] = array(
    '#type' => 'textfield',
    '#title' => t('MSG91 Authentication ID'),
    '#default_value' => variable_get('smsmsg91_authKey', 'Your Authentication Key'),
    '#required' => TRUE,
  );

  $form['smsmsg91_senderID'] = array(
    '#type' => 'textfield',
    '#title' => t('MSG91 Sender ID'),
    '#default_value' => variable_get('smsmsg91_senderID', 'JNBAG'),
    '#maxlength' => 7,
    '#description' => 'SMS received will have this Sender ID',
    '#required' => TRUE,
  );

  $form['smsmsg91_route'] = array(
    '#type' => 'textfield',
    '#title' => t('MSG91 Route'),
    '#default_value' => variable_get('smsmsg91_route', '4'),
    '#description' => 'Use number from 1-6 route for Transactional,Promotional SMS',
    '#required' => TRUE,
  );

  $form['#validate'][] = 'sms_configuration_admin_form_validate';

  return system_settings_form($form);

}

/**
 * Validate Indeed settings submission.
 */
function sms_configuration_admin_form_validate($form, &$form_state) {
  $route = $form_state['values']['smsmsg91_route'];
  $auth_key = $form_state['values']['smsmsg91_authKey'];
  if ($route < 1 || $route > 6) {
    form_set_error('smsmsg91_route', t('Route: Please enter number between 1 and 6.'));
  }

  $msg91_auth_url = "https://control.msg91.com/api/validate.php?authkey=" . $auth_key;
  $validate_response = drupal_http_request($msg91_auth_url);

  if ($validate_response->data != 'Valid') {
    form_set_error('smsmsg91_authKey', t('Auth key you have entered doesnot validate.'));
  }
}




function sms_configuration_messages_form() {

  $form['sms_upload_cheque'] = array(
    '#type' => 'textarea',
    '#title' => 'Message for upload cheque',
    '#description' => '',
    '#default_value' => variable_get('sms_upload_cheque', ''),
    '#size' => 256,
    '#maxlength' => 256,
    '#required' => FALSE,
  );

  $form['sms_upload_cash_slip'] = array(
    '#type' => 'textarea',
    '#title' => 'Message for upload cash slip',
    '#description' => '',
    '#default_value' => variable_get('sms_upload_cash_slip', ''),
    '#size' => 256,
    '#maxlength' => 256,
    '#required' => FALSE,
  );

  $form['sms_upload_cash_slip'] = array(
    '#type' => 'textarea',
    '#title' => 'Message for upload cash slip',
    '#description' => '',
    '#default_value' => variable_get('sms_upload_cash_slip', ''),
    '#size' => 256,
    '#maxlength' => 256,
    '#required' => FALSE,
  );

  $form['sms_upload_cash_slip_bank'] = array(
    '#type' => 'textarea',
    '#title' => 'Message for upload cash slip by bank',
    '#description' => '',
    '#default_value' => variable_get('sms_upload_cash_slip_bank', ''),
    '#size' => 256,
    '#maxlength' => 256,
    '#required' => FALSE,
  );

  $form['sms_upload_neft_slip'] = array(
    '#type' => 'textarea',
    '#title' => 'Message for upload NEFT slip',
    '#description' => '',
    '#default_value' => variable_get('sms_upload_neft_slip', ''),
    '#size' => 256,
    '#maxlength' => 256,
    '#required' => FALSE,
  );

  $form['sms_user_register'] = array(
    '#type' => 'textarea',
    '#title' => 'Message send while new user is created.',
    '#description' => '',
    '#default_value' => variable_get('sms_user_register', ''),
    '#size' => 256,
    '#maxlength' => 256,
    '#required' => FALSE,
  );

  $form['sms_user_password'] = array(
    '#type' => 'textfield',
    '#title' => 'Password of the user which will be send to user for first time.',
    '#description' => '',
    '#default_value' => variable_get('sms_user_password', ''),
    '#size' => 60,
    '#maxlength' => 60,
    '#required' => FALSE,
  );

  return system_settings_form($form);
}
