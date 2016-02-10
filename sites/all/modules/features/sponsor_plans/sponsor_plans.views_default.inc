<?php
/**
 * @file
 * sponsor_plans.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sponsor_plans_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors_plans';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsor plans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsor plans';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsorship_level']['id'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['field'] = 'field_sponsorship_level';
  /* Field: Content: Space available */
  $handler->display->display_options['fields']['field_space_available']['id'] = 'field_space_available';
  $handler->display->display_options['fields']['field_space_available']['table'] = 'field_data_field_space_available';
  $handler->display->display_options['fields']['field_space_available']['field'] = 'field_space_available';
  $handler->display->display_options['fields']['field_space_available']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: US price */
  $handler->display->display_options['fields']['field_us_price']['id'] = 'field_us_price';
  $handler->display->display_options['fields']['field_us_price']['table'] = 'field_data_field_us_price';
  $handler->display->display_options['fields']['field_us_price']['field'] = 'field_us_price';
  $handler->display->display_options['fields']['field_us_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_us_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Footer web */
  $handler->display->display_options['fields']['field_footer_web']['id'] = 'field_footer_web';
  $handler->display->display_options['fields']['field_footer_web']['table'] = 'field_data_field_footer_web';
  $handler->display->display_options['fields']['field_footer_web']['field'] = 'field_footer_web';
  /* Field: Content: Sponsors page */
  $handler->display->display_options['fields']['field_sponsors_page']['id'] = 'field_sponsors_page';
  $handler->display->display_options['fields']['field_sponsors_page']['table'] = 'field_data_field_sponsors_page';
  $handler->display->display_options['fields']['field_sponsors_page']['field'] = 'field_sponsors_page';
  /* Field: Content: Five minutes open session */
  $handler->display->display_options['fields']['field_five_minutes_open_session']['id'] = 'field_five_minutes_open_session';
  $handler->display->display_options['fields']['field_five_minutes_open_session']['table'] = 'field_data_field_five_minutes_open_session';
  $handler->display->display_options['fields']['field_five_minutes_open_session']['field'] = 'field_five_minutes_open_session';
  /* Field: Content: Main speaker - Start and finish of event */
  $handler->display->display_options['fields']['field_main_speaker_start_and_fin']['id'] = 'field_main_speaker_start_and_fin';
  $handler->display->display_options['fields']['field_main_speaker_start_and_fin']['table'] = 'field_data_field_main_speaker_start_and_fin';
  $handler->display->display_options['fields']['field_main_speaker_start_and_fin']['field'] = 'field_main_speaker_start_and_fin';
  /* Field: Content: Booth */
  $handler->display->display_options['fields']['field_booth']['id'] = 'field_booth';
  $handler->display->display_options['fields']['field_booth']['table'] = 'field_data_field_booth';
  $handler->display->display_options['fields']['field_booth']['field'] = 'field_booth';
  /* Field: Content: Social networks mention */
  $handler->display->display_options['fields']['field_social_networks_mention']['id'] = 'field_social_networks_mention';
  $handler->display->display_options['fields']['field_social_networks_mention']['table'] = 'field_data_field_social_networks_mention';
  $handler->display->display_options['fields']['field_social_networks_mention']['field'] = 'field_social_networks_mention';
  /* Field: Content: Printed Signals */
  $handler->display->display_options['fields']['field_printed_signals']['id'] = 'field_printed_signals';
  $handler->display->display_options['fields']['field_printed_signals']['table'] = 'field_data_field_printed_signals';
  $handler->display->display_options['fields']['field_printed_signals']['field'] = 'field_printed_signals';
  /* Field: Content: Logo on T-shirt */
  $handler->display->display_options['fields']['field_logo_on_t_shirt']['id'] = 'field_logo_on_t_shirt';
  $handler->display->display_options['fields']['field_logo_on_t_shirt']['table'] = 'field_data_field_logo_on_t_shirt';
  $handler->display->display_options['fields']['field_logo_on_t_shirt']['field'] = 'field_logo_on_t_shirt';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsors_plan' => 'sponsors_plan',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sponsors-plans';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponors plans';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['sponsors_plans'] = $view;

  return $export;
}
