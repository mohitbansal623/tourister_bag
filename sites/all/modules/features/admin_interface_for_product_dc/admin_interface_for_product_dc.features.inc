<?php
/**
 * @file
 * admin_interface_for_product_dc.features.inc
 */

/**
 * Implements hook_views_api().
 */
function admin_interface_for_product_dc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function admin_interface_for_product_dc_node_info() {
  $items = array(
    'bill' => array(
      'name' => t('Bill'),
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
