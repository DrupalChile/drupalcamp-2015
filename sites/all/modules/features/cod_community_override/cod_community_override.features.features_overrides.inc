<?php
/**
 * @file
 * cod_community_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_community_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.cod_community_attendees.display|default|display_options|arguments|entity_id|default_argument_type"] = 'fixed';

 return $overrides;
}
