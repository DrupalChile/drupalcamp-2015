<?php
/**
 * @file
 * sponsor_plans.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function sponsor_plans_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Module',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '905afb4f-502b-4c07-934c-c666f60ea09f',
    'vocabulary_machine_name' => 'sponsorship_level',
  );
  return $terms;
}
