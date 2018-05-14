<?php
/**
 * @file
 * admin_interface_for_product_dc.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function admin_interface_for_product_dc_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  return $permissions;
}
