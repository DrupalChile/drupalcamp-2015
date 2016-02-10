<?php
/**
 * @file
 * cod_chile_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cod_chile_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_91b1ab4e-30ae-43f9-8af2-7bc16c1df129';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
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
    $pane->pid = 'new-3bbdc0ae-392a-4fa9-8a50-9df777ee414f';
    $pane->panel = 'left_header';
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
        'image_style' => 'news',
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
    $pane->uuid = '3bbdc0ae-392a-4fa9-8a50-9df777ee414f';
    $display->content['new-3bbdc0ae-392a-4fa9-8a50-9df777ee414f'] = $pane;
    $display->panels['left_header'][0] = 'new-3bbdc0ae-392a-4fa9-8a50-9df777ee414f';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '95e8923f-d74f-463e-97ed-688992c3a5e7';
    $display->content['new-95e8923f-d74f-463e-97ed-688992c3a5e7'] = $pane;
    $display->panels['left_header'][1] = 'new-95e8923f-d74f-463e-97ed-688992c3a5e7';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3bea941c-2b46-4d68-940b-2020ad637452';
    $display->content['new-3bea941c-2b46-4d68-940b-2020ad637452'] = $pane;
    $display->panels['left_header'][2] = 'new-3bea941c-2b46-4d68-940b-2020ad637452';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3bbdc0ae-392a-4fa9-8a50-9df777ee414f';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_91b1ab4e-30ae-43f9-8af2-7bc16c1df129'] = $handler;

  return $export;
}
