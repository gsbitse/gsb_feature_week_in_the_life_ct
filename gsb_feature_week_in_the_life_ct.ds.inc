<?php
/**
 * @file
 * gsb_feature_week_in_the_life_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_week_in_the_life_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|week_in_the_life|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'week_in_the_life';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_witl_post_mba_goals' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Post Graduation Goals',
        ),
      ),
    ),
  );
  $export['node|week_in_the_life|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|week_in_the_life|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'week_in_the_life';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'View My Week',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_witl_post_mba_goals' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Post Graduation Goals',
        ),
      ),
    ),
  );
  $export['node|week_in_the_life|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_week_in_the_life_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|week_in_the_life|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'week_in_the_life';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_witl_photo_info',
        1 => 'group_witl_photo_wrap',
        2 => 'title',
        3 => 'group_witl_first_day',
        4 => 'group_witl_second_day',
        5 => 'group_witl_group_days',
        6 => 'field_witl_post_mba_goals',
        7 => 'group_witl_third_day',
        8 => 'field_witl_facts_title',
        9 => 'field_witl_facts',
        10 => 'field_witl_day_of_week_2',
        11 => 'field_witl_journal_entry_2',
        12 => 'field_witl_day_of_week_1',
        13 => 'field_witl_day_of_week_3',
        14 => 'field_witl_journal_entry_1',
        15 => 'field_witl_journal_entry_3',
        16 => 'field_image_single_public',
        17 => 'group_witl_photo_wrap_mba',
        18 => 'field_year',
        19 => 'field_witl_under_photo_facts',
      ),
    ),
    'fields' => array(
      'group_witl_photo_info' => 'ds_content',
      'group_witl_photo_wrap' => 'ds_content',
      'title' => 'ds_content',
      'group_witl_first_day' => 'ds_content',
      'group_witl_second_day' => 'ds_content',
      'group_witl_group_days' => 'ds_content',
      'field_witl_post_mba_goals' => 'ds_content',
      'group_witl_third_day' => 'ds_content',
      'field_witl_facts_title' => 'ds_content',
      'field_witl_facts' => 'ds_content',
      'field_witl_day_of_week_2' => 'ds_content',
      'field_witl_journal_entry_2' => 'ds_content',
      'field_witl_day_of_week_1' => 'ds_content',
      'field_witl_day_of_week_3' => 'ds_content',
      'field_witl_journal_entry_1' => 'ds_content',
      'field_witl_journal_entry_3' => 'ds_content',
      'field_image_single_public' => 'ds_content',
      'group_witl_photo_wrap_mba' => 'ds_content',
      'field_year' => 'ds_content',
      'field_witl_under_photo_facts' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|week_in_the_life|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|week_in_the_life|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'week_in_the_life';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_witl_listing_wrap',
        1 => 'field_image_single_public',
        2 => 'title',
        3 => 'field_year',
        4 => 'field_witl_post_mba_goals',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'group_witl_listing_wrap' => 'ds_content',
      'field_image_single_public' => 'ds_content',
      'title' => 'ds_content',
      'field_year' => 'ds_content',
      'field_witl_post_mba_goals' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|week_in_the_life|teaser'] = $ds_layout;

  return $export;
}
