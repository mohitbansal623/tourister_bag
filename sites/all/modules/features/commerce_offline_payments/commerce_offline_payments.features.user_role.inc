<?php
/**
 * @file
 * commerce_offline_payments.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function commerce_offline_payments_user_default_roles() {
  $roles = array();

  // Exported role: Courier.
  $roles['Courier'] = array(
    'name' => 'Courier',
    'weight' => 5,
  );

  return $roles;
}
