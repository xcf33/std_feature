<?php
/**
 * @file
 * std_configuration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function std_configuration_taxonomy_default_vocabularies() {
  return array(
    'set' => array(
      'name' => 'Set',
      'machine_name' => 'set',
      'description' => 'A set of webpages to perform regression testing',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
