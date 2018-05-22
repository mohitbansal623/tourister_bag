<?php
/**
 * @file
 * discount_tax_and_shipping_feature.features.inc
 */

/**
 * Implements hook_default_commerce_discount().
 */
function discount_tax_and_shipping_feature_default_commerce_discount() {
  $items = array();
  $items['discount_10_discount_on_shopping_of_more_than_2000'] = entity_import('commerce_discount', '{
    "name" : "discount_10_discount_on_shopping_of_more_than_2000",
    "label" : "10% discount on shopping of more than 2000",
    "type" : "order_discount",
    "status" : "1",
    "component_title" : "10% Discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "10.00" } ] },
      "rdf_mapping" : []
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "any" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_order_compare_order_amount",
          "condition_settings" : {
            "line_item_types" : { "product" : "product" },
            "operator" : "\\u003E",
            "total" : { "amount" : 200000, "currency_code" : "INR" },
            "condition_logic_operator" : null
          },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function discount_tax_and_shipping_feature_commerce_flat_rate_default_services() {
  $items = array(
    'shipping_rate' => array(
      'name' => 'shipping_rate',
      'base' => 'shipping_rate',
      'display_title' => 'Shipping Rate',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_shipping_rate',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'shipping_rate_details_form',
        'details_form_validate' => 'shipping_rate_details_form_validate',
        'details_form_submit' => 'shipping_rate_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Shipping Rate',
      'base_rate' => array(
        'amount' => 5000,
        'currency_code' => 'INR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function discount_tax_and_shipping_feature_commerce_tax_default_rates() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Salex Tax',
      'description' => 'Sales Tax on a product',
      'rate' => 0.06,
      'type' => 'sales_tax',
      'rules_component' => 'commerce_tax_rate_sales_tax',
      'default_rules_component' => 1,
      'price_component' => 'tax|sales_tax',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales Tax',
      'admin_list' => TRUE,
    ),
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'Value Added Tax (VAT) on each product. ',
      'rate' => 0.1,
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_vat',
      'default_rules_component' => 1,
      'price_component' => 'tax|vat',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}
