<?php
/**
 * @file
 * photo_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function photo_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:photo-galleries
  $menu_links['main-menu:photo-galleries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photo-galleries',
    'router_path' => 'photo-galleries',
    'link_title' => 'Photo Galleries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Photo Galleries');


  return $menu_links;
}
