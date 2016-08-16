<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_node_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_node_frontend_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hello_santa_web_design_drupal_and_more_node_frontend_node_info() {
  $items = array(
    'frontend' => array(
      'name' => t('前端'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
