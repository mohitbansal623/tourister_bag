<?php
/**
 * @file
 * feature_user_login_signup.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_user_login_signup_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Information';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_address' => 'field_address',
    'field_pincode' => 'field_pincode',
    'field_company_name' => 'field_company_name',
    'field_contact_number' => 'field_contact_number',
    'field_gstin_no' => 'field_gstin_no',
    'field_owner_s_name' => 'field_owner_s_name',
    'field_owner_s_contact_no_' => 'field_owner_s_contact_no_',
    'field_purchase_dept_name' => 'field_purchase_dept_name',
    'field_purchase_dept_contact_no_' => 'field_purchase_dept_contact_no_',
    'field_stores_dept_name' => 'field_stores_dept_name',
    'field_stores_dept_contact_no_' => 'field_stores_dept_contact_no_',
    'field_authorized_transporter' => 'field_authorized_transporter',
    'field_office_contact_no_' => 'field_office_contact_no_',
    'field_aadhar_no' => 'field_aadhar_no',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pincode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_company_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gstin_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_owner_s_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_owner_s_contact_no_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_purchase_dept_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_purchase_dept_contact_no_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_stores_dept_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_stores_dept_contact_no_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_authorized_transporter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_office_contact_no_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aadhar_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: User: Pincode */
  $handler->display->display_options['fields']['field_pincode']['id'] = 'field_pincode';
  $handler->display->display_options['fields']['field_pincode']['table'] = 'field_data_field_pincode';
  $handler->display->display_options['fields']['field_pincode']['field'] = 'field_pincode';
  $handler->display->display_options['fields']['field_pincode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pincode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['element_label_colon'] = FALSE;
  /* Field: User: Contact Number */
  $handler->display->display_options['fields']['field_contact_number']['id'] = 'field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['table'] = 'field_data_field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['field'] = 'field_contact_number';
  $handler->display->display_options['fields']['field_contact_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_number']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_contact_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: GSTIN No */
  $handler->display->display_options['fields']['field_gstin_no']['id'] = 'field_gstin_no';
  $handler->display->display_options['fields']['field_gstin_no']['table'] = 'field_data_field_gstin_no';
  $handler->display->display_options['fields']['field_gstin_no']['field'] = 'field_gstin_no';
  $handler->display->display_options['fields']['field_gstin_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gstin_no']['hide_empty'] = TRUE;
  /* Field: User: Owner's name */
  $handler->display->display_options['fields']['field_owner_s_name']['id'] = 'field_owner_s_name';
  $handler->display->display_options['fields']['field_owner_s_name']['table'] = 'field_data_field_owner_s_name';
  $handler->display->display_options['fields']['field_owner_s_name']['field'] = 'field_owner_s_name';
  $handler->display->display_options['fields']['field_owner_s_name']['element_label_colon'] = FALSE;
  /* Field: User: Owner's Contact No. */
  $handler->display->display_options['fields']['field_owner_s_contact_no_']['id'] = 'field_owner_s_contact_no_';
  $handler->display->display_options['fields']['field_owner_s_contact_no_']['table'] = 'field_data_field_owner_s_contact_no_';
  $handler->display->display_options['fields']['field_owner_s_contact_no_']['field'] = 'field_owner_s_contact_no_';
  $handler->display->display_options['fields']['field_owner_s_contact_no_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_owner_s_contact_no_']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_owner_s_contact_no_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Purchase Dept. Name */
  $handler->display->display_options['fields']['field_purchase_dept_name']['id'] = 'field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['table'] = 'field_data_field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['field'] = 'field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['element_label_colon'] = FALSE;
  /* Field: User: Purchase Dept. Contact No. */
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['id'] = 'field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['table'] = 'field_data_field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['field'] = 'field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Stores Dept. Name */
  $handler->display->display_options['fields']['field_stores_dept_name']['id'] = 'field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['table'] = 'field_data_field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['field'] = 'field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['element_label_colon'] = FALSE;
  /* Field: User: Stores Dept. Contact No. */
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['id'] = 'field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['table'] = 'field_data_field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['field'] = 'field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Authorized Transporter */
  $handler->display->display_options['fields']['field_authorized_transporter']['id'] = 'field_authorized_transporter';
  $handler->display->display_options['fields']['field_authorized_transporter']['table'] = 'field_data_field_authorized_transporter';
  $handler->display->display_options['fields']['field_authorized_transporter']['field'] = 'field_authorized_transporter';
  $handler->display->display_options['fields']['field_authorized_transporter']['element_label_colon'] = FALSE;
  /* Field: User: Office Contact No. */
  $handler->display->display_options['fields']['field_office_contact_no_']['id'] = 'field_office_contact_no_';
  $handler->display->display_options['fields']['field_office_contact_no_']['table'] = 'field_data_field_office_contact_no_';
  $handler->display->display_options['fields']['field_office_contact_no_']['field'] = 'field_office_contact_no_';
  $handler->display->display_options['fields']['field_office_contact_no_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_contact_no_']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_office_contact_no_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Aadhar No */
  $handler->display->display_options['fields']['field_aadhar_no']['id'] = 'field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['table'] = 'field_data_field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['field'] = 'field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aadhar_no']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_aadhar_no']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Select Category (field_select_category) */
  $handler->display->display_options['filters']['field_select_category_value']['id'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['table'] = 'field_data_field_select_category';
  $handler->display->display_options['filters']['field_select_category_value']['field'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator_id'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['label'] = 'Select Category';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['identifier'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'all-user-information';
  $export['user_information'] = $view;

  return $export;
}
