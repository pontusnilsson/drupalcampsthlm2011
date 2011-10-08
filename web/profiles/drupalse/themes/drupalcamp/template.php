<?php
/**
* Implementation of theme_panels_default_style_render_region().
*/
function drupalcamp_panels_default_style_render_region($display, $region_id, $panes, $settings) {
  $output = '';
  foreach ($panes as $pane_id => $pane_output) {
    $output .= $pane_output;
  }
  return $output;
}


/**
 * Views override; field_blurb_image_fid field.
 *
 * @see mykea_views_view_field__field_blurb_link_text_value
 */
function drupalcamp_views_view_field__sessions__field_speakers_uid($view, $field, $row) {
  kpr($view);
  if($field) {

  }
  return $view->field[$field->options['id']]->advanced_render($row);
}