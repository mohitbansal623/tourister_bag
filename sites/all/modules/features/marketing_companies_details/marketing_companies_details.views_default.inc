<?php
/**
 * @file
 * marketing_companies_details.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function marketing_companies_details_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'companies_marketing_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Companies Marketing Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Companies Marketing Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_alternative_contact_number' => 'field_alternative_contact_number',
    'field_city' => 'field_city',
    'field_company_address' => 'field_company_address',
    'field_company_category' => 'field_company_category',
    'field_owner_contact_number' => 'field_owner_contact_number',
    'edit_node' => 'edit_node',
    'field_email_id' => 'field_email_id',
    'field_owner_name' => 'field_owner_name',
    'field_pin_code' => 'field_pin_code',
    'field_transport' => 'field_transport',
    'field_whatsapp_number' => 'field_whatsapp_number',
    'field_write_category' => 'field_write_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alternative_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_company_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_company_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_owner_contact_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_owner_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pin_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transport' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_whatsapp_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_write_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Owner Name */
  $handler->display->display_options['fields']['field_owner_name']['id'] = 'field_owner_name';
  $handler->display->display_options['fields']['field_owner_name']['table'] = 'field_data_field_owner_name';
  $handler->display->display_options['fields']['field_owner_name']['field'] = 'field_owner_name';
  /* Field: Content: Email ID */
  $handler->display->display_options['fields']['field_email_id']['id'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['table'] = 'field_data_field_email_id';
  $handler->display->display_options['fields']['field_email_id']['field'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['type'] = 'email_plain';
  /* Field: Content: Contact Number (संपर्क सूत्र)  */
  $handler->display->display_options['fields']['field_owner_contact_number']['id'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['table'] = 'field_data_field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['field'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alternative Contact Number (दूसरा संपर्क सूत्र) */
  $handler->display->display_options['fields']['field_alternative_contact_number']['id'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['table'] = 'field_data_field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['field'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Company Address (दुकान का पता) */
  $handler->display->display_options['fields']['field_company_address']['id'] = 'field_company_address';
  $handler->display->display_options['fields']['field_company_address']['table'] = 'field_data_field_company_address';
  $handler->display->display_options['fields']['field_company_address']['field'] = 'field_company_address';
  /* Field: Content: City (शहर का नाम) */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: Content: State (राज्य) */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Content: Pin Code */
  $handler->display->display_options['fields']['field_pin_code']['id'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['table'] = 'field_data_field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['field'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Whatsapp Number */
  $handler->display->display_options['fields']['field_whatsapp_number']['id'] = 'field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['table'] = 'field_data_field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['field'] = 'field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Company Category  (दुकान का प्रकार)  */
  $handler->display->display_options['fields']['field_company_category']['id'] = 'field_company_category';
  $handler->display->display_options['fields']['field_company_category']['table'] = 'field_data_field_company_category';
  $handler->display->display_options['fields']['field_company_category']['field'] = 'field_company_category';
  $handler->display->display_options['fields']['field_company_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Write Category */
  $handler->display->display_options['fields']['field_write_category']['id'] = 'field_write_category';
  $handler->display->display_options['fields']['field_write_category']['table'] = 'field_data_field_write_category';
  $handler->display->display_options['fields']['field_write_category']['field'] = 'field_write_category';
  /* Field: Content: Transport */
  $handler->display->display_options['fields']['field_transport']['id'] = 'field_transport';
  $handler->display->display_options['fields']['field_transport']['table'] = 'field_data_field_transport';
  $handler->display->display_options['fields']['field_transport']['field'] = 'field_transport';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
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
    'marketing_details' => 'marketing_details',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Owner Name */
  $handler->display->display_options['fields']['field_owner_name']['id'] = 'field_owner_name';
  $handler->display->display_options['fields']['field_owner_name']['table'] = 'field_data_field_owner_name';
  $handler->display->display_options['fields']['field_owner_name']['field'] = 'field_owner_name';
  /* Field: Content: Email ID */
  $handler->display->display_options['fields']['field_email_id']['id'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['table'] = 'field_data_field_email_id';
  $handler->display->display_options['fields']['field_email_id']['field'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['type'] = 'email_plain';
  /* Field: Content: Contact Number (संपर्क सूत्र)  */
  $handler->display->display_options['fields']['field_owner_contact_number']['id'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['table'] = 'field_data_field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['field'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alternative Contact Number (दूसरा संपर्क सूत्र) */
  $handler->display->display_options['fields']['field_alternative_contact_number']['id'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['table'] = 'field_data_field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['field'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Company Address (दुकान का पता) */
  $handler->display->display_options['fields']['field_company_address']['id'] = 'field_company_address';
  $handler->display->display_options['fields']['field_company_address']['table'] = 'field_data_field_company_address';
  $handler->display->display_options['fields']['field_company_address']['field'] = 'field_company_address';
  /* Field: Content: City (शहर का नाम) */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: Content: State (राज्य) */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Content: Pin Code */
  $handler->display->display_options['fields']['field_pin_code']['id'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['table'] = 'field_data_field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['field'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Whatsapp Number */
  $handler->display->display_options['fields']['field_whatsapp_number']['id'] = 'field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['table'] = 'field_data_field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['field'] = 'field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Company Category  (दुकान का प्रकार)  */
  $handler->display->display_options['fields']['field_company_category']['id'] = 'field_company_category';
  $handler->display->display_options['fields']['field_company_category']['table'] = 'field_data_field_company_category';
  $handler->display->display_options['fields']['field_company_category']['field'] = 'field_company_category';
  $handler->display->display_options['fields']['field_company_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Write Category */
  $handler->display->display_options['fields']['field_write_category']['id'] = 'field_write_category';
  $handler->display->display_options['fields']['field_write_category']['table'] = 'field_data_field_write_category';
  $handler->display->display_options['fields']['field_write_category']['field'] = 'field_write_category';
  /* Field: Content: Transport */
  $handler->display->display_options['fields']['field_transport']['id'] = 'field_transport';
  $handler->display->display_options['fields']['field_transport']['table'] = 'field_data_field_transport';
  $handler->display->display_options['fields']['field_transport']['field'] = 'field_transport';
  /* Field: Field: Aadhar No */
  $handler->display->display_options['fields']['field_aadhar_no']['id'] = 'field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['table'] = 'field_data_field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['field'] = 'field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Account Dept. Contact No. */
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['id'] = 'field_account_dept_contact_no_';
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['table'] = 'field_data_field_account_dept_contact_no_';
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['field'] = 'field_account_dept_contact_no_';
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Account Dept. Name */
  $handler->display->display_options['fields']['field_account_dept_name']['id'] = 'field_account_dept_name';
  $handler->display->display_options['fields']['field_account_dept_name']['table'] = 'field_data_field_account_dept_name';
  $handler->display->display_options['fields']['field_account_dept_name']['field'] = 'field_account_dept_name';
  /* Field: Field: Attach GST Certificate */
  $handler->display->display_options['fields']['field_attach_gst_certificate']['id'] = 'field_attach_gst_certificate';
  $handler->display->display_options['fields']['field_attach_gst_certificate']['table'] = 'field_data_field_attach_gst_certificate';
  $handler->display->display_options['fields']['field_attach_gst_certificate']['field'] = 'field_attach_gst_certificate';
  $handler->display->display_options['fields']['field_attach_gst_certificate']['click_sort_column'] = 'fid';
  /* Field: Field: Purchase Dept. Contact No. */
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['id'] = 'field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['table'] = 'field_data_field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['field'] = 'field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Purchase Dept. Name */
  $handler->display->display_options['fields']['field_purchase_dept_name']['id'] = 'field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['table'] = 'field_data_field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['field'] = 'field_purchase_dept_name';
  /* Field: Field: Stores Dept. Contact No. */
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['id'] = 'field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['table'] = 'field_data_field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['field'] = 'field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Stores Dept. Name */
  $handler->display->display_options['fields']['field_stores_dept_name']['id'] = 'field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['table'] = 'field_data_field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['field'] = 'field_stores_dept_name';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['path'] = 'companies-marketing-info';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'marketing-data.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Owner Name */
  $handler->display->display_options['fields']['field_owner_name']['id'] = 'field_owner_name';
  $handler->display->display_options['fields']['field_owner_name']['table'] = 'field_data_field_owner_name';
  $handler->display->display_options['fields']['field_owner_name']['field'] = 'field_owner_name';
  /* Field: Content: Email ID */
  $handler->display->display_options['fields']['field_email_id']['id'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['table'] = 'field_data_field_email_id';
  $handler->display->display_options['fields']['field_email_id']['field'] = 'field_email_id';
  $handler->display->display_options['fields']['field_email_id']['type'] = 'email_plain';
  /* Field: Content: Contact Number (संपर्क सूत्र)  */
  $handler->display->display_options['fields']['field_owner_contact_number']['id'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['table'] = 'field_data_field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['field'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alternative Contact Number (दूसरा संपर्क सूत्र) */
  $handler->display->display_options['fields']['field_alternative_contact_number']['id'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['table'] = 'field_data_field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['field'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Company Address (दुकान का पता) */
  $handler->display->display_options['fields']['field_company_address']['id'] = 'field_company_address';
  $handler->display->display_options['fields']['field_company_address']['table'] = 'field_data_field_company_address';
  $handler->display->display_options['fields']['field_company_address']['field'] = 'field_company_address';
  /* Field: Content: City (शहर का नाम) */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: Content: State (राज्य) */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  /* Field: Content: Pin Code */
  $handler->display->display_options['fields']['field_pin_code']['id'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['table'] = 'field_data_field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['field'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Whatsapp Number */
  $handler->display->display_options['fields']['field_whatsapp_number']['id'] = 'field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['table'] = 'field_data_field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['field'] = 'field_whatsapp_number';
  $handler->display->display_options['fields']['field_whatsapp_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Company Category  (दुकान का प्रकार)  */
  $handler->display->display_options['fields']['field_company_category']['id'] = 'field_company_category';
  $handler->display->display_options['fields']['field_company_category']['table'] = 'field_data_field_company_category';
  $handler->display->display_options['fields']['field_company_category']['field'] = 'field_company_category';
  $handler->display->display_options['fields']['field_company_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Write Category */
  $handler->display->display_options['fields']['field_write_category']['id'] = 'field_write_category';
  $handler->display->display_options['fields']['field_write_category']['table'] = 'field_data_field_write_category';
  $handler->display->display_options['fields']['field_write_category']['field'] = 'field_write_category';
  /* Field: Content: Transport */
  $handler->display->display_options['fields']['field_transport']['id'] = 'field_transport';
  $handler->display->display_options['fields']['field_transport']['table'] = 'field_data_field_transport';
  $handler->display->display_options['fields']['field_transport']['field'] = 'field_transport';
  /* Field: Field: Attach GST Certificate */
  $handler->display->display_options['fields']['field_attach_gst_certificate']['id'] = 'field_attach_gst_certificate';
  $handler->display->display_options['fields']['field_attach_gst_certificate']['table'] = 'field_data_field_attach_gst_certificate';
  $handler->display->display_options['fields']['field_attach_gst_certificate']['field'] = 'field_attach_gst_certificate';
  $handler->display->display_options['fields']['field_attach_gst_certificate']['click_sort_column'] = 'fid';
  /* Field: Field: Landline Number */
  $handler->display->display_options['fields']['field_landline_number']['id'] = 'field_landline_number';
  $handler->display->display_options['fields']['field_landline_number']['table'] = 'field_data_field_landline_number';
  $handler->display->display_options['fields']['field_landline_number']['field'] = 'field_landline_number';
  $handler->display->display_options['fields']['field_landline_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Aadhar No */
  $handler->display->display_options['fields']['field_aadhar_no']['id'] = 'field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['table'] = 'field_data_field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['field'] = 'field_aadhar_no';
  $handler->display->display_options['fields']['field_aadhar_no']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Account Dept. Contact No. */
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['id'] = 'field_account_dept_contact_no_';
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['table'] = 'field_data_field_account_dept_contact_no_';
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['field'] = 'field_account_dept_contact_no_';
  $handler->display->display_options['fields']['field_account_dept_contact_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Account Dept. Name */
  $handler->display->display_options['fields']['field_account_dept_name']['id'] = 'field_account_dept_name';
  $handler->display->display_options['fields']['field_account_dept_name']['table'] = 'field_data_field_account_dept_name';
  $handler->display->display_options['fields']['field_account_dept_name']['field'] = 'field_account_dept_name';
  /* Field: Field: Purchase Dept. Contact No. */
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['id'] = 'field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['table'] = 'field_data_field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['field'] = 'field_purchase_dept_contact_no_';
  $handler->display->display_options['fields']['field_purchase_dept_contact_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Purchase Dept. Name */
  $handler->display->display_options['fields']['field_purchase_dept_name']['id'] = 'field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['table'] = 'field_data_field_purchase_dept_name';
  $handler->display->display_options['fields']['field_purchase_dept_name']['field'] = 'field_purchase_dept_name';
  /* Field: Field: Stores Dept. Contact No. */
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['id'] = 'field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['table'] = 'field_data_field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['field'] = 'field_stores_dept_contact_no_';
  $handler->display->display_options['fields']['field_stores_dept_contact_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Stores Dept. Name */
  $handler->display->display_options['fields']['field_stores_dept_name']['id'] = 'field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['table'] = 'field_data_field_stores_dept_name';
  $handler->display->display_options['fields']['field_stores_dept_name']['field'] = 'field_stores_dept_name';
  $handler->display->display_options['path'] = 'sites/default/files/marketing-customer-info.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['companies_marketing_info'] = $view;

  return $export;
}
