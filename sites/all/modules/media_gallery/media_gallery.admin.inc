<?php

/**
 * Configure page for the media gallery settings.
 */
function media_gallery_admin_settings() {
  $form['media_gallery_use_multiple_collections'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use multiple gallery collections.'),
    '#default_value' => variable_get('media_gallery_use_multiple_collections', FALSE),
    '#description' => t('Enables the creation of multiple <em>gallery collections</em> and <em>hierarchical galleries</em>.'),
  );
  // Show a link to the media gallery taxonomy terms.
  if (variable_get('media_gallery_use_multiple_collections', FALSE)) {
    $vocabulary = taxonomy_vocabulary_load(variable_get('media_gallery_collection_vid'));
    if ($vocabulary) {
      $form['media_gallery_gallery_collection_taxonomy'] = array(
        '#type' => 'link',
        '#title' => t('Configure gallery collections'),
        '#href' => "admin/structure/taxonomy/$vocabulary->machine_name",
        '#access' => user_access('administer taxonomy'),
      );
    }
  }
  return system_settings_form($form);
}
