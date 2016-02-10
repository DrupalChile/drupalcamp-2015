<?php
/**
 * @file
 * cod_sponsors_overrride.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_sponsors_overrride_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function cod_sponsors_overrride_field_default_field_bases_alter(&$data) {
  if (isset($data['field_sponsor_body'])) {
    $data['field_sponsor_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['field_sponsor_body']['translatable'] = 1; /* WAS: 0 */
    unset($data['field_sponsor_body']['foreign keys']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cod_sponsors_overrride_field_default_field_instances_alter(&$data) {
  if (isset($data['node-sponsor-field_sponsor_body'])) {
    $data['node-sponsor-field_sponsor_body']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_body']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-sponsor-field_sponsor_body']['display']['default']['weight'] = 3; /* WAS: 4 */
    $data['node-sponsor-field_sponsor_body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-sponsor-field_sponsor_body']['display']['default']['module']);
  }
  if (isset($data['node-sponsor-field_sponsor_logo'])) {
    $data['node-sponsor-field_sponsor_logo']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_logo']['display']['default']['type'] = 'hidden'; /* WAS: 'image' */
    $data['node-sponsor-field_sponsor_logo']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-sponsor-field_sponsor_logo']['display']['default']['module']);
    unset($data['node-sponsor-field_sponsor_logo']['display']['default']['settings']['image_link']);
    unset($data['node-sponsor-field_sponsor_logo']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-sponsor-field_sponsor_related_attendees'])) {
    $data['node-sponsor-field_sponsor_related_attendees']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['node-sponsor-field_sponsor_related_attendees']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-sponsor-field_sponsor_related_attendees']['display']['default']['module']);
    unset($data['node-sponsor-field_sponsor_related_attendees']['display']['default']['settings']['link']);
  }
  if (isset($data['node-sponsor-field_sponsor_sponsorship_level'])) {
    $data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['type'] = 'hidden'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['weight'] = 4; /* WAS: 5 */
    $data['node-sponsor-field_sponsor_sponsorship_level']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-sponsor-field_sponsor_sponsorship_level']['widget']['settings']['apply_chosen'] = ''; /* WAS: '' */
    unset($data['node-sponsor-field_sponsor_sponsorship_level']['display']['default']['module']);
  }
  if (isset($data['node-sponsor-field_sponsor_url'])) {
    $data['node-sponsor-field_sponsor_url']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-sponsor-field_sponsor_url']['display']['default']['type'] = 'hidden'; /* WAS: 'link_default' */
    $data['node-sponsor-field_sponsor_url']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-sponsor-field_sponsor_url']['display']['default']['module']);
  }
  if (isset($data['node-sponsor-og_group_ref'])) {
    $data['node-sponsor-og_group_ref']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['node-sponsor-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['node-sponsor-og_group_ref']['display']['default']['module']);
    unset($data['node-sponsor-og_group_ref']['display']['default']['settings']['link']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cod_sponsors_overrride_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__sponsor'])) {
    $data['field_bundle_settings_node__sponsor']->value['extra_fields']['display']['sharethis'] = array(
      'default' => array(
        'weight' => 5,
        'visible' => FALSE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['full'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['listing'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__sponsor']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['pathauto_node_sponsor_pattern'])) {
    $data['pathauto_node_sponsor_pattern']->value = 'sponsors/[node:title]'; /* WAS: '[node:og-group-ref:0:url:path]/sponsors/[node:title]' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cod_sponsors_overrride_views_default_views_alter(&$data) {
  if (isset($data['cod_sponsors'])) {
    $data['cod_sponsors']->display['block']->display_options['defaults']['row_options'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['row_plugin'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['style_options'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['defaults']['style_plugin'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['fields']['field_sponsor_sponsorship_level'] = array(
      'id' => 'field_sponsor_sponsorship_level',
      'table' => 'field_data_field_sponsor_sponsorship_level',
      'field' => 'field_sponsor_sponsorship_level',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
      'type' => 'taxonomy_term_reference_plain',
    ); /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['fields']['title']['element_label_colon'] = FALSE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['fields']['title']['exclude'] = TRUE; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['row_plugin'] = 'fields'; /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['style_options'] = array(
      'grouping' => array(
        0 => array(
          'field' => 'field_sponsor_sponsorship_level',
          'rendered' => 1,
          'rendered_strip' => 0,
        ),
      ),
    ); /* WAS: '' */
    $data['cod_sponsors']->display['block']->display_options['style_plugin'] = 'list'; /* WAS: '' */
    unset($data['cod_sponsors']->display['default']->display_options['access']['perm']);
  }
}
