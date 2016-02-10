<?php
/**
 * @file
 * cod_chile_ticket_register.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cod_chile_ticket_register_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'ticket_registration-1-field_ticket_full_name'
  $field_instances['ticket_registration-1-field_ticket_full_name'] = array(
    'bundle' => 1,
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
    'entity_type' => 'ticket_registration',
    'field_name' => 'field_ticket_full_name',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'ticket_registration-2-field_ticket_full_name'
  $field_instances['ticket_registration-2-field_ticket_full_name'] = array(
    'bundle' => 2,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'ticket_registration',
    'field_name' => 'field_ticket_full_name',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
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
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Full Name');

  return $field_instances;
}
