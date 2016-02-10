<?php
/**
 * @file
 * cod_events_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_events_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-body.display|default|weight"] = 2;
  $overrides["field_instance.node-event-body.required"] = 0;
  $overrides["field_instance.node-event-body.settings|display_summary"] = 1;
  $overrides["field_instance.node-event-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-body.widget|active"] = 1;
  $overrides["field_instance.node-event-field_dates.display|default|settings|show_remaining_days"] = FALSE;
  $overrides["field_instance.node-event-field_dates.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_event_default_session_view.display|default|weight"] = 6;
  $overrides["field_instance.node-event-field_event_default_session_view.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_event_image.display|default|label"] = 'hidden';
  $overrides["field_instance.node-event-field_event_image.display|default|weight"] = 1;
  $overrides["field_instance.node-event-field_event_image.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_event_tickets.display|default|weight"] = 3;
  $overrides["field_instance.node-event-field_event_tickets.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_ticket_attendee_listing.display|default|settings"] = array();
  $overrides["field_instance.node-event-field_ticket_attendee_listing.display|default|weight"] = 7;
  $overrides["field_instance.node-event-field_ticket_attendee_listing.display|listing|settings"] = array();
  $overrides["field_instance.node-event-field_ticket_attendee_listing.display|teaser|settings"] = array();
  $overrides["field_instance.node-event-field_ticket_attendee_listing.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-event-field_url_title.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-event-field_url_title.display|default|type"] = 'hidden';
  $overrides["field_instance.node-event-field_url_title.display|default|weight"] = 4;
  $overrides["field_instance.node-event-field_url_title.settings|entity_translation_sync"] = FALSE;

 return $overrides;
}
