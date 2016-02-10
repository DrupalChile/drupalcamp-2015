<?php
/**
 * @file
 * cod_events_override.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cod_events_override_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event';
  $strongarm->value = '4';
  $export['language_content_type_event'] = $strongarm;

  return $export;
}
