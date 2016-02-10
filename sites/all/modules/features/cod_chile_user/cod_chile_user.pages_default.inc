<?php
/**
 * @file
 * cod_chile_user.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cod_chile_user_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_9e0ddf4e-8395-45bc-8641-7102ccd8e66c';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'General',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'taurus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'left_header' => NULL,
      'right_header' => NULL,
      'middle' => NULL,
      'left_content' => NULL,
      'right_content' => NULL,
      'footer' => NULL,
      'left_triptych' => NULL,
      'middle_triptych' => NULL,
      'right_triptych' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce017b75-d07c-4524-9e2a-0197217706c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-71619d88-45c8-411d-b072-6e49d906c105';
    $pane->panel = 'left_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_first';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '71619d88-45c8-411d-b072-6e49d906c105';
    $display->content['new-71619d88-45c8-411d-b072-6e49d906c105'] = $pane;
    $display->panels['left_header'][0] = 'new-71619d88-45c8-411d-b072-6e49d906c105';
    $pane = new stdClass();
    $pane->pid = 'new-e3570ff0-bb3c-4022-9ebc-68b37d00e202';
    $pane->panel = 'left_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_last';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = 'e3570ff0-bb3c-4022-9ebc-68b37d00e202';
    $display->content['new-e3570ff0-bb3c-4022-9ebc-68b37d00e202'] = $pane;
    $display->panels['left_header'][1] = 'new-e3570ff0-bb3c-4022-9ebc-68b37d00e202';
    $pane = new stdClass();
    $pane->pid = 'new-64e0de19-976e-4c00-bff1-4a7cc380f7dd';
    $pane->panel = 'left_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_job_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h3',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '64e0de19-976e-4c00-bff1-4a7cc380f7dd';
    $display->content['new-64e0de19-976e-4c00-bff1-4a7cc380f7dd'] = $pane;
    $display->panels['left_header'][2] = 'new-64e0de19-976e-4c00-bff1-4a7cc380f7dd';
    $pane = new stdClass();
    $pane->pid = 'new-cb4bc9ac-39e5-4836-9c1c-877299678cf7';
    $pane->panel = 'left_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_org';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h3',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = 'cb4bc9ac-39e5-4836-9c1c-877299678cf7';
    $display->content['new-cb4bc9ac-39e5-4836-9c1c-877299678cf7'] = $pane;
    $display->panels['left_header'][3] = 'new-cb4bc9ac-39e5-4836-9c1c-877299678cf7';
    $pane = new stdClass();
    $pane->pid = 'new-324ad6b1-5109-4c25-b6e2-6b5bd75b784f';
    $pane->panel = 'left_header';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_profile_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '324ad6b1-5109-4c25-b6e2-6b5bd75b784f';
    $display->content['new-324ad6b1-5109-4c25-b6e2-6b5bd75b784f'] = $pane;
    $display->panels['left_header'][4] = 'new-324ad6b1-5109-4c25-b6e2-6b5bd75b784f';
    $pane = new stdClass();
    $pane->pid = 'new-3fdaed4a-ebc6-43fd-92ae-f7a59609512c';
    $pane->panel = 'left_header';
    $pane->type = 'views_panes';
    $pane->subtype = 'cod_cl_users_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3fdaed4a-ebc6-43fd-92ae-f7a59609512c';
    $display->content['new-3fdaed4a-ebc6-43fd-92ae-f7a59609512c'] = $pane;
    $display->panels['left_header'][5] = 'new-3fdaed4a-ebc6-43fd-92ae-f7a59609512c';
    $pane = new stdClass();
    $pane->pid = 'new-69ad5e55-1a3e-4769-b47f-b3bb88af5188';
    $pane->panel = 'right_header';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
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
    $pane->uuid = '69ad5e55-1a3e-4769-b47f-b3bb88af5188';
    $display->content['new-69ad5e55-1a3e-4769-b47f-b3bb88af5188'] = $pane;
    $display->panels['right_header'][0] = 'new-69ad5e55-1a3e-4769-b47f-b3bb88af5188';
    $pane = new stdClass();
    $pane->pid = 'new-2f909349-1735-428b-93f9-4b3dc6610cd3';
    $pane->panel = 'right_header';
    $pane->type = 'views_panes';
    $pane->subtype = 'cod_cl_users_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2f909349-1735-428b-93f9-4b3dc6610cd3';
    $display->content['new-2f909349-1735-428b-93f9-4b3dc6610cd3'] = $pane;
    $display->panels['right_header'][1] = 'new-2f909349-1735-428b-93f9-4b3dc6610cd3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-69ad5e55-1a3e-4769-b47f-b3bb88af5188';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_9e0ddf4e-8395-45bc-8641-7102ccd8e66c'] = $handler;

  return $export;
}
