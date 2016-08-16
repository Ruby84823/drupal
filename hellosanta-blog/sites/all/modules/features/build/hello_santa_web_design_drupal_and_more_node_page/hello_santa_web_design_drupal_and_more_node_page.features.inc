<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_node_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_node_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hello_santa_web_design_drupal_and_more_node_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('基本頁面'),
      'base' => 'node_content',
      'description' => t('使用<em>基本頁面</em>於您的靜態內容，如  \'關於我們\' 頁面。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
