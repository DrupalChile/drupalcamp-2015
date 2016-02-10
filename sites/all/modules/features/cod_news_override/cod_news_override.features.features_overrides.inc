<?php
/**
 * @file
 * cod_news_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cod_news_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_news_tags.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_news_tags.settings|entity_translation_sync"] = FALSE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-news-body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-news-field_news_tags.settings|entity_translation_sync"] = FALSE;
  $overrides["field_instance.node-news-og_group_ref.settings|entity_translation_sync"] = FALSE;

  // Exported overrides for: variable
  $overrides["variable.pathauto_node_news_pattern.value"] = 'news/[node:title-field]';

 return $overrides;
}
