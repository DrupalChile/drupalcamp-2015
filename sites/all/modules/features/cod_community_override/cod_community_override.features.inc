<?php
/**
 * @file
 * cod_community_override.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function cod_community_override_views_default_views_alter(&$data) {
  if (isset($data['cod_community_attendees'])) {
    $data['cod_community_attendees']->display['default']->display_options['arguments']['entity_id']['default_argument_type'] = 'fixed'; /* WAS: 'og_context' */
  }
}
