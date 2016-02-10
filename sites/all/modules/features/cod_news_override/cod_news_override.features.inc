<?php
/**
 * @file
 * cod_news_override.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_news_override_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function cod_news_override_field_default_field_bases_alter(&$data) {
  if (isset($data['field_news_tags'])) {
    $data['field_news_tags']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    unset($data['field_news_tags']['foreign keys']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function cod_news_override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-news-body'])) {
    $data['node-news-body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-news-field_news_tags'])) {
    $data['node-news-field_news_tags']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-news-og_group_ref'])) {
    $data['node-news-og_group_ref']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function cod_news_override_strongarm_alter(&$data) {
  if (isset($data['pathauto_node_news_pattern'])) {
    $data['pathauto_node_news_pattern']->value = 'news/[node:title-field]'; /* WAS: '[node:og-group-ref:0:url:path]/news/[node:title]' */
  }
}
