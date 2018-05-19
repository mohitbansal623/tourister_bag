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
<h3><a href="/admin/commerce/products/add/bags">Add Product Information</a></h3>
<h3><a href="/node/add/bags">Add Product for Listing</a></h3>
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

  return $export;
}
