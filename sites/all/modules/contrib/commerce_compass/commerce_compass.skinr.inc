<?php


// Add styling to skinr form
drupal_add_css(drupal_get_path('module', 'commerce_compass') . '/css/arctica.skinr.admin.css', array('group' => CSS_THEME, 'weight' => 10));

// Implement skinr form_callback to ensure this inc file gets loaded on every edit-skin form request
function commerce_compass_skinr_callback($form, $form_state, $skinr_theme_context) {
  $form = array(
    '#type' => 'hidden',
  );
  return $form;
}

/**
 * Implements hook_skinr_skin_info().
 */
function commerce_compass_skinr_skin_info() {

  // Use Skinr form callback to discover the theme context for the skins
  $skins['commerce_compass_skinr_callback'] = array(
    'title' => t('commerce_compass Skinr Callback'),
    'form callback' => 'commerce_compass_skinr_callback',
    'group' => 'layout',
    'default status' => 1,
  );

  /**
  * @code
   * Responsive skinr layout method taken out of Arctica base theme
   */

  // Number of media queries to use
  $media_total = 3;

  for ($media_count = 1; $media_count <= $media_total; $media_count++) {

    $skins["comp_grid_width{$media_count}"] = array(
      'title' => t('width @medium', array('@medium' => $media_count)),
      'description' => t("Change the width of this block."),
      'type' => 'select',
      'options' => _compass_skinr_grid_width_options($media_count),
      'group' => 'layout',
      'theme hooks' => array('block'),
      'attached' => array(
        'css' => array('css/compass-arctica-grid.css'),
      ),
      'default status' => TRUE,
      // @todo maak functie die active grid system kent en juiste opties geeft
      // 'options' => compass_skins_grid_options(),
    );

    $skins["comp_grid_clear-{$media_count}"] = array(
      // 'title' => t('width @medium', array('@medium' => $medium)),
      'title' => t('Float Clearing'),
      'description' => t("Can be used to start new grid row."),
      'type' => 'select',
      'options' => array(
        'clear-both' => array(
          'title' => 'Clear both',
          'class' => array("media-{$media_count}-clear-both"),
        ),
        'clear-left' => array(
          'title' => 'Clear left',
          'class' => array("media-{$media_count}-clear-left"),
        ),
        'clear-right' => array(
          'title' => 'Clear right',
          'class' => array("media-{$media_count}-clear-right"),
        ),
        'clear-none' => array(
          'title' => 'Clear none',
          'class' => array("media-{$media_count}-clear-none"),
        ),
      ),
      'group' => 'layout',
      'theme hooks' => array('block'),
      'attached' => array(
        'css' => array('css/compass-arctica-grid.css'),
      ),
      'default status' => TRUE,
    );

    $skins["comp_grid_prefill-{$media_count}"] = array(
      // 'title' => t('@medium postfill', array('@medium' => $medium)),
      'title' => t('prefill'),
      'type' => 'select',
      'options' => _compass_skinr_grid_prefill_options($media_count),
      'group' => 'layout',
      'theme hooks' => array('block'),
      'default status' => TRUE,
    );

    $skins["comp_grid_postfill-{$media_count}"] = array(
      // 'title' => t('@medium width', array('@medium' => $medium)),
      'title' => t('postfill'),
      'type' => 'select',
      'options' => _compass_skinr_grid_postfill_options($media_count),
      'group' => 'layout',
      'theme hooks' => array('block'),
      'attached' => array(
        'css' => array('css/compass-arctica-grid.css'),
      ),
      'default status' => TRUE,
    );
  }
  return $skins;
}


/**
 * Assists in hook_skinr_skin_PLUGIN_info() implementation.
 * @return array
 */
function _compass_skinr_grid_width_options($media_idx) {
  $options = array(
    "media-{$media_idx}-grid-1-8" => array(
      'title' => t('1/8'),
      'class' => array("media-{$media_idx}-grid-1-8"),
    ),
    "media-{$media_idx}-grid-1-7" => array(
      'title' => t('1/7'),
      'class' => array("media-{$media_idx}-grid-1-7"),
    ),
    "media-{$media_idx}-grid-1-6" => array(
      'title' => t('1/6'),
      'class' => array("media-{$media_idx}-grid-1-6"),
    ),
    "media-{$media_idx}-grid-1-5" => array(
      'title' => t('1/5'),
      'class' => array("media-{$media_idx}-grid-1-5"),
    ),
    "media-{$media_idx}-grid-1-4" => array(
      'title' => t('1/4'),
      'class' => array("media-{$media_idx}-grid-1-4"),
    ),
    "media-{$media_idx}-grid-1-3" => array(
      'title' => t('1/3'),
      'class' => array("media-{$media_idx}-grid-1-3"),
    ),
    "media-{$media_idx}-grid-1-2" => array(
      'title' => t('1/2'),
      'class' => array("media-{$media_idx}-grid-1-2"),
    ),
    "media-{$media_idx}-grid-3-4" => array(
      'title' => t('3/4'),
      'class' => array("media-{$media_idx}-grid-3-4"),
    ),
    "media-{$media_idx}-grid-2-3" => array(
      'title' => t('2/3'),
      'class' => array("media-{$media_idx}-grid-2-3"),
    ),
    "media-{$media_idx}-grid-100" => array(
      'title' => t('100%'),
      'class' => array("media-{$media_idx}-grid-100"),
    ),
    "media-{$media_idx}-grid-phi" => array(
      'title' => t('1/phi (61.8%)'),
      'class' => array("media-{$media_idx}-grid-phi"),
    ),
    "media-{$media_idx}-grid-phi2" => array(
      'title' => t('1/phi^2 (38.2%)'),
      'class' => array("media-{$media_idx}-grid-phi2"),
    ),
    "media-{$media_idx}-grid-phi3" => array(
      'title' => t('1/phi^3 (23.6%)'),
      'class' => array("media-{$media_idx}-grid-phi3"),
    ),
    "media-{$media_idx}-grid-auto" => array(
      'title' => t('auto'),
      'class' => array("media-{$media_idx}-grid-auto"),
    ),
  );

  return $options;
}

