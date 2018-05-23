<?php
/**
 * @file
 * feature_site_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_site_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
