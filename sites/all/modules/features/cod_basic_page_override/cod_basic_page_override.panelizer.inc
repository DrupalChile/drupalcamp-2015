<?php
/**
 * @file
 * cod_basic_page_override.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cod_basic_page_override_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'cygnus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'preface' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'left_content' => NULL,
      'top_right_content' => NULL,
      'bottom_right_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title-field';
  $display->uuid = 'f4a17264-e9cd-408d-8e7b-06b8787f9081';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b0a54177-e9a1-4085-af17-f8e33906a190';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b0a54177-e9a1-4085-af17-f8e33906a190';
    $display->content['new-b0a54177-e9a1-4085-af17-f8e33906a190'] = $pane;
    $display->panels['content'][0] = 'new-b0a54177-e9a1-4085-af17-f8e33906a190';
    $pane = new stdClass();
    $pane->pid = 'new-a098955e-06d5-4a94-9c11-de253674050c';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:upload';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_table',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a098955e-06d5-4a94-9c11-de253674050c';
    $display->content['new-a098955e-06d5-4a94-9c11-de253674050c'] = $pane;
    $display->panels['content'][1] = 'new-a098955e-06d5-4a94-9c11-de253674050c';
    $pane = new stdClass();
    $pane->pid = 'new-ba569a9c-925e-4eac-a1ac-dda5b0d6fbf0';
    $pane->panel = 'footer';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba569a9c-925e-4eac-a1ac-dda5b0d6fbf0';
    $display->content['new-ba569a9c-925e-4eac-a1ac-dda5b0d6fbf0'] = $pane;
    $display->panels['footer'][0] = 'new-ba569a9c-925e-4eac-a1ac-dda5b0d6fbf0';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-b0a54177-e9a1-4085-af17-f8e33906a190';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  return $export;
}
