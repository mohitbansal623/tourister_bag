<?php
/**
 * @file
 * feature_boss_agent_money_transfer.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_boss_agent_money_transfer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_boss_agent_money_transfer_node_info() {
  $items = array(
    'record_money_transfer' => array(
      'name' => t('Boss Agent Money Transfer Record'),
      'base' => 'node_content',
      'description' => t('Make a record of the money flow between agent and boss.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
