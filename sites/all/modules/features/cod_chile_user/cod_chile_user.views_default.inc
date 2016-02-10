<?php
/**
 * @file
 * cod_chile_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cod_chile_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cod_cl_users_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'COD cl users list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'speaker col-xs-10 col-xs-push-1 col-sm-6 col-md-3 col-lg-3 col-sm-push-0';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['click_sort_column'] = 'url';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_first] [field_profile_last]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_job_title] [field_profile_org]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Country */
  $handler->display->display_options['fields']['field_profile_country']['id'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['table'] = 'field_data_field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['field'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_country']['label'] = '';
  $handler->display->display_options['fields']['field_profile_country']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Picture */
  $handler->display->display_options['sorts']['picture']['id'] = 'picture';
  $handler->display->display_options['sorts']['picture']['table'] = 'users';
  $handler->display->display_options['sorts']['picture']['field'] = 'picture';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );

  /* Display: Attendees */
  $handler = $view->new_display('page', 'Attendees', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_first] [field_profile_last]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_job_title] [field_profile_org]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Country */
  $handler->display->display_options['fields']['field_profile_country']['id'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['table'] = 'field_data_field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['field'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_country']['label'] = '';
  $handler->display->display_options['fields']['field_profile_country']['element_label_colon'] = FALSE;
  /* Field: User: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-2x fa-facebook-official"></i></a>';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook_url']['type'] = 'link_plain';
  /* Field: User: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-2x fa-linkedin-square"></i></a>';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_url']['type'] = 'link_plain';
  /* Field: User: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-2x fa-twitter-square"></i></a>';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_facebook_url][field_linkedin_url][field_twitter_url]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['text'] = '<i class="fa fa-2x fa-hand-paper-o"></i>
<i class="fa fa-2x fa-microphone"></i>';
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Picture */
  $handler->display->display_options['sorts']['picture']['id'] = 'picture';
  $handler->display->display_options['sorts']['picture']['table'] = 'users';
  $handler->display->display_options['sorts']['picture']['field'] = 'picture';
  $handler->display->display_options['sorts']['picture']['order'] = 'DESC';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['path'] = 'attendees';

  /* Display: User Social Media */
  $handler = $view->new_display('panel_pane', 'User Social Media', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-4x fa-facebook-official"></i></a>';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook_url']['type'] = 'link_plain';
  /* Field: User: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-4x fa-linkedin-square"></i></a>';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_url']['type'] = 'link_plain';
  /* Field: User: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-4x fa-twitter-square"></i></a>';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter_url']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: User Sessions */
  $handler = $view->new_display('panel_pane', 'User Sessions', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'uid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );
  /* Filter criterion: Content: Status (field_accepted) */
  $handler->display->display_options['filters']['field_accepted_value']['id'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['table'] = 'field_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value']['field'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_accepted_value']['value'] = array(
    'accepted' => 'accepted',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Speakers */
  $handler = $view->new_display('page', 'Speakers', 'speakers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_first] [field_profile_last]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_job_title] [field_profile_org]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Country */
  $handler->display->display_options['fields']['field_profile_country']['id'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['table'] = 'field_data_field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['field'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_country']['label'] = '';
  $handler->display->display_options['fields']['field_profile_country']['element_label_colon'] = FALSE;
  /* Field: User: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-2x fa-facebook-official"></i></a>';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook_url']['type'] = 'link_plain';
  /* Field: User: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-2x fa-linkedin-square"></i></a>';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_url']['type'] = 'link_plain';
  /* Field: User: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-2x fa-twitter-square"></i></a>';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_facebook_url][field_linkedin_url][field_twitter_url]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['text'] = '<i class="fa fa-2x fa-hand-paper-o"></i>
<i class="fa fa-2x fa-microphone"></i>';
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'profile';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'cod_cl_users_list:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['path'] = 'speakers';

  /* Display: Featured Order */
  $handler = $view->new_display('page', 'Featured Order', 'featured_speakers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Speakers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_profile_first' => 'field_profile_first',
    'field_profile_last' => 'field_profile_last',
    'nothing' => 'nothing',
    'field_profile_job_title' => 'field_profile_job_title',
    'field_profile_org' => 'field_profile_org',
    'nothing_1' => 'nothing_1',
    'field_profile_country' => 'field_profile_country',
    'field_facebook_url' => 'field_facebook_url',
    'field_linkedin_url' => 'field_linkedin_url',
    'field_twitter_url' => 'field_twitter_url',
    'nothing_2' => 'nothing_2',
    'rid' => 'rid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_first' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_last' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_org' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_facebook_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_linkedin_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_twitter_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: User */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'users';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = 'Name';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'cod_cl_users_list:featured_speakers';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['path'] = 'admin/conference/featured-speakers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Featured Speakers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Order Speakers */
  $handler = $view->new_display('page', 'Order Speakers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_profile_first' => 'field_profile_first',
    'field_profile_last' => 'field_profile_last',
    'nothing' => 'nothing',
    'field_profile_job_title' => 'field_profile_job_title',
    'field_profile_org' => 'field_profile_org',
    'nothing_1' => 'nothing_1',
    'field_profile_country' => 'field_profile_country',
    'field_facebook_url' => 'field_facebook_url',
    'field_linkedin_url' => 'field_linkedin_url',
    'field_twitter_url' => 'field_twitter_url',
    'nothing_2' => 'nothing_2',
    'rid' => 'rid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_first' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_last' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_org' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_facebook_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_linkedin_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_twitter_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_first] [field_profile_last]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_job_title] [field_profile_org]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Country */
  $handler->display->display_options['fields']['field_profile_country']['id'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['table'] = 'field_data_field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['field'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_country']['label'] = '';
  $handler->display->display_options['fields']['field_profile_country']['element_label_colon'] = FALSE;
  /* Field: User: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-2x fa-facebook-official"></i></a>';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook_url']['type'] = 'link_plain';
  /* Field: User: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-2x fa-linkedin-square"></i></a>';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_url']['type'] = 'link_plain';
  /* Field: User: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-2x fa-twitter-square"></i></a>';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_facebook_url][field_linkedin_url][field_twitter_url]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['text'] = '<i class="fa fa-2x fa-hand-paper-o"></i>
<i class="fa fa-2x fa-microphone"></i>';
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: Draggableviews: User */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'users';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Picture */
  $handler->display->display_options['sorts']['picture']['id'] = 'picture';
  $handler->display->display_options['sorts']['picture']['table'] = 'users';
  $handler->display->display_options['sorts']['picture']['field'] = 'picture';
  $handler->display->display_options['sorts']['picture']['order'] = 'DESC';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['path'] = 'admin/speakers';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_featured');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: Facebook URL */
  $handler->display->display_options['fields']['field_facebook_url']['id'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['table'] = 'field_data_field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['field'] = 'field_facebook_url';
  $handler->display->display_options['fields']['field_facebook_url']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_url']['alter']['text'] = '<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-2x fa-facebook-official"></i></a>';
  $handler->display->display_options['fields']['field_facebook_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook_url']['type'] = 'link_plain';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_profile_first] [field_profile_last]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_profile_job_title] [field_profile_org]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Profile: Country */
  $handler->display->display_options['fields']['field_profile_country']['id'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['table'] = 'field_data_field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['field'] = 'field_profile_country';
  $handler->display->display_options['fields']['field_profile_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_country']['label'] = '';
  $handler->display->display_options['fields']['field_profile_country']['element_label_colon'] = FALSE;
  /* Field: User: LinkedIn URL */
  $handler->display->display_options['fields']['field_linkedin_url']['id'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['table'] = 'field_data_field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['field'] = 'field_linkedin_url';
  $handler->display->display_options['fields']['field_linkedin_url']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_url']['alter']['text'] = '<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-2x fa-linkedin-square"></i></a>';
  $handler->display->display_options['fields']['field_linkedin_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_url']['type'] = 'link_plain';
  /* Field: User: Twitter URL */
  $handler->display->display_options['fields']['field_twitter_url']['id'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['table'] = 'field_data_field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['field'] = 'field_twitter_url';
  $handler->display->display_options['fields']['field_twitter_url']['label'] = '';
  $handler->display->display_options['fields']['field_twitter_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter_url']['alter']['text'] = '<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-2x fa-twitter-square"></i></a>';
  $handler->display->display_options['fields']['field_twitter_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_facebook_url][field_linkedin_url][field_twitter_url]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'cod_cl_users_list:featured_speakers';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    11 => '11',
  );
  $translatables['cod_cl_users_list'] = array(
    t('Master'),
    t('Attendees'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Profile'),
    t('[field_profile_first] [field_profile_last]'),
    t('[field_profile_job_title] [field_profile_org]'),
    t('All'),
    t('<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-2x fa-facebook-official"></i></a>'),
    t('<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-2x fa-linkedin-square"></i></a>'),
    t('<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-2x fa-twitter-square"></i></a>'),
    t('[field_facebook_url][field_linkedin_url][field_twitter_url]'),
    t('<i class="fa fa-2x fa-hand-paper-o"></i>
<i class="fa fa-2x fa-microphone"></i>'),
    t('User Social Media'),
    t('<a href="[field_facebook_url-url]" target="_blank"><i class="fa fa-4x fa-facebook-official"></i></a>'),
    t('<a href="[field_linkedin_url-url]" target="_blank"><i class="fa fa-4x fa-linkedin-square"></i></a>'),
    t('<a href="[field_twitter_url-url]" target="_blank"><i class="fa fa-4x fa-twitter-square"></i></a>'),
    t('View panes'),
    t('User Sessions'),
    t('Sessions'),
    t('nodes'),
    t('Speakers'),
    t('Featured Order'),
    t('Featured Speakers'),
    t('User'),
    t('Name'),
    t('Last name'),
    t('Edit'),
    t('Order Speakers'),
    t('Block'),
  );
  $export['cod_cl_users_list'] = $view;

  return $export;
}
