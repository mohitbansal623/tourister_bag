<?php
/**
 * @file
 * bags_drupal_commerce.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bags_drupal_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bags_drupal_commerce_image_default_styles() {
  $styles = array();

  // Exported image style: image_size_300x200.
  $styles['image_size_300x200'] = array(
    'label' => 'Image Size 300x200',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bags_drupal_commerce_node_info() {
  $items = array(
    'bags' => array(
      'name' => t('Bags'),
      'base' => 'node_content',
      'description' => t('Display Bags'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
