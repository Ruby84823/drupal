<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
}
