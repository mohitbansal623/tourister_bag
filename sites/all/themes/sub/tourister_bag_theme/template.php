<?php

/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * @file
 * The primary PHP file for this theme.
 */

function tourister_bag_theme_preprocess_page(&$variables) {
  $path = path_to_theme();
  drupal_add_css($path . '/stylesheets/basic_layout.css');
}
