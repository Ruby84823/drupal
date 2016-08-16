<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_panels.pipelines.inc
 */

/**
 * Implements hook_default_panels_renderer_pipeline().
 */
function hello_santa_web_design_drupal_and_more_panels_default_panels_renderer_pipeline() {
  $export = array();

  $pipeline = new stdClass();
  $pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
  $pipeline->api_version = 1;
  $pipeline->name = 'standard';
  $pipeline->admin_title = '標準';
  $pipeline->admin_description = 'Renders a panel normally. This is the most common option.';
  $pipeline->weight = -100;
  $pipeline->settings = array(
    'renderers' => array(
      0 => array(
        'access' => array(),
        'renderer' => 'standard',
        'options' => array(),
      ),
    ),
  );
  $export['standard'] = $pipeline;

  return $export;
}
