<?php
// $Id: no_context_content_type.inc,v 1.1.2.1 2010/01/29 19:54:02 merlinofchaos Exp $

/**
 * @file
 * "No context" sample content type. It operates with no context at all. It would
 * be basically the same as a 'custom content' block, but it's not even that
 * sophisticated.
 *
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('DrupalCamp twitter'),
  'description' => t('Pulls Drupalcamp tweets'),

  // 'single' => TRUE means has no subtypes.
  'single' => TRUE,
  // Constructor.
  'content_types' => array('drupalse_twitter_content_type'),
  // Name of a function which will render the block.
  'render callback' => 'drupalse_twitter_content_type_render',
  // The default context.
  'defaults' => array(),

  // This explicitly declares the config form. Without this line, the func would be
  // ctools_plugin_example_no_context_content_type_edit_form.
  'edit form' => 'drupalse_twitter_content_type_edit_form',

  // Icon goes in the directory with the content type.
  'icon' => 'icon_example.png',
  'category' => array(t('DrupalCamp'), -9),

  // this example does not provide 'admin info', which would populate the
  // panels builder page preview.
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function drupalse_twitter_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  // The title actually used in rendering
  $block->title = check_plain("No-context content type");
  $block->content = twitter_pull_render(($conf['tag']), 'DrupalCamp', 10);
  
  return $block;

}

/**
 * 'Edit form' callback for the content type.
 * This example just returns a form; validation and submission are standard drupal
 * Note that if we had not provided an entry for this in hook_content_types,
 * this could have had the default name
 * ctools_plugin_example_no_context_content_type_edit_form.
 *
 */
function drupalse_twitter_content_type_edit_form(&$form, &$form_state) {
  $conf = $form_state['conf'];
  $form['tag'] = array(
    '#type' => 'textfield',
    '#title' => t('Specify tag to pull from'),
    '#size' => 50,
    '#description' => t('Specify what twitter tag to pull from'),
    '#default_value' => !empty($conf['tag']) ? $conf['tag'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  return $form;
}

function drupalse_twitter_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (array('tag') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}