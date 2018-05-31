<?php
/**
 * @file
 * feature_boss_agent_money_transfer.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_boss_agent_money_transfer_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-record_money_transfer-field_amount'.
  $field_instances['node-record_money_transfer-field_amount'] = array(
    'bundle' => 'record_money_transfer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_amount',
    'label' => 'Amount (रुपए)',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'node-record_money_transfer-field_amount_given_by'.
  $field_instances['node-record_money_transfer-field_amount_given_by'] = array(
    'bundle' => 'record_money_transfer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of the person who has given money to the agent',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_amount_given_by',
    'label' => 'Amount Given By (देने वाला)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-record_money_transfer-field_amout_given_on_date'.
  $field_instances['node-record_money_transfer-field_amout_given_on_date'] = array(
    'bundle' => 'record_money_transfer',
    'deleted' => 0,
    'description' => 'Specify on which date money is given to the agent',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_amout_given_on_date',
    'label' => 'Select Amount Given Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-record_money_transfer-field_purpose'.
  $field_instances['node-record_money_transfer-field_purpose'] = array(
    'bundle' => 'record_money_transfer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_purpose',
    'label' => 'Purpose (कारण)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Amount (रुपए)');
  t('Amount Given By (देने वाला)');
  t('Name of the person who has given money to the agent');
  t('Purpose (कारण)');
  t('Select Amount Given Date');
  t('Specify on which date money is given to the agent');

  return $field_instances;
}
