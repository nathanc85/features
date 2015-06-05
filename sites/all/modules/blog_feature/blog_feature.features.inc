<?php
/**
 * @file
 * blog_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_feature_node_info() {
  $items = array(
    'classicblog' => array(
      'name' => t('Classic Blog'),
      'base' => 'node_content',
      'description' => t('A Classic Blog for testing purposes...'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
