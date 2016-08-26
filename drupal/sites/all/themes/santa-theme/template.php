<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 *
 * @see https://drupal.org/node/1728096
 */

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  santa_theme_preprocess_html($variables, $hook);
  santa_theme_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // santa_theme_preprocess_node_page() or santa_theme_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function santa_theme_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

/**
 * Override or insert variables into the page template for HTML output.
 */
function santa_theme_process_html(&$variables)
{
    // Hook into color.module.
  if (module_exists('color')) {
      _color_html_alter($variables);
  }
}


/**
 * Override or insert variables into the page template.
 */
function santa_theme_process_page(&$variables)
{
    // Hook into color.module.
  if (module_exists('color')) {
      _color_page_alter($variables);
  }
}

function santa_theme_preprocess_node(&$variables, $hook) {
  //vm1
  if($variables['type']=='hs_type1' and $variables['view_mode']=='vm_1'){
      $variables['classes_array'][] = 'field-margin-small';
      $variables['content']['field_image']['#prefix']='<div class="field-wrapper row center-xs">';
      $variables['content']['title']['#suffix']='</div>';
  }
  //vm4
  if($variables['type']=='hs_type1' and $variables['view_mode']=='vm_4'){
      $variables['classes_array'][] = 'field-margin';
      $variables['content']['field_image']['#prefix']='<div class="field-wrapper row center-xs">';
      $variables['content']['title']['#suffix']='</div>';
  }
  //vm5
    if ($variables['type'] == 'hs_type1' and $variables['view_mode'] == 'vm_5') {
        $variables['content']['field_image']['#prefix'] = '<div class ="field-margin"><div class="field-wrapper">';
        $variables['content']['title']['#prefix'] = '<div class ="tittle-wrapper">';
        $variables['content']['post_date']['#prefix'] = '<h5>';
        $variables['content']['post_date']['#suffix'] = '</h5></div>';
        $variables['content']['field_body']['#suffix'] = '</div></div></div>';
    }

}

function santa_theme_preprocess_field(&$variables) {
  //vm1
  if($variables['element']['#field_name']=='field_image' and $variables['element']['#view_mode']=='vm_1'){
    $variables['classes_array'][] = 'effect_image-scale';
  }
  //vm4
  if($variables['element']['#field_name']=='field_image' and $variables['element']['#view_mode']=='vm_4'){
    $variables['classes_array'][] = 'transform_link-circle effect_image-scale autumn';
  }
  //vm5
  if ($variables['element']['#field_name'] == 'field_image' and $variables['element']['#view_mode'] == 'vm_5') {
      $variables['classes_array'][] = 'effect_image-scale';
  }
  if ($variables['element']['#field_name'] == 'body' and $variables['element']['#view_mode'] == 'vm_2') {
        $variables['classes_array'][] = 'rm-p-margin';
  }
}
