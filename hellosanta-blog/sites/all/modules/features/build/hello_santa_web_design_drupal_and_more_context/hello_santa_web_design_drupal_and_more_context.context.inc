<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hello_santa_web_design_drupal_and_more_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = '關於我們';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about_us' => 'about_us',
      ),
    ),
  );
  $context->reactions = array(
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('關於我們');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'backstage-research';
  $context->description = '後台';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'backstage-research' => 'backstage-research',
      ),
    ),
  );
  $context->reactions = array(
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('後台');
  $export['backstage-research'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_us';
  $context->description = '聯絡我們';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact_us' => 'contact_us',
      ),
    ),
  );
  $context->reactions = array(
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('聯絡我們');
  $export['contact_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'css_research';
  $context->description = '前台';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'css_research' => 'css_research',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('前台');
  $export['css_research'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front-page';
  $context->description = '首頁';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_block-block_5' => array(
          'module' => 'views',
          'delta' => 'front_block-block_5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-front_block-block' => array(
          'module' => 'views',
          'delta' => 'front_block-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-front_block-block_3' => array(
          'module' => 'views',
          'delta' => 'front_block-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-front_block-block_4' => array(
          'module' => 'views',
          'delta' => 'front_block-block_4',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('首頁');
  $export['front-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'other';
  $context->description = '其他';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'other' => 'other',
      ),
    ),
  );
  $context->reactions = array(
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('其他');
  $export['other'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_research';
  $context->description = '伺服器';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'service_research' => 'service_research',
      ),
    ),
  );
  $context->reactions = array(
    'no_title' => array(
      'no_title' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('伺服器');
  $export['service_research'] = $context;

  return $export;
}
