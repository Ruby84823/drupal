<?php
/**
 * @file
 * workbench_settings.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function workbench_settings_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => '草稿箱',
      'description' => 'Work in progress',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => '送交審核',
      'description' => 'Ready for moderation',
      'weight' => 0,
    ),
    'needs_rewrite' => array(
      'name' => 'needs_rewrite',
      'label' => '需再修改',
      'description' => '當送交審核不合格時，會回到這個區域',
      'weight' => 0,
    ),
    'published' => array(
      'name' => 'published',
      'label' => '發佈',
      'description' => 'Make this version live',
      'weight' => -10,
    ),
  );
  return $items;
}
