<?php
/**
 * @file
 * humanitarianresponse_clusters_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function humanitarianresponse_clusters_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cluster.
  $menus['menu-cluster'] = array(
    'menu_name' => 'menu-cluster',
    'title' => 'Cluster Info',
    'description' => 'Quick Access Links for a cluster',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Cluster Info');
  t('Quick Access Links for a cluster');


  return $menus;
}
