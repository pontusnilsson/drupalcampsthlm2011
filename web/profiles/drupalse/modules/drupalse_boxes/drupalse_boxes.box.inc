<?php

/**
 * Implementation of hook_default_box().
 */
function drupalse_boxes_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_sponsor';
  $box->plugin_key = 'simple';
  $box->title = 'Want to sponsor?';
  $box->description = 'Sponsor promo';
  $box->options = array(
    'body' => 'This is a text on how you can sponsor DrupalCamp Stockholm and maybe a link to a node?',
    'format' => '1',
  );
  $export['drupalse_sponsor'] = $box;

  return $export;
}
