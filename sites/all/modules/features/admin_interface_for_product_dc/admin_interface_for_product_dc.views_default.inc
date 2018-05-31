<?php
/**
 * @file
 * admin_interface_for_product_dc.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function admin_interface_for_product_dc_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_product_add';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Admin Product Add';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
    'product_id' => 'product_id',
    'field_color' => 'field_color',
    'created' => 'created',
    'delete_product' => 'delete_product',
    'edit_product' => 'edit_product',
    'view_product' => 'view_product',
    'commerce_price' => 'commerce_price',
    'sku' => 'sku',
    'field_image' => 'field_image',
    'counter' => 'counter',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'product_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_product' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_product' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_product' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="add-content-pages">
<h3><a href="/admin/people/create">Create Users</a></h3>
<h3><a href="/all-user-information">Users Information</a></h3>
<h3><a href="/agents-expenditure-details">Agent Expenditure Details</a></h3>
<h3><a href="/company-visit-data">Company Visit Details</a></h3>
<h3><a href="/show-bills">Show Bills</a></h3>
<h3><a href="/show-incoming-data">Show Incoming Data</a></h3>
<h3><a href="/admin/commerce/products/add/bags">Add Product Information</a></h3>
<h3><a href="/node/add/bags">Add Product for Listing</a></h3>
<h3><a href="/admin/commerce/discounts/add">Add Discount on Products</a></h3>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Commerce Product: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Commerce Product: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Edit link */
  $handler->display->display_options['fields']['edit_product']['id'] = 'edit_product';
  $handler->display->display_options['fields']['edit_product']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['edit_product']['field'] = 'edit_product';
  $handler->display->display_options['fields']['edit_product']['text'] = 'Edit';
  /* Field: Commerce Product: Delete link */
  $handler->display->display_options['fields']['delete_product']['id'] = 'delete_product';
  $handler->display->display_options['fields']['delete_product']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['delete_product']['field'] = 'delete_product';
  $handler->display->display_options['fields']['delete_product']['text'] = 'Delete';
  /* Sort criterion: Commerce Product: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'commerce_product';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bags' => 'bags',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin-product-add';
  $export['admin_product_add'] = $view;

  $view = new view();
  $view->name = 'company_visit_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company Visit Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Company Visit Data';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_owner_name' => 'field_owner_name',
    'field_email_id' => 'field_email_id',
    'field_company_address' => 'field_company_address',
    'field_owner_contact_number' => 'field_owner_contact_number',
    'field_alternative_contact_number' => 'field_alternative_contact_number',
    'field_city' => 'field_city',
    'field_state' => 'field_state',
    'field_pin_code' => 'field_pin_code',
    'field_transport' => 'field_transport',
    'field_whatsapp_number' => 'field_whatsapp_number',
    'field_company_category' => 'field_company_category',
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
    'field_owner_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_company_address' => array(
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
    'field_state' => array(
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
    'field_company_category' => array(
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
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 'bordered',
    'condensed' => 'condensed',
    'hover' => 0,
  );
  $handler->display->display_options['style_options']['responsive'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Company Name';
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
  /* Field: Content: Company Address (दुकान का पता) */
  $handler->display->display_options['fields']['field_company_address']['id'] = 'field_company_address';
  $handler->display->display_options['fields']['field_company_address']['table'] = 'field_data_field_company_address';
  $handler->display->display_options['fields']['field_company_address']['field'] = 'field_company_address';
  $handler->display->display_options['fields']['field_company_address']['label'] = 'Company Address';
  /* Field: Content: Contact Number (संपर्क सूत्र)  */
  $handler->display->display_options['fields']['field_owner_contact_number']['id'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['table'] = 'field_data_field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['field'] = 'field_owner_contact_number';
  $handler->display->display_options['fields']['field_owner_contact_number']['label'] = 'Contact Number';
  $handler->display->display_options['fields']['field_owner_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alternative Contact Number (दूसरा संपर्क सूत्र) */
  $handler->display->display_options['fields']['field_alternative_contact_number']['id'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['table'] = 'field_data_field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['field'] = 'field_alternative_contact_number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['label'] = 'Alternative Contact Number';
  $handler->display->display_options['fields']['field_alternative_contact_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: City (शहर का नाम) */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = 'City';
  /* Field: Content: State (राज्य) */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = 'State';
  /* Field: Content: Pin Code */
  $handler->display->display_options['fields']['field_pin_code']['id'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['table'] = 'field_data_field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['field'] = 'field_pin_code';
  $handler->display->display_options['fields']['field_pin_code']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transport */
  $handler->display->display_options['fields']['field_transport']['id'] = 'field_transport';
  $handler->display->display_options['fields']['field_transport']['table'] = 'field_data_field_transport';
  $handler->display->display_options['fields']['field_transport']['field'] = 'field_transport';
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
  $handler->display->display_options['fields']['field_company_category']['label'] = 'Company Category';
  $handler->display->display_options['fields']['field_company_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Write Category */
  $handler->display->display_options['fields']['field_write_category']['id'] = 'field_write_category';
  $handler->display->display_options['fields']['field_write_category']['table'] = 'field_data_field_write_category';
  $handler->display->display_options['fields']['field_write_category']['field'] = 'field_write_category';
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
  /* Filter criterion: Content: City (शहर का नाम) (field_city) */
  $handler->display->display_options['filters']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['expose']['operator_id'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['label'] = 'City (field_city)';
  $handler->display->display_options['filters']['field_city_value']['expose']['operator'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['identifier'] = 'field_city_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Select Date (तारीख़ चुने) (field_select_date) */
  $handler->display->display_options['filters']['field_select_date_value']['id'] = 'field_select_date_value';
  $handler->display->display_options['filters']['field_select_date_value']['table'] = 'field_data_field_select_date';
  $handler->display->display_options['filters']['field_select_date_value']['field'] = 'field_select_date_value';
  $handler->display->display_options['filters']['field_select_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_select_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_date_value']['expose']['operator_id'] = 'field_select_date_value_op';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['label'] = 'Select Date';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['operator'] = 'field_select_date_value_op';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['identifier'] = 'field_select_date_value';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_select_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: User: Name  (field_user_name) */
  $handler->display->display_options['filters']['field_user_name_value']['id'] = 'field_user_name_value';
  $handler->display->display_options['filters']['field_user_name_value']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['filters']['field_user_name_value']['field'] = 'field_user_name_value';
  $handler->display->display_options['filters']['field_user_name_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_name_value']['expose']['operator_id'] = 'field_user_name_value_op';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['label'] = 'Agent Name';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['operator'] = 'field_user_name_value_op';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['identifier'] = 'field_user_name_value';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: City (शहर का नाम) (field_city) */
  $handler->display->display_options['filters']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['group'] = 1;
  $handler->display->display_options['filters']['field_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['expose']['operator_id'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_city_value']['expose']['operator'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['identifier'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'company-visit-data';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'company-visit-data.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'sites/default/files/company-visit-data.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['company_visit_data'] = $view;

  $view = new view();
  $view->name = 'show_bills';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Show Bills';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show Bills';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_add_image_or_document' => 'field_add_image_or_document',
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
    'field_add_image_or_document' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['style_options']['responsive'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Add Image or Document */
  $handler->display->display_options['fields']['field_add_image_or_document']['id'] = 'field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['table'] = 'field_data_field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['field'] = 'field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image_or_document']['delta_offset'] = '0';
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
    'bill' => 'bill',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Add Image or Document */
  $handler->display->display_options['fields']['field_add_image_or_document']['id'] = 'field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['table'] = 'field_data_field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['field'] = 'field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image_or_document']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'show-bills';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Add Image or Document */
  $handler->display->display_options['fields']['field_add_image_or_document']['id'] = 'field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['table'] = 'field_data_field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['field'] = 'field_add_image_or_document';
  $handler->display->display_options['fields']['field_add_image_or_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_image_or_document']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_add_image_or_document']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_add_image_or_document']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['path'] = 'show-bill-details';
  $export['show_bills'] = $view;

  $view = new view();
  $view->name = 'show_incoming_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Show Incoming Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Show Incoming Data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_amout_given_on_date' => 'field_amout_given_on_date',
    'field_amount' => 'field_amount',
    'field_amount_given_by' => 'field_amount_given_by',
    'field_purpose' => 'field_purpose',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_amout_given_on_date' => array(
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
    'field_amount_given_by' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_purpose' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['style_options']['responsive'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Select Amount Given Date */
  $handler->display->display_options['fields']['field_amout_given_on_date']['id'] = 'field_amout_given_on_date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['table'] = 'field_data_field_amout_given_on_date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['field'] = 'field_amout_given_on_date';
  $handler->display->display_options['fields']['field_amout_given_on_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Amount (रुपए) */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Amount Given By (देने वाला) */
  $handler->display->display_options['fields']['field_amount_given_by']['id'] = 'field_amount_given_by';
  $handler->display->display_options['fields']['field_amount_given_by']['table'] = 'field_data_field_amount_given_by';
  $handler->display->display_options['fields']['field_amount_given_by']['field'] = 'field_amount_given_by';
  /* Field: Content: Purpose (कारण) */
  $handler->display->display_options['fields']['field_purpose']['id'] = 'field_purpose';
  $handler->display->display_options['fields']['field_purpose']['table'] = 'field_data_field_purpose';
  $handler->display->display_options['fields']['field_purpose']['field'] = 'field_purpose';
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
  /* Filter criterion: Content: Select Amount Given Date (field_amout_given_on_date) */
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['id'] = 'field_amout_given_on_date_value';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['table'] = 'field_data_field_amout_given_on_date';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['field'] = 'field_amout_given_on_date_value';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['expose']['operator_id'] = 'field_amout_given_on_date_value_op';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['expose']['label'] = 'Select Date';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['expose']['operator'] = 'field_amout_given_on_date_value_op';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['expose']['identifier'] = 'field_amout_given_on_date_value';
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_amout_given_on_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Amount Given By (देने वाला) (field_amount_given_by:format) */
  $handler->display->display_options['filters']['field_amount_given_by_format']['id'] = 'field_amount_given_by_format';
  $handler->display->display_options['filters']['field_amount_given_by_format']['table'] = 'field_data_field_amount_given_by';
  $handler->display->display_options['filters']['field_amount_given_by_format']['field'] = 'field_amount_given_by_format';
  $handler->display->display_options['filters']['field_amount_given_by_format']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amount_given_by_format']['expose']['operator_id'] = 'field_amount_given_by_format_op';
  $handler->display->display_options['filters']['field_amount_given_by_format']['expose']['label'] = 'Amount Given By (देने वाला)';
  $handler->display->display_options['filters']['field_amount_given_by_format']['expose']['operator'] = 'field_amount_given_by_format_op';
  $handler->display->display_options['filters']['field_amount_given_by_format']['expose']['identifier'] = 'field_amount_given_by_format';
  $handler->display->display_options['filters']['field_amount_given_by_format']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['path'] = 'show-incoming-data';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['path'] = 'show-user-incoming';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'incoming-data.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'sites/default/files/incoming.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );

  /* Display: Data export 2 */
  $handler = $view->new_display('views_data_export', 'Data export 2', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'incoming-user-details.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['path'] = 'sites/default/files/incoming-user-details.xls';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $export['show_incoming_data'] = $view;

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
  /* Relationship: Content: Enter Expenses (खर्च लिखे) (field_enter_expenses) */
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
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field collection item: Expense Type (खर्च का प्रकार) */
  $handler->display->display_options['fields']['field_expense_type']['id'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['table'] = 'field_data_field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['field'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['relationship'] = 'field_enter_expenses_value';
  /* Field: Field collection item: Amount Spend (रुपये लिखे) */
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Expenditure Details (ख़र्च का विवरण)';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
echo "<h3><a href=\'/show-user-incoming\'>Show Incoming Details</a></h3>";
global $user;
$uid = $user->uid;
$total_amount = 0;
$query = db_select("node", \'n\')
  ->fields(\'amount\', array(\'field_amount_value\'));
$query->join(\'field_data_field_amount\', \'amount\', "n.nid = amount.entity_id");
$query->condition(\'n.uid\' , $uid);
$query->condition(\'n.status\', 1);
$result = $query->execute()->fetchCol();
if (!empty($result)) {
$total_amount = array_sum($result);
echo "<h4>Total Amount given by Admin (कुल जमा रुपया): "  . $total_amount . "</h4>";
echo "<br>";
}
else {
echo "<h4>Total Amount given by Admin (कुल जमा रुपया): 0</h4>";
echo "<br>";

}

$total = count($results);
$total_expenses = 0;
if ($total != 0) {
  for ($i = 0; $i < $total; $i++) {
   $total_expenses +=  $results[$i]->field_field_amount_spend[0][\'raw\'][\'value\'];
  }
echo "<h4>Total Expenses (कुल ख़र्च रुपया): " .  $total_expenses . "</h4>";
echo "<br>";
}

if ($total_amount > $total_expenses) {
$remaining_amount = $total_amount - $total_expenses;
echo "<h4>Remaining Amount (बचे रुपए): " .  $remaining_amount . "</h4>";
echo "<br>";
}
else {
$remaining_amount = $total_expenses - $total_amount;
echo "<h4>Amount Needs to be taken from Admin: " .  $remaining_amount . "</h4>";
echo "<br>";
}

?>';
  $handler->display->display_options['path'] = 'user-expenditure-details';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agent Expenditure Details';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$query = db_select("node", \'n\')
  ->fields(\'amount\', array(\'field_amount_value\'));
$query->join(\'field_data_field_amount\', \'amount\', "n.nid = amount.entity_id");
$query->condition(\'n.status\' , 1);
$results = $query->execute()->fetchCol();
if (!empty($results)) {
$amount = array_sum($results);
echo "Total Amount: "  . $amount;
}
else {
echo "Total Amount: 0";
}

?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Agent Name';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field collection item: Expense Type (खर्च का प्रकार) */
  $handler->display->display_options['fields']['field_expense_type']['id'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['table'] = 'field_data_field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['field'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['relationship'] = 'field_enter_expenses_value';
  /* Field: Field collection item: Amount Spend (रुपये लिखे) */
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Select Date (तारीख़ चुने) (field_select_date) */
  $handler->display->display_options['filters']['field_select_date_value']['id'] = 'field_select_date_value';
  $handler->display->display_options['filters']['field_select_date_value']['table'] = 'field_data_field_select_date';
  $handler->display->display_options['filters']['field_select_date_value']['field'] = 'field_select_date_value';
  $handler->display->display_options['filters']['field_select_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_select_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_date_value']['expose']['operator_id'] = 'field_select_date_value_op';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['label'] = 'Select Date';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['operator'] = 'field_select_date_value_op';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['identifier'] = 'field_select_date_value';
  $handler->display->display_options['filters']['field_select_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_select_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: User: Name  (field_user_name) */
  $handler->display->display_options['filters']['field_user_name_value']['id'] = 'field_user_name_value';
  $handler->display->display_options['filters']['field_user_name_value']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['filters']['field_user_name_value']['field'] = 'field_user_name_value';
  $handler->display->display_options['filters']['field_user_name_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_name_value']['expose']['operator_id'] = 'field_user_name_value_op';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['label'] = 'Filter By Name';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['operator'] = 'field_user_name_value_op';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['identifier'] = 'field_user_name_value';
  $handler->display->display_options['filters']['field_user_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'agents-expenditure-details';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'user-expenses.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Agent Name';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field collection item: Expense Type (खर्च का प्रकार) */
  $handler->display->display_options['fields']['field_expense_type']['id'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['table'] = 'field_data_field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['field'] = 'field_expense_type';
  $handler->display->display_options['fields']['field_expense_type']['relationship'] = 'field_enter_expenses_value';
  /* Field: Field collection item: Amount Spend (रुपये लिखे) */
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'sites/default/files/user-expenses.xls';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $export['user_expenditure_details'] = $view;

  return $export;
}
