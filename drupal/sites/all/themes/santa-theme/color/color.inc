<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'santa_theme'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'headerBg' => t('Header background'),
    'headerLink' => t('Header link color'),
    'headerHover' => t('Header link  hover color'),
    'bodyBg' => t('Main background'),
    'mainFont' => t('Main font color'),
    'mainLink' => t('Main link color'),
    'mainHover' => t('Main link hover color'),
    'h1Color' => t('H1 page title color'),
    'h2Color' => t('H2 block title color'),
    'h3Color' => t('H3 artcle title color'),
    'footerBg' => t('Footer background'),
    'footerFont' => t('Footer font color'),
    'footerLink' => t('Footer link color'),
    'footerHover' => t('Footer link  hover color'),
    'components_0' => t('components color1 (rwd-menu-bg)'),
    'components_1' => t('components color2 (rwd-menu-link)'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Blue Lagoon (default)'),
      'colors' => array(
        'headerBg' => '#ffff00',
        'headerLink' => '#ffff01',
        'headerHover' => '#ffff02',
        'bodyBg' => '#aaaa00',
        'mainFont' => '#aaaa01',
        'mainLink' => '#aaaa02',
        'mainHover' => '#aaaa03',
        'h1Color' => '#aaaa04',
        'h2Color' => '#aaaa05',
        'h3Color' => '#aaaa06',
        'footerBg' => '#bbbb00',
        'footerFont' => '#bbbb01',
        'footerLink' => '#bbbb02',
        'footerHover' => '#bbbb03',
        'components_0' => '#cccc00',
        'components_1' => '#cccc01',
      ),
    ),

    'slate' => array(
      'title' => t('Fancy'),
      'colors' => array(
        'headerBg' => '#ffffff',
        'headerLink' => '#000000',
        'headerHover' => '#ea4d35',
        'bodyBg' => '#ffffff',
        'mainFont' => '#000000',
        'mainLink' => '#ea4d35',
        'mainHover' => '#000000',
        'h1Color' => '#000000',
        'h2Color' => '#000000',
        'h3Color' => '#000000',
        'footerBg' => '#FFCAC2',
        'footerFont' => '#ffffff',
        'footerLink' => '#ffffff',
        'footerHover' => '#ea4d35',
        'components_0' => '#FFCAC2',
        'components_1' => '#ea4d35',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'color/stylesheets/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
