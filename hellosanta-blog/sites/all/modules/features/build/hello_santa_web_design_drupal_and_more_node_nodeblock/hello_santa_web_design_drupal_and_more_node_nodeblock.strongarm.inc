<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_node_nodeblock.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hello_santa_web_design_drupal_and_more_node_nodeblock_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_nodeblock';
  $strongarm->value = 0;
  $export['comment_anonymous_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_nodeblock';
  $strongarm->value = 1;
  $export['comment_default_mode_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_nodeblock';
  $strongarm->value = '50';
  $export['comment_default_per_page_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_nodeblock';
  $strongarm->value = 1;
  $export['comment_form_location_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_nodeblock';
  $strongarm->value = '1';
  $export['comment_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_nodeblock';
  $strongarm->value = '1';
  $export['comment_preview_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_nodeblock';
  $strongarm->value = 1;
  $export['comment_subject_field_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__nodeblock';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nodeblock';
  $strongarm->value = '0';
  $export['language_content_type_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_nodeblock';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_nodeblock';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nodeblock';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_nodeblock';
  $strongarm->value = '1';
  $export['node_preview_nodeblock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_nodeblock';
  $strongarm->value = 0;
  $export['node_submitted_nodeblock'] = $strongarm;

  return $export;
}
