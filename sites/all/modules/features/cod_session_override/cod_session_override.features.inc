<?php
/**
 * @file
 * cod_session_override.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cod_session_override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-session-body'])) {
    $data['node-session-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-field_accepted'])) {
    $data['node-session-field_accepted']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-field_experience'])) {
    $data['node-session-field_experience']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-session-field_experience']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-field_news_image'])) {
    $data['node-session-field_news_image']['display']['default']['weight'] = 8; /* WAS: 9 */
    $data['node-session-field_news_image']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-field_slides'])) {
    $data['node-session-field_slides']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-session-field_slides']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-field_speakers'])) {
    $data['node-session-field_speakers']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-session-field_speakers']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-og_group_ref'])) {
    $data['node-session-og_group_ref']['display']['default']['weight'] = 9; /* WAS: 10 */
    $data['node-session-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-session-og_vocabulary'])) {
    $data['node-session-og_vocabulary']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-session-og_vocabulary']['display']['default']['weight'] = 4; /* WAS: 6 */
    $data['node-session-og_vocabulary']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function cod_session_override_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:session:default:default'])) {
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['formatter'] = 'image'; /* WAS: 'hidden' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['formatter_settings']['image_link'] = ''; /* WAS: '' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['formatter_settings']['image_style'] = 'cod_sponsors'; /* WAS: '' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['formatter_settings']['text'] = 'Download [file:name]'; /* WAS: '' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['override_title'] = 0; /* WAS: '' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['override_title_heading'] = 'h2'; /* WAS: '' */
    $data['node:session:default:default']->display->content['new-7414cec9-2fb3-489f-9af6-c9bc8ea7cc61']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:session:default:default']->display->content['new-b01a3d0c-16f1-43ec-8d15-a359a49d0ef0']->configuration['formatter_settings']['link'] = 1; /* WAS: 0 */
    $data['node:session:default:default']->display->content['new-b01a3d0c-16f1-43ec-8d15-a359a49d0ef0']->configuration['override_title_heading'] = 'h2'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cod_session_override_strongarm_alter(&$data) {
  if (isset($data['node_options_schedule_item'])) {
    $data['node_options_schedule_item']->value[2] = 'panelizer'; /* WAS: '' */
  }
  if (isset($data['node_options_session'])) {
    $data['node_options_session']->value[0] = 'panelizer'; /* WAS: '' */
  }
  if (isset($data['pathauto_node_schedule_item_pattern'])) {
    $data['pathauto_node_schedule_item_pattern']->value = 'schedule/[node:title]'; /* WAS: '[node:og-group-ref:0:url:path]/schedule/[node:title]' */
  }
  if (isset($data['pathauto_node_session_pattern'])) {
    $data['pathauto_node_session_pattern']->value = 'sessions/[node:title]'; /* WAS: '[node:og-group-ref:0:url:path]/sessions/[node:title]' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cod_session_override_views_default_views_alter(&$data) {
  if (isset($data['cod_session_user_presentations'])) {
    $data['cod_session_user_presentations']->display['page_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:11:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:9:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:17:"Proposed Sessions";s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"fields";a:1:{s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h3";s:19:"element_label_colon";b:0;}}s:13:"filter_groups";a:1:{s:6:"groups";a:2:{i:1;s:3:"AND";i:2;s:3:"AND";}}s:7:"filters";a:1:{s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:7:"session";s:7:"session";}s:5:"group";i:1;}}s:4:"path";s:15:"user/%/proposed";s:4:"menu";a:6:{s:4:"type";s:3:"tab";s:5:"title";s:17:"Proposed Sessions";s:6:"weight";s:2:"-1";s:4:"name";s:9:"user-menu";s:7:"context";i:0;s:19:"context_only_inline";i:0;}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:6:"page_1";s:13:"display_title";s:14:"Page Submitted";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}'); /* WAS: '' */
  }
}
