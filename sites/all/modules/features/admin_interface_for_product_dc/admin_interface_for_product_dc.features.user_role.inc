<?php
/**
 * @file
 * admin_interface_for_product_dc.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function admin_interface_for_product_dc_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 3,
  );

  return $roles;
}
