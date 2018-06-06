<?php
/**
 * @file
 * commerce_offline_payments.features.inc
 */

/**
 * Implements hook_commerce_custom_offline_payments().
 */
function commerce_offline_payments_commerce_custom_offline_payments() {
  $items = array(
    'payment_via_cash' => array(
      'id' => 'payment_via_cash',
      'title' => 'Payment via Cash',
      'description' => '',
      'information' => '',
      'format' => 'plain_text',
      'status' => 1,
      'checkout' => 1,
      'terminal' => 1,
      'fieldable' => 0,
    ),
    'payment_via_cash_slip_bank_' => array(
      'id' => 'payment_via_cash_slip_bank_',
      'title' => 'Payment via Cash Slip (Bank)',
      'description' => '',
      'information' => '',
      'format' => 'plain_text',
      'status' => 1,
      'checkout' => 1,
      'terminal' => 1,
      'fieldable' => 0,
    ),
    'payment_via_cheque' => array(
      'id' => 'payment_via_cheque',
      'title' => 'Payment via Cheque',
      'description' => '',
      'information' => '',
      'format' => 'plain_text',
      'status' => 1,
      'checkout' => 1,
      'terminal' => 1,
      'fieldable' => 0,
    ),
    'payment_via_neft' => array(
      'id' => 'payment_via_neft',
      'title' => 'Payment via NEFT',
      'description' => '',
      'information' => '',
      'format' => 'plain_text',
      'status' => 1,
      'checkout' => 1,
      'terminal' => 1,
      'fieldable' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function commerce_offline_payments_node_info() {
  $items = array(
    'upload_cash_slip' => array(
      'name' => t('Upload Cash Slip'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'upload_cash_slip_bank' => array(
      'name' => t('Upload Cash Slip Bank'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'upload_cheque' => array(
      'name' => t('Upload Cheque'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'upload_neft_slip' => array(
      'name' => t('Upload NEFT Slip'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
