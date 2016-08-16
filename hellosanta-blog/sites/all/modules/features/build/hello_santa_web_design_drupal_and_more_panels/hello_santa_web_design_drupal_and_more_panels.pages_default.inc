<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function hello_santa_web_design_drupal_and_more_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'myworkbench_panel_context_sample';
  $handler->task = 'myworkbench';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 100;
  $handler->conf = array(
    'title' => 'Sample Workbench',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '我的工作室';
  $display->uuid = '9cab63a3-4ce8-4a63-b82b-374a59b5e856';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30eaa0a3-1766-4e0f-ba23-1414ff16e4f5';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'views-workbench_current_user-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '30eaa0a3-1766-4e0f-ba23-1414ff16e4f5';
    $display->content['new-30eaa0a3-1766-4e0f-ba23-1414ff16e4f5'] = $pane;
    $display->panels['left_above'][0] = 'new-30eaa0a3-1766-4e0f-ba23-1414ff16e4f5';
    $pane = new stdClass();
    $pane->pid = 'new-b3c9a4d6-c1ac-4a29-999d-69a7067d168a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-_workbench_-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3c9a4d6-c1ac-4a29-999d-69a7067d168a';
    $display->content['new-b3c9a4d6-c1ac-4a29-999d-69a7067d168a'] = $pane;
    $display->panels['middle'][0] = 'new-b3c9a4d6-c1ac-4a29-999d-69a7067d168a';
    $pane = new stdClass();
    $pane->pid = 'new-af743914-4f23-4ecd-a304-c4cfe3ec0820';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-1a5d0af94ffe6482d7406fec1412aaba';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'af743914-4f23-4ecd-a304-c4cfe3ec0820';
    $display->content['new-af743914-4f23-4ecd-a304-c4cfe3ec0820'] = $pane;
    $display->panels['middle'][1] = 'new-af743914-4f23-4ecd-a304-c4cfe3ec0820';
    $pane = new stdClass();
    $pane->pid = 'new-18f45c4f-523a-4be3-9b0e-718349e8e6b7';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-60b821409662513c10c1cf4b5a6be961';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '18f45c4f-523a-4be3-9b0e-718349e8e6b7';
    $display->content['new-18f45c4f-523a-4be3-9b0e-718349e8e6b7'] = $pane;
    $display->panels['middle'][2] = 'new-18f45c4f-523a-4be3-9b0e-718349e8e6b7';
    $pane = new stdClass();
    $pane->pid = 'new-f73712bb-f809-475a-8612-884ed7923d31';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-workbench_other-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f73712bb-f809-475a-8612-884ed7923d31';
    $display->content['new-f73712bb-f809-475a-8612-884ed7923d31'] = $pane;
    $display->panels['middle'][3] = 'new-f73712bb-f809-475a-8612-884ed7923d31';
    $pane = new stdClass();
    $pane->pid = 'new-06d59e03-9474-4bb6-8acb-8e9758e9c977';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-workbench_about_us-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06d59e03-9474-4bb6-8acb-8e9758e9c977';
    $display->content['new-06d59e03-9474-4bb6-8acb-8e9758e9c977'] = $pane;
    $display->panels['right_above'][0] = 'new-06d59e03-9474-4bb6-8acb-8e9758e9c977';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['myworkbench_panel_context_sample'] = $handler;

  return $export;
}
