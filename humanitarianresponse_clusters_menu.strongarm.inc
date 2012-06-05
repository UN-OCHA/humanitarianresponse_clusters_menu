<?php
/**
 * @file
 * humanitarianresponse_clusters_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_clusters_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_clusters';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_clusters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_clusters';
  $strongarm->value = 'main-menu:clusters';
  $export['taxonomy_menu_vocab_parent_clusters'] = $strongarm;

  return $export;
}
