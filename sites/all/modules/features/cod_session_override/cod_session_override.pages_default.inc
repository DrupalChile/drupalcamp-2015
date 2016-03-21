<?php
/**
 * @file
 * cod_session_override.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cod_session_override_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__session';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'Session',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'session',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'session' => 'session',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'orion';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'banner' => NULL,
      'left_header' => NULL,
      'right_header' => NULL,
      'preface' => NULL,
      'left_content' => NULL,
      'right_content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '012dc639-8a47-43a5-8c71-f5958be016d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca3ae260-0bed-4d99-8a84-3c85c59dce5e';
    $pane->panel = 'banner';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca3ae260-0bed-4d99-8a84-3c85c59dce5e';
    $display->content['new-ca3ae260-0bed-4d99-8a84-3c85c59dce5e'] = $pane;
    $display->panels['banner'][0] = 'new-ca3ae260-0bed-4d99-8a84-3c85c59dce5e';
    $pane = new stdClass();
    $pane->pid = 'new-95e8923f-d74f-463e-97ed-688992c3a5e7';
    $pane->panel = 'left_header';
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
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '95e8923f-d74f-463e-97ed-688992c3a5e7';
    $display->content['new-95e8923f-d74f-463e-97ed-688992c3a5e7'] = $pane;
    $display->panels['left_header'][0] = 'new-95e8923f-d74f-463e-97ed-688992c3a5e7';
    $pane = new stdClass();
    $pane->pid = 'new-3bea941c-2b46-4d68-940b-2020ad637452';
    $pane->panel = 'left_header';
    $pane->type = 'block';
    $pane->subtype = 'disqus-disqus_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3bea941c-2b46-4d68-940b-2020ad637452';
    $display->content['new-3bea941c-2b46-4d68-940b-2020ad637452'] = $pane;
    $display->panels['left_header'][1] = 'new-3bea941c-2b46-4d68-940b-2020ad637452';
    $pane = new stdClass();
    $pane->pid = 'new-a4db42b1-dd57-4696-9ff2-078b4f17a363';
    $pane->panel = 'right_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'a4db42b1-dd57-4696-9ff2-078b4f17a363';
    $display->content['new-a4db42b1-dd57-4696-9ff2-078b4f17a363'] = $pane;
    $display->panels['right_header'][0] = 'new-a4db42b1-dd57-4696-9ff2-078b4f17a363';
    $pane = new stdClass();
    $pane->pid = 'new-35d45e7e-e709-4b7b-9d8b-1d43a78ce3d3';
    $pane->panel = 'right_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_speakers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'links' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '35d45e7e-e709-4b7b-9d8b-1d43a78ce3d3';
    $display->content['new-35d45e7e-e709-4b7b-9d8b-1d43a78ce3d3'] = $pane;
    $display->panels['right_header'][1] = 'new-35d45e7e-e709-4b7b-9d8b-1d43a78ce3d3';
    $pane = new stdClass();
    $pane->pid = 'new-61e80c64-25a4-4892-918f-e8954db8adfd';
    $pane->panel = 'right_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slides';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_table',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '61e80c64-25a4-4892-918f-e8954db8adfd';
    $display->content['new-61e80c64-25a4-4892-918f-e8954db8adfd'] = $pane;
    $display->panels['right_header'][2] = 'new-61e80c64-25a4-4892-918f-e8954db8adfd';
    $pane = new stdClass();
    $pane->pid = 'new-c6488fbb-338b-451b-8a86-ed68538b7c40';
    $pane->panel = 'right_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_experience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'i18n_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c6488fbb-338b-451b-8a86-ed68538b7c40';
    $display->content['new-c6488fbb-338b-451b-8a86-ed68538b7c40'] = $pane;
    $display->panels['right_header'][3] = 'new-c6488fbb-338b-451b-8a86-ed68538b7c40';
    $pane = new stdClass();
    $pane->pid = 'new-3775f273-55e0-4ecf-97ae-8acce32ba330';
    $pane->panel = 'right_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_vocabulary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
        'view_mode' => 'default',
        'links' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3775f273-55e0-4ecf-97ae-8acce32ba330';
    $display->content['new-3775f273-55e0-4ecf-97ae-8acce32ba330'] = $pane;
    $display->panels['right_header'][4] = 'new-3775f273-55e0-4ecf-97ae-8acce32ba330';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__session'] = $handler;

  return $export;
}
