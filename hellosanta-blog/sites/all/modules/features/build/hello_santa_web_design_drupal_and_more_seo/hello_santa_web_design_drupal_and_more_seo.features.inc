<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
