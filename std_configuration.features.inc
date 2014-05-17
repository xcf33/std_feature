<?php
/**
 * @file
 * std_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function std_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function std_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function std_configuration_node_info() {
  $items = array(
    'web_page' => array(
      'name' => t('Web Page'),
      'base' => 'node_content',
      'description' => t('A single web page that is being tested'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
