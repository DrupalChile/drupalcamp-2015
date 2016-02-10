<?php
/**
 * @file
 * cod_paid_events_override.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function cod_paid_events_override_views_default_views_alter(&$data) {
  if (isset($data['order_registrations'])) {
    $data['order_registrations']->display['default']->display_options['arguments'] = array(
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
    ); /* WAS: '' */
  }
}
