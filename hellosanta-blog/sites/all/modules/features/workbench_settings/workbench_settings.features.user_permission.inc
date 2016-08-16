<?php
/**
 * @file
 * workbench_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function workbench_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'moderate content from needs_review to needs_rewrite'.
  $permissions['moderate content from needs_review to needs_rewrite'] = array(
    'name' => 'moderate content from needs_review to needs_rewrite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_rewrite to draft'.
  $permissions['moderate content from needs_rewrite to draft'] = array(
    'name' => 'moderate content from needs_rewrite to draft',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
