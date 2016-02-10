<?php
/**
 * @file
 * cod_news_override.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cod_news_override_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_news';
  $strongarm->value = '4';
  $export['language_content_type_news'] = $strongarm;

  return $export;
}
