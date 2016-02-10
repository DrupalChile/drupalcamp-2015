<?php
/**
 * @file
 * cod_chile_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_chile_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cod_chile_news_image_default_styles() {
  $styles = array();

  // Exported image style: news.
  $styles['news'] = array(
    'label' => 'News',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 540,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
