<?php
/**
 * @file
 * feature_user_login_signup.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_user_login_signup_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_aadhar_no'.
  $field_instances['user-user-field_aadhar_no'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_aadhar_no',
    'label' => 'Aadhar No',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_address'.
  $field_instances['user-user-field_address'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_attach_gst_certificate'.
  $field_instances['user-user-field_attach_gst_certificate'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_attach_gst_certificate',
    'label' => 'Attach GST Certificate',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx',
      'max_filesize' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'user-user-field_authorized_transporter'.
  $field_instances['user-user-field_authorized_transporter'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_authorized_transporter',
    'label' => 'Authorized Transporter',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_company_name'.
  $field_instances['user-user-field_company_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_company_name',
    'label' => 'Company Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_contact_number'.
  $field_instances['user-user-field_contact_number'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_contact_number',
    'label' => 'Contact Number',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_gstin_no'.
  $field_instances['user-user-field_gstin_no'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_gstin_no',
    'label' => 'GSTIN No',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_office_contact_no_'.
  $field_instances['user-user-field_office_contact_no_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_office_contact_no_',
    'label' => 'Office Contact No.',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'user-user-field_owner_s_contact_no_'.
  $field_instances['user-user-field_owner_s_contact_no_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_owner_s_contact_no_',
    'label' => 'Owner\'s Contact No.',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_owner_s_name'.
  $field_instances['user-user-field_owner_s_name'] = array(
    'bundle' => 'user',
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
    ),
    'entity_type' => 'user',
    'field_name' => 'field_owner_s_name',
    'label' => 'Owner\'s name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_pincode'.
  $field_instances['user-user-field_pincode'] = array(
    'bundle' => 'user',
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pincode',
    'label' => 'Pincode',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_purchase_dept_contact_no_'.
  $field_instances['user-user-field_purchase_dept_contact_no_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_purchase_dept_contact_no_',
    'label' => 'Purchase Dept. Contact No.',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_purchase_dept_name'.
  $field_instances['user-user-field_purchase_dept_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_purchase_dept_name',
    'label' => 'Purchase Dept. Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_select_category'.
  $field_instances['user-user-field_select_category'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_select_category',
    'label' => 'Select Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_stores_dept_contact_no_'.
  $field_instances['user-user-field_stores_dept_contact_no_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_stores_dept_contact_no_',
    'label' => 'Stores Dept. Contact No.',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_stores_dept_name'.
  $field_instances['user-user-field_stores_dept_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_stores_dept_name',
    'label' => 'Stores Dept. Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_transporter_contact_no_'.
  $field_instances['user-user-field_transporter_contact_no_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_transporter_contact_no_',
    'label' => 'Transporter Contact No.',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'user-user-field_user_name'.
  $field_instances['user-user-field_user_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_name',
    'label' => 'Name ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aadhar No');
  t('Address');
  t('Attach GST Certificate');
  t('Authorized Transporter');
  t('Company Name');
  t('Contact Number');
  t('GSTIN No');
  t('Name ');
  t('Office Contact No.');
  t('Owner\'s Contact No.');
  t('Owner\'s name');
  t('Pincode');
  t('Purchase Dept. Contact No.');
  t('Purchase Dept. Name');
  t('Select Category');
  t('Stores Dept. Contact No.');
  t('Stores Dept. Name');
  t('Transporter Contact No.');

  return $field_instances;
}