/**
 * Assists in hook_skinr_skin_PLUGIN_info() implementation.
 * @return array
 */
function _compass_skinr_grid_prefill_options($media_idx) {
  $options = array(
    "media-{$media_idx}-grid-prefill-1-8" => array(
      'title' => t('1/8'),
      'class' => array("media-{$media_idx}-grid-prefill-1-8"),
    ),
    "media-{$media_idx}-grid-prefill-1-7" => array(
      'title' => t('1/7'),
      'class' => array("media-{$media_idx}-grid-prefill-1-7"),
    ),
    "media-{$media_idx}-grid-prefill-1-6" => array(
      'title' => t('1/6'),
      'class' => array("media-{$media_idx}-grid-prefill-1-6"),
    ),
    "media-{$media_idx}-grid-prefill-1-5" => array(
      'title' => t('1/5'),
      'class' => array("media-{$media_idx}-grid-prefill-1-5"),
    ),
    "media-{$media_idx}-grid-prefill-1-4" => array(
      'title' => t('1/4'),
      'class' => array("media-{$media_idx}-grid-prefill-1-4"),
    ),
    "media-{$media_idx}-grid-prefill-1-3" => array(
      'title' => t('1/3'),
      'class' => array("media-{$media_idx}-grid-prefill-1-3"),
    ),
    "media-{$media_idx}-grid-prefill-1-2" => array(
      'title' => t('1/2'),
      'class' => array("media-{$media_idx}-grid-prefill-1-2"),
    ),
    "media-{$media_idx}-grid-prefill-3-4" => array(
      'title' => t('3/4'),
      'class' => array("media-{$media_idx}-grid-prefill-3-4"),
    ),
    "media-{$media_idx}-grid-prefill-2-3" => array(
      'title' => t('2/3'),
      'class' => array("media-{$media_idx}-grid-prefill-2-3"),
    ),
    "media-{$media_idx}-grid-prefill-100" => array(
      'title' => t('100%'),
      'class' => array("media-{$media_idx}-grid-prefill-100"),
    ),
    "media-{$media_idx}-grid-prefill-phi" => array(
      'title' => t('1/phi (61.8%)'),
      'class' => array("media-{$media_idx}-grid-prefill-phi"),
    ),
    "media-{$media_idx}-grid-prefill-phi2" => array(
      'title' => t('1/phi^2 (38.2%)'),
      'class' => array("media-{$media_idx}-grid-prefill-phi2"),
    ),
    "media-{$media_idx}-grid-prefill-phi3" => array(
      'title' => t('1/phi^3 (23.6%)'),
      'class' => array("media-{$media_idx}-grid-prefill-phi3"),
    ),
  );

  return $options;
}

/**
 * Assists in hook_skinr_skin_PLUGIN_info() implementation.
 * @return array
 */
function _compass_skinr_grid_postfill_options($media_idx) {
  $options = array(
    "media-{$media_idx}-grid-postfill-1-8" => array(
      'title' => t('1/8'),
      'class' => array("media-{$media_idx}-grid-postfill-1-8"),
    ),
    "media-{$media_idx}-grid-postfill-1-7" => array(
      'title' => t('1/7'),
      'class' => array("media-{$media_idx}-grid-postfill-1-7"),
    ),
    "media-{$media_idx}-grid-postfill-1-6" => array(
      'title' => t('1/6'),
      'class' => array("media-{$media_idx}-grid-postfill-1-6"),
    ),
    "media-{$media_idx}-grid-postfill-1-5" => array(
      'title' => t('1/5'),
      'class' => array("media-{$media_idx}-grid-postfill-1-5"),
    ),
    "media-{$media_idx}-grid-postfill-1-4" => array(
      'title' => t('1/4'),
      'class' => array("media-{$media_idx}-grid-postfill-1-4"),
    ),
    "media-{$media_idx}-grid-postfill-1-3" => array(
      'title' => t('1/3'),
      'class' => array("media-{$media_idx}-grid-postfill-1-3"),
    ),
    "media-{$media_idx}-grid-postfill-1-2" => array(
      'title' => t('1/2'),
      'class' => array("media-{$media_idx}-grid-postfill-1-2"),
    ),
    "media-{$media_idx}-grid-postfill-3-4" => array(
      'title' => t('3/4'),
      'class' => array("media-{$media_idx}-grid-postfill-3-4"),
    ),
    "media-{$media_idx}-grid-postfill-2-3" => array(
      'title' => t('2/3'),
      'class' => array("media-{$media_idx}-grid-postfill-2-3"),
    ),
    "media-{$media_idx}-grid-postfill-100" => array(
      'title' => t('100%'),
      'class' => array("media-{$media_idx}-grid-postfill-100"),
    ),
    "media-{$media_idx}-grid-postfill-phi" => array(
      'title' => t('1/phi (61.8%)'),
      'class' => array("media-{$media_idx}-grid-postfill-phi"),
    ),
    "media-{$media_idx}-grid-postfill-phi2" => array(
      'title' => t('1/phi^2 (38.2%)'),
      'class' => array("media-{$media_idx}-grid-postfill-phi2"),
    ),
    "media-{$media_idx}-grid-postfill-phi3" => array(
      'title' => t('1/phi^3 (23.6%)'),
      'class' => array("media-{$media_idx}-grid-postfill-phi3"),
    ),
  );

  return $options;
}
