<?php
/**
 * @file
 * feature_boss_agent_money_transfer.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_boss_agent_money_transfer_user_default_roles() {
  $roles = array();

  // Exported role: Agent.
  $roles['Agent'] = array(
    'name' => 'Agent',
    'weight' => 4,
  );

  return $roles;
}
