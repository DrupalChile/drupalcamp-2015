<?php
/**
 * @file
 * cod_chile_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_chile_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cod_chile_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_strongarm_alter().
 */
function cod_chile_user_strongarm_alter(&$data) {
  if (isset($data['user_picture_style'])) {
    $data['user_picture_style']->value = 'camp_avatar'; /* WAS: 'thumbnail' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cod_chile_user_image_default_styles() {
  $styles = array();

  // Exported image style: camp_avatar.
  $styles['camp_avatar'] = array(
    'label' => 'Camp avatar',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 512,
          'height' => 512,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: camp_avatar_thumbnail.
  $styles['camp_avatar_thumbnail'] = array(
    'label' => 'Camp avatar thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 256,
          'height' => 256,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
