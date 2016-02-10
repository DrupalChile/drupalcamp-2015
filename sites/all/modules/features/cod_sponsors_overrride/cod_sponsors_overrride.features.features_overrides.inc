<?php
/**
 * @file
 * cod_sponsors_overrride.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_sponsors_overrride_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_sponsor_body.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_sponsor_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_sponsor_body.translatable"] = 1;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-sponsor-field_sponsor_body.display|default|label"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_body.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_body.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_body.display|default|weight"] = 3;
  $overrides["field_instance.node-sponsor-field_sponsor_body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|label"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_logo.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_logo.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-sponsor-field_sponsor_related_attendees.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_related_attendees.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_related_attendees.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_related_attendees.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|label"] = 'inline';
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.display|default|weight"] = 4;
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-sponsor-field_sponsor_sponsorship_level.widget|settings|apply_chosen"] = '';
  $overrides["field_instance.node-sponsor-field_sponsor_url.display|default|label"] = 'inline';
  $overrides["field_instance.node-sponsor-field_sponsor_url.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-field_sponsor_url.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-field_sponsor_url.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-sponsor-og_group_ref.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-og_group_ref.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-sponsor-og_group_ref.display|default|type"] = 'hidden';
  $overrides["field_instance.node-sponsor-og_group_ref.settings|entity_translation_sync"] = FALSE;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__sponsor.value|extra_fields|display|sharethis"] = array(
    'default' => array(
      'weight' => 5,
      'visible' => FALSE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|full"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|listing"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__sponsor.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.pathauto_node_sponsor_pattern.value"] = 'sponsors/[node:title]';

  // Exported overrides for: views_view
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|row_options"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|row_plugin"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|style_options"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|defaults|style_plugin"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|fields|field_sponsor_sponsorship_level"] = array(
    'id' => 'field_sponsor_sponsorship_level',
    'table' => 'field_data_field_sponsor_sponsorship_level',
    'field' => 'field_sponsor_sponsorship_level',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'type' => 'taxonomy_term_reference_plain',
  );
  $overrides["views_view.cod_sponsors.display|block|display_options|fields|title|element_label_colon"] = FALSE;
  $overrides["views_view.cod_sponsors.display|block|display_options|fields|title|exclude"] = TRUE;
  $overrides["views_view.cod_sponsors.display|block|display_options|row_plugin"] = 'fields';
  $overrides["views_view.cod_sponsors.display|block|display_options|style_options"] = array(
    'grouping' => array(
      0 => array(
        'field' => 'field_sponsor_sponsorship_level',
        'rendered' => 1,
        'rendered_strip' => 0,
      ),
    ),
  );
  $overrides["views_view.cod_sponsors.display|block|display_options|style_plugin"] = 'list';
  $overrides["views_view.cod_sponsors.display|default|display_options|access|perm"]["DELETED"] = TRUE;

 return $overrides;
}
