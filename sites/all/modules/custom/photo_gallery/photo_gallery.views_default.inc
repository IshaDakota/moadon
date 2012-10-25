<?php
/**
 * @file
 * photo_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function photo_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Galleries';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery Category */
  $handler->display->display_options['fields']['field_gallery_category']['id'] = 'field_gallery_category';
  $handler->display->display_options['fields']['field_gallery_category']['table'] = 'field_data_field_gallery_category';
  $handler->display->display_options['fields']['field_gallery_category']['field'] = 'field_gallery_category';
  $handler->display->display_options['fields']['field_gallery_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_gallery_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_gallery_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gallery_category']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_gallery_photos']['id'] = 'field_gallery_photos';
  $handler->display->display_options['fields']['field_gallery_photos']['table'] = 'field_data_field_gallery_photos';
  $handler->display->display_options['fields']['field_gallery_photos']['field'] = 'field_gallery_photos';
  $handler->display->display_options['fields']['field_gallery_photos']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photos']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_gallery_photos']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_gallery_photos']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'See more photos from this gallery >>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Gallery Category (field_gallery_category) */
  $handler->display->display_options['filters']['field_gallery_category_tid']['id'] = 'field_gallery_category_tid';
  $handler->display->display_options['filters']['field_gallery_category_tid']['table'] = 'field_data_field_gallery_category';
  $handler->display->display_options['filters']['field_gallery_category_tid']['field'] = 'field_gallery_category_tid';
  $handler->display->display_options['filters']['field_gallery_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gallery_category_tid']['expose']['operator_id'] = 'field_gallery_category_tid_op';
  $handler->display->display_options['filters']['field_gallery_category_tid']['expose']['label'] = 'View photos from:';
  $handler->display->display_options['filters']['field_gallery_category_tid']['expose']['operator'] = 'field_gallery_category_tid_op';
  $handler->display->display_options['filters']['field_gallery_category_tid']['expose']['identifier'] = 'field_gallery_category_tid';
  $handler->display->display_options['filters']['field_gallery_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_gallery_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gallery_category_tid']['vocabulary'] = 'gallery_categories';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'photo-galleries';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Photo Galleries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['photo_galleries'] = $view;

  return $export;
}
