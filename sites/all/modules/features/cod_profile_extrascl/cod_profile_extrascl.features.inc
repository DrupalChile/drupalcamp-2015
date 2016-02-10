<?php
/**
 * @file
 * cod_profile_extrascl.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cod_profile_extrascl_field_default_field_instances_alter(&$data) {
  if (isset($data['user-user-field_profile_location'])) {
    $data['user-user-field_profile_location']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['user-user-field_profile_location']['widget']['settings']['format_handlers']['address-hide-postal-code'] = 'address-hide-postal-code'; /* WAS: 0 */
    $data['user-user-field_profile_location']['widget']['settings']['format_handlers']['address-hide-street'] = 'address-hide-street'; /* WAS: 0 */
    $data['user-user-field_profile_location']['widget']['settings']['format_handlers']['address-optional'] = 'address-optional'; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function cod_profile_extrascl_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true }
  }');
  return $items;
}
