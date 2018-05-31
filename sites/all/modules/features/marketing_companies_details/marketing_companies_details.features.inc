<?php
/**
 * @file
 * marketing_companies_details.features.inc
 */

/**
 * Implements hook_views_api().
 */
function marketing_companies_details_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function marketing_companies_details_node_info() {
  $items = array(
    'marketing_details' => array(
      'name' => t('Company Details (दुकानदार की जानकारी)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company Name (दुकान का नाम)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
