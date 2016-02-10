<?php
/**
 * @file
 * cod_basic_page_override.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cod_basic_page_override_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '4';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page:default_selection';
  $strongarm->value = 'node:page:default:default';
  $export['panelizer_node:page:default_selection'] = $strongarm;

  return $export;
}
