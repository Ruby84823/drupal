<?php
/**
 * @file
 * workbench_settings.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function workbench_settings_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'name' => 'Submit for Review',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'name' => 'Reject',
    ),
    'needs_review:needs_rewrite' => array(
      'from_name' => 'needs_review',
      'to_name' => 'needs_rewrite',
      'name' => 'ReWrite',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
    'needs_rewrite:draft' => array(
      'from_name' => 'needs_rewrite',
      'to_name' => 'draft',
      'name' => 'Modify',
    ),
  );
  return $items;
}
