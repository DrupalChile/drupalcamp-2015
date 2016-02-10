<?php
/**
 * @file
 * cod_chile_ticket_register.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cod_chile_ticket_register_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ticket_full_name'
  $field_bases['field_ticket_full_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ticket_full_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
