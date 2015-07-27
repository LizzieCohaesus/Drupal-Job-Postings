<?php
/**
 * @file
 * ld_job_board.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ld_job_board_user_default_roles() {
  $roles = array();

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
