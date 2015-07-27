<?php
/**
 * @file
 * ld_job_board.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ld_job_board_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ld_job_board_node_info() {
  $items = array(
    'job_application' => array(
      'name' => t('Job Application'),
      'base' => 'node_content',
      'description' => t('Allows people to apply to a specific job'),
      'has_title' => '1',
      'title_label' => t('Name (First, Last)'),
      'help' => '',
    ),
    'job_postings' => array(
      'name' => t('Job Postings'),
      'base' => 'node_content',
      'description' => t('Create a new job posting'),
      'has_title' => '1',
      'title_label' => t('Job Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
