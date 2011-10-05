<?php

/**
 * Implementation of hook_default_box().
 */
function drupalse_boxes_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_awards';
  $box->plugin_key = 'simple';
  $box->title = 'Swedish Drupal Awards 2011';
  $box->description = 'DrupalCamp Awards';
  $box->options = array(
    'body' => 'Äntligen! Nu är det dax att lyfta fram de riktigt bra och kreativa lösningarna som skapats med Drupal under året. Vi har fyra kategorier:

 * Årets svenska webbplats
 * Årets svenska drupalist
 * Årets svenska design
 * Årets svenska teknik

Kategorierna är ganska öppna och det är upp till oss i gemenskapen att bestämma vad som hör hemma inom design och teknik. Teknik kanske är en bra svenskutvecklad modul eller en kreativ teknisk lösning? Årets design kanske är ett stiligt tema eller en snygg och användarvänlig webbplats? 
Grundförutsättningar för att kunna nomineras är:
 * Det ska ha med Drupal att göra
 * Det ska vara svenskt
 * Det ska varit aktuellt under året
 * Det ska inte ha vunnit tidigare

Nomeneringsprocessen är öppen och sker här på DrupalCamps webb.  Välkommen att nominera!

<strong>Vad händer sedan?</strong>

En kommitté bestående av styrgruppen för DrupalCamp Stockholm 2011 utser sedan tävlingsbidrag inom varje kategori. Anledningen till att det är en modererad urvalsprocess är för att få en variation och bredd bland tävlingsbidragen samt att det kan bli för mycket att gå igenom för en besökare. Besökarnas röst är viktigare för att utse vinnarna. 

Tävlingsbidragen kommer att presenteras på DrupalCamps webbplats innan DrupalCamp går av stapeln så besökarna får tid att titta igenom och fundera.

Tävlingen avgörs sedan genom röstning bland besökarna på DrupalCamp, så se till att komma dit och göra din röst hörd!

Läs mer om bakgrund och diskution om Swedish Drupal Awards 2001 på g.d.o.:

http://groups.drupal.org/node/178154
',
    'format' => '2',
  );
  $export['drupalse_awards'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'drupalse_buyticket';
  $box->plugin_key = 'simple';
  $box->title = 'Bought ticket?';
  $box->description = 'Buy ticket promo';
  $box->options = array(
    'body' => 'Have you purchased your ticket at biljett.com? Please go to <a href="/ticket">ticket</a> for more information. It could also be that we not yet have confirmed your purchase. If this block doesn\'t dissapear in 3 days, contact us at CONTACT.',
    'format' => '1',
  );
  $export['drupalse_buyticket'] = $box;

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
    'body' => 'Thanks for your registration. You are almost done.

To complete your registration you need to go to <a href="http://www.biljett.com/drupalcampstockholm2011">www.biljett.com</a> Use the same first name and last name when you register on tickets.se as you use on your user here.

When we have confirmed your payment this page will not be available for you anymore.

Now that you are logged in you may <a href"#">create session proposals</a> or check out the already <a href="/sessions">proposed sessions</a>. 

See you at DrupalCamp 12 november.',
    'format' => '1',
  );
  $export['drupalse_ticket'] = $box;

  return $export;
}
