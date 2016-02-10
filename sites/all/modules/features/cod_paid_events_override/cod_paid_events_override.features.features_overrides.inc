<?php
/**
 * @file
 * cod_paid_events_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_paid_events_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.order_registrations.display|default|display_options|arguments"] = array(
    'field_ticket_order_target_id' => array(
      'id' => 'field_ticket_order_target_id',
      'table' => 'field_data_field_ticket_order',
      'field' => 'field_ticket_order_target_id',
      'default_action' => 'default',
      'default_argument_type' => 'raw',
      'default_argument_options' => array(
        'index' => 3,
      ),
      'summary' => array(
        'format' => 'default_summary',
      ),
    ),
  );

 return $overrides;
}
