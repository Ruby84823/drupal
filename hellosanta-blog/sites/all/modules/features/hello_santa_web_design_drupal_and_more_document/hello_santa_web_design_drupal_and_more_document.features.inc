<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_document.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_document_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hello_santa_web_design_drupal_and_more_document_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hello_santa_web_design_drupal_and_more_document_node_info() {
  $items = array(
    'document' => array(
      'name' => t('內部文件'),
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
