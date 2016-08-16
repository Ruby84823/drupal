<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hello_santa_web_design_drupal_and_more_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access back_to_top settings'.
  $permissions['access back_to_top settings'] = array(
    'name' => 'access back_to_top settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'back_to_top',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in type_class'.
  $permissions['add terms in type_class'] = array(
    'name' => 'add terms in type_class',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer addthis'.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced addthis'.
  $permissions['administer advanced addthis'] = array(
    'name' => 'administer advanced addthis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer disqus'.
  $permissions['administer disqus'] = array(
    'name' => 'administer disqus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer path breadcrumbs'.
  $permissions['administer path breadcrumbs'] = array(
    'name' => 'administer path breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path_breadcrumbs_ui',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer phpmailer settings'.
  $permissions['administer phpmailer settings'] = array(
    'name' => 'administer phpmailer settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'phpmailer',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'picture',
  );

  // Exported permission: 'administer realname'.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'realname',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer redirects 404'.
  $permissions['administer redirects 404'] = array(
    'name' => 'administer redirects 404',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect_404',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer scroll to top'.
  $permissions['administer scroll to top'] = array(
    'name' => 'administer scroll to top',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scroll_to_top',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer site verify'.
  $permissions['administer site verify'] = array(
    'name' => 'administer site verify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'site_verify',
  );

  // Exported permission: 'administer slick'.
  $permissions['administer slick'] = array(
    'name' => 'administer slick',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'slick_ui',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy views integrator'.
  $permissions['administer taxonomy views integrator'] = array(
    'name' => 'administer taxonomy views integrator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tracking code'.
  $permissions['administer tracking code'] = array(
    'name' => 'administer tracking code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tracking_code',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'boost flush pages'.
  $permissions['boost flush pages'] = array(
    'name' => 'boost flush pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boost',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create about_us_block content'.
  $permissions['create about_us_block content'] = array(
    'name' => 'create about_us_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create backend content'.
  $permissions['create backend content'] = array(
    'name' => 'create backend content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create design_school content'.
  $permissions['create design_school content'] = array(
    'name' => 'create design_school content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create frontend content'.
  $permissions['create frontend content'] = array(
    'name' => 'create frontend content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create nodeblock content'.
  $permissions['create nodeblock content'] = array(
    'name' => 'create nodeblock content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create other content'.
  $permissions['create other content'] = array(
    'name' => 'create other content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create server content'.
  $permissions['create server content'] = array(
    'name' => 'create server content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'define view for terms in tags'.
  $permissions['define view for terms in tags'] = array(
    'name' => 'define view for terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for terms in type_class'.
  $permissions['define view for terms in type_class'] = array(
    'name' => 'define view for terms in type_class',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary tags'.
  $permissions['define view for vocabulary tags'] = array(
    'name' => 'define view for vocabulary tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'define view for vocabulary type_class'.
  $permissions['define view for vocabulary type_class'] = array(
    'name' => 'define view for vocabulary type_class',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tvi',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any about_us_block content'.
  $permissions['delete any about_us_block content'] = array(
    'name' => 'delete any about_us_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any backend content'.
  $permissions['delete any backend content'] = array(
    'name' => 'delete any backend content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any design_school content'.
  $permissions['delete any design_school content'] = array(
    'name' => 'delete any design_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any frontend content'.
  $permissions['delete any frontend content'] = array(
    'name' => 'delete any frontend content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any nodeblock content'.
  $permissions['delete any nodeblock content'] = array(
    'name' => 'delete any nodeblock content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any other content'.
  $permissions['delete any other content'] = array(
    'name' => 'delete any other content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any server content'.
  $permissions['delete any server content'] = array(
    'name' => 'delete any server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own about_us_block content'.
  $permissions['delete own about_us_block content'] = array(
    'name' => 'delete own about_us_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own backend content'.
  $permissions['delete own backend content'] = array(
    'name' => 'delete own backend content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own design_school content'.
  $permissions['delete own design_school content'] = array(
    'name' => 'delete own design_school content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own frontend content'.
  $permissions['delete own frontend content'] = array(
    'name' => 'delete own frontend content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nodeblock content'.
  $permissions['delete own nodeblock content'] = array(
    'name' => 'delete own nodeblock content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own other content'.
  $permissions['delete own other content'] = array(
    'name' => 'delete own other content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own server content'.
  $permissions['delete own server content'] = array(
    'name' => 'delete own server content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_class'.
  $permissions['delete terms in type_class'] = array(
    'name' => 'delete terms in type_class',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display disqus comments on profile'.
  $permissions['display disqus comments on profile'] = array(
    'name' => 'display disqus comments on profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any about_us_block content'.
  $permissions['edit any about_us_block content'] = array(
    'name' => 'edit any about_us_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any backend content'.
  $permissions['edit any backend content'] = array(
    'name' => 'edit any backend content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any checklistapi checklist'.
  $permissions['edit any checklistapi checklist'] = array(
    'name' => 'edit any checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: 'edit any design_school content'.
  $permissions['edit any design_school content'] = array(
    'name' => 'edit any design_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any frontend content'.
  $permissions['edit any frontend content'] = array(
    'name' => 'edit any frontend content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any nodeblock content'.
  $permissions['edit any nodeblock content'] = array(
    'name' => 'edit any nodeblock content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any other content'.
  $permissions['edit any other content'] = array(
    'name' => 'edit any other content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any server content'.
  $permissions['edit any server content'] = array(
    'name' => 'edit any server content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own about_us_block content'.
  $permissions['edit own about_us_block content'] = array(
    'name' => 'edit own about_us_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own backend content'.
  $permissions['edit own backend content'] = array(
    'name' => 'edit own backend content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own design_school content'.
  $permissions['edit own design_school content'] = array(
    'name' => 'edit own design_school content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own frontend content'.
  $permissions['edit own frontend content'] = array(
    'name' => 'edit own frontend content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nodeblock content'.
  $permissions['edit own nodeblock content'] = array(
    'name' => 'edit own nodeblock content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own other content'.
  $permissions['edit own other content'] = array(
    'name' => 'edit own other content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own server content'.
  $permissions['edit own server content'] = array(
    'name' => 'edit own server content',
    'roles' => array(
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit seo_checklist checklistapi checklist'.
  $permissions['edit seo_checklist checklistapi checklist'] = array(
    'name' => 'edit seo_checklist checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_class'.
  $permissions['edit terms in type_class'] = array(
    'name' => 'edit terms in type_class',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'maintain nodeblock'.
  $permissions['maintain nodeblock'] = array(
    'name' => 'maintain nodeblock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeblock',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'menu edit devel'.
  $permissions['menu edit devel'] = array(
    'name' => 'menu edit devel',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit features'.
  $permissions['menu edit features'] = array(
    'name' => 'menu edit features',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit main-menu'.
  $permissions['menu edit main-menu'] = array(
    'name' => 'menu edit main-menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit management'.
  $permissions['menu edit management'] = array(
    'name' => 'menu edit management',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-fast-link'.
  $permissions['menu edit menu-fast-link'] = array(
    'name' => 'menu edit menu-fast-link',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-santa-menu'.
  $permissions['menu edit menu-santa-menu'] = array(
    'name' => 'menu edit menu-santa-menu',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit navigation'.
  $permissions['menu edit navigation'] = array(
    'name' => 'menu edit navigation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit user-menu'.
  $permissions['menu edit user-menu'] = array(
    'name' => 'menu edit user-menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'override default scheduler time'.
  $permissions['override default scheduler time'] = array(
    'name' => 'override default scheduler time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler_workbench',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search Google CSE'.
  $permissions['search Google CSE'] = array(
    'name' => 'search Google CSE',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'google_cse',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'toggle disqus comments'.
  $permissions['toggle disqus comments'] = array(
    'name' => 'toggle disqus comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      '作者' => '作者',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format markdown'.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format pure_html'.
  $permissions['use text format pure_html'] = array(
    'name' => 'use text format pure_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any checklistapi checklist'.
  $permissions['view any checklistapi checklist'] = array(
    'name' => 'view any checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: 'view checklistapi checklists report'.
  $permissions['view checklistapi checklists report'] = array(
    'name' => 'view checklistapi checklists report',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: 'view disqus comments'.
  $permissions['view disqus comments'] = array(
    'name' => 'view disqus comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'disqus',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view seo_checklist checklistapi checklist'.
  $permissions['view seo_checklist checklistapi checklist'] = array(
    'name' => 'view seo_checklist checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      '作者' => '作者',
    ),
    'module' => 'system',
  );

  return $permissions;
}
