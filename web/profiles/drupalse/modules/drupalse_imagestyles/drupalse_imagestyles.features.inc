<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function drupalse_imagestyles_imagecache_default_presets() {
  $items = array(
    'drupalse_gold' => array(
      'presetname' => 'drupalse_gold',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '217',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalse_organizing' => array(
      'presetname' => 'drupalse_organizing',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '560',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'drupalse_silver' => array(
      'presetname' => 'drupalse_silver',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '175',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
