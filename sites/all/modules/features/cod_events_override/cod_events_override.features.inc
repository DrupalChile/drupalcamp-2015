<?php
/**
 * @file
 * cod_events_override.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_events_override_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cod_events_override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-body'])) {
    $data['node-event-body']['display']['default']['weight'] = 2; /* WAS: 1 */
    $data['node-event-body']['required'] = 0; /* WAS: FALSE */
    $data['node-event-body']['settings']['display_summary'] = 1; /* WAS: TRUE */
    $data['node-event-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-event-body']['widget']['active'] = 1; /* WAS: '' */
  }
  if (isset($data['node-event-field_dates'])) {
    $data['node-event-field_dates']['display']['default']['settings']['show_remaining_days'] = FALSE; /* WAS: '' */
    $data['node-event-field_dates']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_event_default_session_view'])) {
    $data['node-event-field_event_default_session_view']['display']['default']['weight'] = 6; /* WAS: 10 */
    $data['node-event-field_event_default_session_view']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_event_image'])) {
    $data['node-event-field_event_image']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-event-field_event_image']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['node-event-field_event_image']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_event_tickets'])) {
    $data['node-event-field_event_tickets']['display']['default']['weight'] = 3; /* WAS: 9 */
    $data['node-event-field_event_tickets']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_ticket_attendee_listing'])) {
    $data['node-event-field_ticket_attendee_listing']['display']['default']['settings'] = array(); /* WAS: '' */
    $data['node-event-field_ticket_attendee_listing']['display']['default']['weight'] = 7; /* WAS: 12 */
    $data['node-event-field_ticket_attendee_listing']['display']['listing']['settings'] = array(); /* WAS: '' */
    $data['node-event-field_ticket_attendee_listing']['display']['teaser']['settings'] = array(); /* WAS: '' */
    $data['node-event-field_ticket_attendee_listing']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-event-field_url_title'])) {
    $data['node-event-field_url_title']['display']['default']['type'] = 'hidden'; /* WAS: 'safeword_machine_basic' */
    $data['node-event-field_url_title']['display']['default']['weight'] = 4; /* WAS: 17 */
    $data['node-event-field_url_title']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-event-field_url_title']['display']['default']['module']);
  }
}
