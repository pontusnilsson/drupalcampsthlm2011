<?php
// $Id: precision-column-two.tpl.php,v 1.1.2.1 2011/02/14 10:32:23 fabsor Exp $

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>
<?php if (!empty($css_id)): ?>
  <div id="<?php print $css_id; ?>" class="clear-block">
<?php endif; ?>

<?php if (!empty($content['left'])): ?>
  <div class="page-header-alpha grid-48 alpha omega">
    <?php print $content['left']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['main'])): ?>
  <div class="page-main grid-36 alpha">
    <?php print $content['main']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($css_id)): ?>
  </div>
<?php endif; ?>
