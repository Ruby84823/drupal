<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_node_book.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_node_book_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hello_santa_web_design_drupal_and_more_node_book_node_info() {
  $items = array(
    'book' => array(
      'name' => t('手冊頁面'),
      'base' => 'node_content',
      'description' => t('<em>手冊</em>內建階層式的導覽選單，適合用來製作手冊或指引。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
