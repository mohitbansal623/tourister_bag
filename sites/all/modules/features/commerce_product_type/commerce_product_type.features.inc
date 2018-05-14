<?php
/**
 * @file
 * commerce_product_type.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function commerce_product_type_commerce_product_default_types() {
  $items = array(
    'bags' => array(
      'type' => 'bags',
      'name' => 'Bags',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}
