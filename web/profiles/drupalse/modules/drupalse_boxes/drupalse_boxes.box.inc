<?php

/**
 * Implementation of hook_default_box().
 */
function drupalse_boxes_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_registerpromo';
  $box->plugin_key = 'simple';
  $box->title = 'Sign up';
  $box->description = 'Sign up promo';
  $box->options = array(
    'body' => 'Come to DrupalCamp. Register here.',
    'format' => '1',
  );
  $export['drupalse_registerpromo'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_sessionpromo';
  $box->plugin_key = 'simple';
  $box->title = 'Want to talk at DrupalCamp Stockholm?';
  $box->description = 'Session proposal promo';
  $box->options = array(
    'body' => 'Leave your submission here',
    'format' => '1',
  );
  $export['drupalse_sessionpromo'] = $box;

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

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_ticket';
  $box->plugin_key = 'simple';
  $box->title = 'Complete your registration';
  $box->description = 'DrupalCamp Ticket';
  $box->options = array(
    'body' => 'To complete your registration you need to go to http://www.tickets.com',
    'format' => '1',
  );
  $export['drupalse_ticket'] = $box;

  return $export;
}
