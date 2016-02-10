<?php
/**
 * @file
 * cod_profile_extrascl.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_profile_extrascl_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_profile_location.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.user-user-field_profile_location.widget|settings|format_handlers|address-hide-postal-code"] = 'address-hide-postal-code';
  $overrides["field_instance.user-user-field_profile_location.widget|settings|format_handlers|address-hide-street"] = 'address-hide-street';
  $overrides["field_instance.user-user-field_profile_location.widget|settings|format_handlers|address-optional"] = 'address-optional';

 return $overrides;
}
