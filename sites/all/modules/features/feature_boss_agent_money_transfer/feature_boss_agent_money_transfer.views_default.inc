<?php
/**
 * @file
 * feature_boss_agent_money_transfer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_boss_agent_money_transfer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'transactions_bosses_to_agent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Transactions Bosses to Agent';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Transactions Bosses to Agent';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_agent_name' => 'field_agent_name',
    'field_amount_given_by' => 'field_amount_given_by',
    'field_amount' => 'field_amount',
    'field_amout_given_on_date' => 'field_amout_given_on_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agent_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount_given_by' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amout_given_on_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'bordered' => 'bordered',
    'hover' => 'hover',
    'condensed' => 'condensed',
    'striped' => 0,
  );
  $handler->display->display_options['style_options']['responsive'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_agent_name_target_id']['id'] = 'field_agent_name_target_id';
  $handler->display->display_options['relationships']['field_agent_name_target_id']['table'] = 'field_data_field_agent_name';
  $handler->display->display_options['relationships']['field_agent_name_target_id']['field'] = 'field_agent_name_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Agent Name */
  $handler->display->display_options['fields']['field_agent_name']['id'] = 'field_agent_name';
  $handler->display->display_options['fields']['field_agent_name']['table'] = 'field_data_field_agent_name';
  $handler->display->display_options['fields']['field_agent_name']['field'] = 'field_agent_name';
  $handler->display->display_options['fields']['field_agent_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agent_name']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Amount Given By */
  $handler->display->display_options['fields']['field_amount_given_by']['id'] = 'field_amount_given_by';
  $handler->display->display_options['fields']['field_amount_given_by']['table'] = 'field_data_field_amount_given_by';
  $handler->display->display_options['fields']['field_amount_given_by']['field'] = 'field_amount_given_by';
  $handler->display->display_options['fields']['field_amount_given_by']['element_label_colon'] = FALSE;
  /* Field: Content: Given Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['label'] = 'Amount';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Select Amount Given Date */
  $handler->display->display_options['fields']['field_amout_given_on_date']['id'] = 'field_amout_given_on_date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['table'] = 'field_data_field_amout_given_on_date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['field'] = 'field_amout_given_on_date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amout_given_on_date']['settings'] = array(
    'format_type' => 'medium',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'record_money_transfer' => 'record_money_transfer',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'transactions-by-higher-authority';
  $export['transactions_bosses_to_agent'] = $view;

  return $export;
}
