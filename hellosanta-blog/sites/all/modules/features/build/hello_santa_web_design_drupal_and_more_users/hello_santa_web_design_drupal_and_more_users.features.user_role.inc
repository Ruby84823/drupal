<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hello_santa_web_design_drupal_and_more_users_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: 作者.
  $roles['作者'] = array(
    'name' => '作者',
    'weight' => 3,
  );

  return $roles;
}
