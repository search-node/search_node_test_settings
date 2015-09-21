<?php
/**
 * @file
 * search_node_test_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function search_node_test_settings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_node';
  $page->task = 'page';
  $page->admin_title = 'Search node';
  $page->admin_description = '';
  $page->path = 'search-node';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_node__panel';
  $handler->task = 'page';
  $handler->subtask = 'search_node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9eaebac8-760e-4a81-b72a-b71c4e1cfc93';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93d2cfc8-d1d0-4bc6-861d-1e08a9488899';
    $pane->panel = 'middle';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'search_node' => array(
        'id' => '1442524761',
        'server' => 'search_node',
        'index' => 'test_data',
        'options' => array(
          'cache_expire' => '30',
          'size' => '8',
          'fields' => array(
            'body:value' => 'body:value',
            'title' => 'title',
            'changed' => 0,
            'created' => 0,
            'nid' => 0,
            'search_api_language' => 0,
          ),
          'filters' => array(
            'field_level' => 'field_level',
            'field_teknologi' => 'field_teknologi',
          ),
        ),
        'intervals' => array(
          'fields' => array(
            'body:value' => 0,
            'changed' => 0,
            'created' => 0,
            'nid' => 0,
            'search_api_language' => 0,
            'title' => 0,
          ),
        ),
        'forces' => array(
          'field' => '_none_',
          'selected' => array(),
        ),
        'templates' => array(
          'box' => '/sites/all/modules/search_node_page/templates/angular/search.html',
          'result' => '/sites/all/modules/search_node_page/templates/angular/result.html',
          'pager' => '/sites/all/modules/search_node_page/templates/angular/pager.html',
        ),
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '93d2cfc8-d1d0-4bc6-861d-1e08a9488899';
    $display->content['new-93d2cfc8-d1d0-4bc6-861d-1e08a9488899'] = $pane;
    $display->panels['middle'][0] = 'new-93d2cfc8-d1d0-4bc6-861d-1e08a9488899';
    $pane = new stdClass();
    $pane->pid = 'new-2021af1b-5155-44bb-8187-a1ac77104c4c';
    $pane->panel = 'middle';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2021af1b-5155-44bb-8187-a1ac77104c4c';
    $display->content['new-2021af1b-5155-44bb-8187-a1ac77104c4c'] = $pane;
    $display->panels['middle'][1] = 'new-2021af1b-5155-44bb-8187-a1ac77104c4c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-93d2cfc8-d1d0-4bc6-861d-1e08a9488899';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_node'] = $page;

  return $pages;

}
