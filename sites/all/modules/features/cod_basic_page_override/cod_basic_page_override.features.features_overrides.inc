<?php
/**
 * @file
 * cod_basic_page_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_basic_page_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-page-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-page-body.widget|weight"] = 1;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__page.value|extra_fields|form|language"] = array(
    'weight' => 5,
  );
  $overrides["variable.node_submitted_page.value"] = 0;
  $overrides["variable.panelizer_defaults_node_page.value|view modes|default|substitute"] = '';
  $overrides["variable.panelizer_defaults_node_page.value|view modes|listing|substitute"] = 0;
  $overrides["variable.panelizer_defaults_node_page.value|view modes|page_manager|substitute"] = 0;
  $overrides["variable.panelizer_defaults_node_page.value|view modes|teaser|substitute"] = 0;
  $overrides["variable.pathauto_node_page_pattern.value"] = '[node:title-field]';

  // Exported overrides for: views_view
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::flag_node_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_make_sticky_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_make_unsticky_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_promote_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_save_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpromote_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpublish_by_keyword_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::panelizer_set_status_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_send_email_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_delete_revision"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_modify_action"]["DELETED"] = TRUE;
  $overrides["views_view.cod_basic_pages_admin_listing.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;

 return $overrides;
}
