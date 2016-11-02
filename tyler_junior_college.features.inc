<?php
/**
 * @file
 * tyler_junior_college.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tyler_junior_college_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tyler_junior_college_node_info() {
  $items = array(
    'exhibit' => array(
      'name' => t('Exhibit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
