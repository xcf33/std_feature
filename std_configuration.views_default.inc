<?php
/**
 * @file
 * std_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function std_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'regression_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regression Test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regression Test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_image_before' => 'field_image_before',
    'field_image_after' => 'field_image_after',
    'field_image_diff' => 'field_image_diff',
    'field_difference' => 'field_difference',
  );
  $handler->display->display_options['style_options']['default'] = 'field_difference';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_before' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_after' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_diff' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_difference' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<ul class="action-links">
<li><a href="/admin/structure/taxonomy/set/add">Add a new set</a></li>
<li><a href="/admin/structure/taxonomy/set">Manage sets</a></li>
</ul>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Before Image */
  $handler->display->display_options['fields']['field_image_before']['id'] = 'field_image_before';
  $handler->display->display_options['fields']['field_image_before']['table'] = 'field_data_field_image_before';
  $handler->display->display_options['fields']['field_image_before']['field'] = 'field_image_before';
  $handler->display->display_options['fields']['field_image_before']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_before']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image_before']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: After Image */
  $handler->display->display_options['fields']['field_image_after']['id'] = 'field_image_after';
  $handler->display->display_options['fields']['field_image_after']['table'] = 'field_data_field_image_after';
  $handler->display->display_options['fields']['field_image_after']['field'] = 'field_image_after';
  $handler->display->display_options['fields']['field_image_after']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_after']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image_after']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Diff Image */
  $handler->display->display_options['fields']['field_image_diff']['id'] = 'field_image_diff';
  $handler->display->display_options['fields']['field_image_diff']['table'] = 'field_data_field_image_diff';
  $handler->display->display_options['fields']['field_image_diff']['field'] = 'field_image_diff';
  $handler->display->display_options['fields']['field_image_diff']['label'] = 'Difference';
  $handler->display->display_options['fields']['field_image_diff']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_diff']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image_diff']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Difference */
  $handler->display->display_options['fields']['field_difference']['id'] = 'field_difference';
  $handler->display->display_options['fields']['field_difference']['table'] = 'field_data_field_difference';
  $handler->display->display_options['fields']['field_difference']['field'] = 'field_difference';
  $handler->display->display_options['fields']['field_difference']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
    'web_page' => 'web_page',
  );
  /* Filter criterion: Content: Set (field_set_ref) */
  $handler->display->display_options['filters']['field_set_ref_tid']['id'] = 'field_set_ref_tid';
  $handler->display->display_options['filters']['field_set_ref_tid']['table'] = 'field_data_field_set_ref';
  $handler->display->display_options['filters']['field_set_ref_tid']['field'] = 'field_set_ref_tid';
  $handler->display->display_options['filters']['field_set_ref_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_set_ref_tid']['expose']['operator_id'] = 'field_set_ref_tid_op';
  $handler->display->display_options['filters']['field_set_ref_tid']['expose']['label'] = 'Set';
  $handler->display->display_options['filters']['field_set_ref_tid']['expose']['operator'] = 'field_set_ref_tid_op';
  $handler->display->display_options['filters']['field_set_ref_tid']['expose']['identifier'] = 'field_set_ref_tid';
  $handler->display->display_options['filters']['field_set_ref_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_set_ref_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_set_ref_tid']['vocabulary'] = 'set';

  /* Display: Regression Test */
  $handler = $view->new_display('page', 'Regression Test', 'page');
  $handler->display->display_options['path'] = 'regression-test';
  $export['regression_test'] = $view;

  return $export;
}
