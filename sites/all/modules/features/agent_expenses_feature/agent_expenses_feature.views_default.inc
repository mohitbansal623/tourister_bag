<?php
/**
 * @file
 * agent_expenses_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agent_expenses_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_expenditure_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Expenditure Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Expenditure Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_expense_type' => 'field_expense_type',
    'field_amount_spend' => 'field_amount_spend',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expense_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount_spend' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$uid = $results[0]->users_node_uid;
$query = db_select("node", \'n\')
  ->fields(\'amount\', array(\'field_amount_value\'));
$query->join(\'field_data_field_amount\', \'amount\', "n.nid = amount.entity_id");
$query->join(\'field_data_field_agent_name\', \'agent\', "n.nid = agent.entity_id");
$query->condition(\'agent.field_agent_name_target_id\' , $uid);
$query->condition(\'n.status\', 1);
$results = $query->execute()->fetchCol();
if (!empty($results)) {
$amount = array_sum($results);
echo "Total Amount: "  . $amount;
}
else {
echo "Total Amount: 0";
}

?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Enter Expenses (field_enter_expenses) */
  $handler->display->display_options['relationships']['field_enter_expenses_value']['id'] = 'field_enter_expenses_value';
  $handler->display->display_options['relationships']['field_enter_expenses_value']['table'] = 'field_data_field_enter_expenses';
  $handler->display->display_options['relationships']['field_enter_expenses_value']['field'] = 'field_enter_expenses_value';
  $handler->display->display_options['relationships']['field_enter_expenses_value']['delta'] = '-1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Expense Type */
  $handler->display->display_options['fields']['field_expense_type']['id'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['table'] = 'field_data_field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['field'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['relationship'] = 'field_enter_expenses_value';
  /* Field: Field collection item: Amount Spend */
  $handler->display->display_options['fields']['field_amount_spend']['id'] = 'field_amount_spend';
  $handler->display->display_options['fields']['field_amount_spend']['table'] = 'field_data_field_amount_spend';
  $handler->display->display_options['fields']['field_amount_spend']['field'] = 'field_amount_spend';
  $handler->display->display_options['fields']['field_amount_spend']['relationship'] = 'field_enter_expenses_value';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'agent_expenses_record' => 'agent_expenses_record',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$uid = $results[0]->users_node_uid;
$query = db_select("node", \'n\')
  ->fields(\'amount\', array(\'field_amount_value\'));
$query->join(\'field_data_field_amount\', \'amount\', "n.nid = amount.entity_id");
$query->join(\'field_data_field_agent_name\', \'agent\', "n.nid = agent.entity_id");
$query->condition(\'agent.field_agent_name_target_id\' , $uid);
$query->condition(\'n.status\', 1);
$result = $query->execute()->fetchCol();
if (!empty($result)) {
$total_amount = array_sum($result);
echo "<h4>Total Amount: "  . $total_amount . "</h4>";
echo "<br>";
}
else {
echo "<h4>Total Amount: 0</h4>";
echo "<br>";

}

$total = count($results);
$total_expenses = 0;
if ($total != 0) {
  for ($i = 0; $i < $total; $i++) {
   $total_expenses +=  $results[$i]->field_field_amount_spend[0][\'raw\'][\'value\'];
  }
echo "<h4>Total Expenses: " .  $total_expenses . "</h4>";
echo "<br>";
}

if ($total_amount > $total_expenses) {
$remaining_amount = $total_amount - $total_expenses;
echo "<h4>Remaining Amount: " .  $remaining_amount . "</h4>";
echo "<br>";
}
else {
$remaining_amount = $total_expenses - $total_amount;
echo "<h4>Amount Needs to be taken from Admin: " .  $remaining_amount . "</h4>";
echo "<br>";
}

?>';
  $handler->display->display_options['path'] = 'user-expenditure-details';
  $export['user_expenditure_details'] = $view;

  return $export;
}
