<?php
/**
 * @file
 * marketing_companies_details.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function marketing_companies_details_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_admin-interface:admin-product-add.
  $menu_links['main-menu_admin-interface:admin-product-add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin-product-add',
    'router_path' => 'admin-product-add',
    'link_title' => 'Admin Interface',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_admin-interface:admin-product-add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bags:bags.
  $menu_links['main-menu_bags:bags'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'bags',
    'router_path' => 'bags',
    'link_title' => 'Bags',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_bags:bags',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_marketing-customer-info:companies-marketing-info.
  $menu_links['main-menu_marketing-customer-info:companies-marketing-info'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'companies-marketing-info',
    'router_path' => 'companies-marketing-info',
    'link_title' => 'Marketing Customer Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_marketing-customer-info:companies-marketing-info',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Interface');
  t('Bags');
  t('Login');
  t('Marketing Customer Info');

  return $menu_links;
}
