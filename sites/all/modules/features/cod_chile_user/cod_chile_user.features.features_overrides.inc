<?php
/**
 * @file
 * cod_chile_user.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_chile_user_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.user_picture_style.value"] = 'camp_avatar';

 return $overrides;
}
