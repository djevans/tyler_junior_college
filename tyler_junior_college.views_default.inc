<?php
/**
 * @file
 * tyler_junior_college.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tyler_junior_college_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_exhibits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_entity_bridge_mapping';
  $view->human_name = 'All Exhibits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Exhibits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_islandora_object_node']['id'] = 'reverse_field_islandora_object_node';
  $handler->display->display_options['relationships']['reverse_field_islandora_object_node']['table'] = 'islandora_entity_bridge_mapping';
  $handler->display->display_options['relationships']['reverse_field_islandora_object_node']['field'] = 'reverse_field_islandora_object_node';
  $handler->display->display_options['relationships']['reverse_field_islandora_object_node']['label'] = 'Exhibit Slide';
  $handler->display->display_options['relationships']['reverse_field_islandora_object_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_slide_exhibit_target_id']['id'] = 'field_slide_exhibit_target_id';
  $handler->display->display_options['relationships']['field_slide_exhibit_target_id']['table'] = 'field_data_field_slide_exhibit';
  $handler->display->display_options['relationships']['field_slide_exhibit_target_id']['field'] = 'field_slide_exhibit_target_id';
  $handler->display->display_options['relationships']['field_slide_exhibit_target_id']['relationship'] = 'reverse_field_islandora_object_node';
  $handler->display->display_options['relationships']['field_slide_exhibit_target_id']['label'] = 'Exhibit';
  $handler->display->display_options['relationships']['field_slide_exhibit_target_id']['required'] = TRUE;
  /* Field: Islandora Entity Bridge Object: Islandora Entity Bridge ID */
  $handler->display->display_options['fields']['iebid']['id'] = 'iebid';
  $handler->display->display_options['fields']['iebid']['table'] = 'islandora_entity_bridge_mapping';
  $handler->display->display_options['fields']['iebid']['field'] = 'iebid';
  /* Field: Islandora Entity Bridge Object: Datastream - Image */
  $handler->display->display_options['fields']['datastream_image']['id'] = 'datastream_image';
  $handler->display->display_options['fields']['datastream_image']['table'] = 'views_entity_islandora_entity_bridge';
  $handler->display->display_options['fields']['datastream_image']['field'] = 'datastream_image';
  $handler->display->display_options['fields']['datastream_image']['label'] = '';
  $handler->display->display_options['fields']['datastream_image']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_slide_exhibit_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_slide_exhibit_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Exhibit';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_slide_exhibit_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-exhibits';
  $export['all_exhibits'] = $view;

  return $export;
}
