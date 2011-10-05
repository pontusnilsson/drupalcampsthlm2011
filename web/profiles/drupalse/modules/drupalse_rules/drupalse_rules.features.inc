<?php

/**
 * Implementation of hook_rules_defaults().
 */
function drupalse_rules_rules_defaults() {
  return array(
    'rules' => array(
      'rules_drupalse_registration_redirect' => array(
        '#type' => 'rule',
        '#set' => 'event_user_insert',
        '#label' => 'DrupalCamp registration redirect',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'DrupalCamp',
          'drupalse_rules' => 'drupalse_rules',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'path' => 'ticket',
              'query' => '',
              'fragment' => '',
              'force' => 1,
              'immediate' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'path' => array(
                    '0' => ':global',
                  ),
                  'query' => array(
                    '0' => ':global',
                  ),
                  'fragment' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_drupal_goto',
            '#info' => array(
              'label' => 'Page redirect',
              'module' => 'System',
              'eval input' => array(
                '0' => 'path',
                '1' => 'query',
                '2' => 'fragment',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
