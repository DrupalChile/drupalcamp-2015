<?php
/**
 * @file
 * cod_basic_page_override.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_basic_page_override_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cod_basic_page_override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-page-body'])) {
    $data['node-page-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['node-page-body']['widget']['weight'] = 1; /* WAS: -4 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cod_basic_page_override_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__page'])) {
    $data['field_bundle_settings_node__page']->value['extra_fields']['form']['language'] = array(
      'weight' => 5,
    ); /* WAS: '' */
  }
  if (isset($data['node_submitted_page'])) {
    $data['node_submitted_page']->value = 0; /* WAS: FALSE */
  }
  if (isset($data['panelizer_defaults_node_page'])) {
    $data['panelizer_defaults_node_page']->value['view modes']['default']['substitute'] = ''; /* WAS: '' */
    $data['panelizer_defaults_node_page']->value['view modes']['listing']['substitute'] = 0; /* WAS: '' */
    $data['panelizer_defaults_node_page']->value['view modes']['page_manager']['substitute'] = 0; /* WAS: '' */
    $data['panelizer_defaults_node_page']->value['view modes']['teaser']['substitute'] = 0; /* WAS: '' */
  }
  if (isset($data['pathauto_node_page_pattern'])) {
    $data['pathauto_node_page_pattern']->value = '[node:title-field]'; /* WAS: '[node:og-group-ref:0:url:path]/[node:title]' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cod_basic_page_override_views_default_views_alter(&$data) {
  if (isset($data['cod_basic_pages_admin_listing'])) {
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::flag_node_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_make_sticky_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_make_unsticky_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_promote_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_save_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpromote_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpublish_by_keyword_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::panelizer_set_status_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_send_email_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_delete_revision']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_modify_action']);
    unset($data['cod_basic_pages_admin_listing']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
}
