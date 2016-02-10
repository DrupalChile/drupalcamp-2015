<?php
/**
 * @file
 * menu_base_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_base_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_asistentes:<front>
  $menu_links['main-menu_asistentes:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'ASISTENTES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_asistentes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_auspiciadores:sponsors
  $menu_links['main-menu_auspiciadores:sponsors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'AUSPICIADORES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_auspiciadores:sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_contacto:contact
  $menu_links['main-menu_contacto:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'CONTACTO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contacto:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_inicio:<front>
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INICIO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_lugar:venue
  $menu_links['main-menu_lugar:venue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'venue',
    'router_path' => 'venue',
    'link_title' => 'LUGAR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_lugar:venue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_noticias:news
  $menu_links['main-menu_noticias:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'NOTICIAS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_noticias:news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_programa:schedule
  $menu_links['main-menu_programa:schedule'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'PROGRAMA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_programa:schedule',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_registro:node/1/registration
  $menu_links['main-menu_registro:node/1/registration'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1/registration',
    'router_path' => 'node/%/registration',
    'link_title' => 'REGISTRO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_registro:node/1/registration',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ASISTENTES');
  t('AUSPICIADORES');
  t('CONTACTO');
  t('INICIO');
  t('LUGAR');
  t('NOTICIAS');
  t('PROGRAMA');
  t('REGISTRO');

  return $menu_links;
}
