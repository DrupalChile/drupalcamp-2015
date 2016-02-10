<?php
/**
 * @file
 * cod_sponsors_overrride.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cod_sponsors_overrride_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sponsor:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sponsor';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'cygnus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9062be9c-84be-4989-8a6b-1a9fbffa9111';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-78bfceda-dea1-4939-9acd-b636f839d8ee';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cod_sponsors',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78bfceda-dea1-4939-9acd-b636f839d8ee';
    $display->content['new-78bfceda-dea1-4939-9acd-b636f839d8ee'] = $pane;
    $display->panels['preface'][0] = 'new-78bfceda-dea1-4939-9acd-b636f839d8ee';
    $pane = new stdClass();
    $pane->pid = 'new-0157161d-b9d2-4613-a9cd-763c4e98b59e';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_related_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0157161d-b9d2-4613-a9cd-763c4e98b59e';
    $display->content['new-0157161d-b9d2-4613-a9cd-763c4e98b59e'] = $pane;
    $display->panels['preface'][1] = 'new-0157161d-b9d2-4613-a9cd-763c4e98b59e';
    $pane = new stdClass();
    $pane->pid = 'new-556be9b6-8e65-45a5-9ce8-20a157099eb9';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '556be9b6-8e65-45a5-9ce8-20a157099eb9';
    $display->content['new-556be9b6-8e65-45a5-9ce8-20a157099eb9'] = $pane;
    $display->panels['preface'][2] = 'new-556be9b6-8e65-45a5-9ce8-20a157099eb9';
    $pane = new stdClass();
    $pane->pid = 'new-aaba5d48-183f-42f5-aff8-46cfd90e54dd';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aaba5d48-183f-42f5-aff8-46cfd90e54dd';
    $display->content['new-aaba5d48-183f-42f5-aff8-46cfd90e54dd'] = $pane;
    $display->panels['preface'][3] = 'new-aaba5d48-183f-42f5-aff8-46cfd90e54dd';
    $pane = new stdClass();
    $pane->pid = 'new-8af8b7ce-99ed-4807-bc7f-417676ae7534';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_sponsorship_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8af8b7ce-99ed-4807-bc7f-417676ae7534';
    $display->content['new-8af8b7ce-99ed-4807-bc7f-417676ae7534'] = $pane;
    $display->panels['preface'][4] = 'new-8af8b7ce-99ed-4807-bc7f-417676ae7534';
    $pane = new stdClass();
    $pane->pid = 'new-19ac3ea1-100a-43c1-aedd-56bbc89169e6';
    $pane->panel = 'preface';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '19ac3ea1-100a-43c1-aedd-56bbc89169e6';
    $display->content['new-19ac3ea1-100a-43c1-aedd-56bbc89169e6'] = $pane;
    $display->panels['preface'][5] = 'new-19ac3ea1-100a-43c1-aedd-56bbc89169e6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:sponsor:default:default'] = $panelizer;

  return $export;
}
