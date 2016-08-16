<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_santa_web_design_drupal_and_more_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function hello_santa_web_design_drupal_and_more_media_image_default_styles() {
  $styles = array();

  // Exported image style: facebookcover.
  $styles['facebookcover'] = array(
    'label' => 'facebookcover',
    'effects' => array(
      9 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 470,
          'height' => 275,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'facebookcover',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: flexslider_full.
  $styles['flexslider_full'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'flexslider_full',
  );

  // Exported image style: flexslider_thumbnail.
  $styles['flexslider_thumbnail'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'flexslider_thumbnail',
  );

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: list_image.
  $styles['list_image'] = array(
    'label' => '列表圖片',
    'effects' => array(
      8 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 480,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'list_image',
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_thumb.
  $styles['main_thumb'] = array(
    'label' => '首頁縮圖',
    'effects' => array(
      7 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 600,
          'height' => 400,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'main_thumb',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (220x220)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'label' => '圖片輪撥',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
