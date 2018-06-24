<?php

/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * @file
 * The primary PHP file for this theme.
 */

function tourister_bag_theme_preprocess_page(&$variables) {
  // $path = path_to_theme();
  // drupal_add_css($path . '/stylesheets/basic_layout.css');
  $theme_path = drupal_get_path('theme', 'tourister_bag_theme');
  $slick_lib = libraries_get_path('slick');
  drupal_add_js($slick_lib .'/slick/slick.min.js');
  drupal_add_css($slick_lib .'/slick/slick.css');
  drupal_add_css($slick_lib .'/slick/slick-theme.css');

  // kpr($variables);
  drupal_add_css($theme_path . '/css/display_products.css');
}

function tourister_bag_theme_preprocess_html(&$variables) {
    if (in_array('page-user-orders', $variables['classes_array']) && in_array('page-user-orders-', $variables['classes_array']))
    $variables['page']['#children'] = str_replace('<div class="site-footer">','<div class="bank-details container">
<h5>Bank Details</h5>
<p>Bank Name: AU SMALL FINANCE BANK</p>
<p>A/C Name: Shri Prasanna Industrial Services</p>
<p>A/C No: 1821236817620968</p>
<p>IFS Code: AUBL0002368</p>
<p>Branch: Gondia Fulchur road </p>
</div><div class="company-name-sign"><p class="name">SHRI PRASANNA INDUSTRIAL SERVICES</p><p class="signature">Sign</p></div></div><div class="messages"><p class="material-received-message">Material Received in Good Condition, If any problem please write here <a href="/content/contact-us">Contact Us</a></p><p class="computer-message">This is computer generated invoice</p></div><div class="site-footer">', $variables['page']['#children']);

   // Adding class to Tax for display taxes seperately
   $variables['page']['#children'] = str_replace('class="component-type-tax', 'class="all-taxes component-type-tax', $variables['page']['#children']);
}
