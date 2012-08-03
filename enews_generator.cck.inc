$content['type']  = array (
  'name' => 'Newsletter Template',
  'type' => 'enews',
  'description' => 'Create a template for newsletter.',
  'title_label' => 'Template name',
  'body_label' => '',
  'min_word_count' => '0',
  'help' => '',
  'node_options' =>
  array (
    'status' => true,
    'promote' => true,
    'sticky' => false,
    'revision' => false,
  ),
  'autosave' => 0,
  'language_content_type' => 0,
  'upload' => 1,
  'old_type' => 'enews',
  'orig_type' => 'enews',
  'module' => 'enews_generator',
  'custom' => '0',
  'modified' => '1',
  'locked' => '1',
  'reset' => '重設到預設值',
  'comment' => 2,
  'comment_default_mode' => 4,
  'comment_default_order' => 1,
  'comment_default_per_page' => 50,
  'comment_controls' => 3,
  'comment_anonymous' => 0,
  'comment_subject_field' => 1,
  'comment_preview' => 1,
  'comment_form_location' => 0,
  'comment_upload' => 0,
  'comment_upload_images' => 'none',
  'custom_breadcrumbs_show_form_table' => 'CUSTOM_BREADCRUMBS_TYPE_SHOW_FORM_TABLE',
);
$content['fields']  = array (
  0 =>
  array (
    'label' => 'Category',
    'field_name' => 'field_enews_cat',
    'type' => 'text',
    'widget_type' => 'optionwidgets_select',
    'change' => 'Change basic information',
    'weight' => '-4',
    'description' => '',
    'default_value' =>
    array (
      0 =>
      array (
        'value' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1 column
2 column left
2 column right
newsletter
card
',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'optionwidgets',
    'columns' =>
    array (
      'value' =>
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' =>
    array (
      'label' =>
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      5 =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 =>
  array (
    'label' => 'CSS',
    'field_name' => 'field_enews_css',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '-3',
    'rows' => '5',
    'size' => 60,
    'description' => '',
    'default_value' =>
    array (
      0 =>
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_enews_css][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' =>
    array (
      'field_enews_css' =>
      array (
        0 =>
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_enews_css][0][value',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' =>
    array (
      'value' =>
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' =>
    array (
      'label' =>
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      5 =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  2 =>
  array (
    'label' => 'HTML',
    'field_name' => 'field_enews_html',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '-2',
    'rows' => '5',
    'size' => 60,
    'description' => '',
    'default_value' =>
    array (
      0 =>
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_enews_html][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' =>
    array (
      'field_enews_html' =>
      array (
        0 =>
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_enews_html][0][value',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' =>
    array (
      'value' =>
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' =>
    array (
      'label' =>
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      5 =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' =>
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  3 =>
  array (
    'label' => 'Frame Image',
    'field_name' => 'field_enews_img',
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => '-1',
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => 'enews',
    'max_filesize_per_file' => '',
    'max_filesize_per_node' => '',
    'max_resolution' => 0,
    'min_resolution' => '100x100',
    'custom_alt' => 0,
    'alt' => '',
    'custom_title' => 0,
    'title_type' => 'textfield',
    'title' => '',
    'use_default_image' => 0,
    'default_image_upload' => '',
    'default_image' => NULL,
    'insert' => false,
    'insert_styles' =>
    array (
      0 => 1,
      'auto' => false,
      'link' => false,
      'image' => false,
      'imagecache_180x' => false,
      'imagecache_180x135' => false,
      'imagecache_260x' => false,
      'imagecache_360x270' => false,
      '180x135__colorbox' => false,
      '180x__colorbox' => false,
      '260x__colorbox' => false,
      '360x270__colorbox' => false,
      'customer_head__colorbox' => false,
      'features_1__colorbox' => false,
      'features_big__colorbox' => false,
      'features_others__colorbox' => false,
      'imagecache_customer_head' => false,
      'imagecache_features_1' => false,
      'imagecache_features_big' => false,
      'imagecache_features_others' => false,
    ),
    'insert_default' =>
    array (
      0 => 'auto',
    ),
    'insert_class' => '',
    'insert_width' => '',
    'description' => '',
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' =>
    array (
      'fid' =>
      array (
        'type' => 'int',
        'not null' => false,
        'views' => true,
      ),
      'list' =>
      array (
        'type' => 'int',
        'size' => 'tiny',
        'not null' => false,
        'views' => true,
      ),
      'data' =>
      array (
        'type' => 'text',
        'serialize' => true,
        'views' => true,
      ),
    ),
    'display_settings' =>
    array (
      'label' =>
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      5 =>
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'teaser' =>
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' =>
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      4 =>
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' =>
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'revision_information' => '4',
  'author' => '3',
  'options' => '5',
  'comment_settings' => '9',
  'menu' => '0',
  'book' => '1',
  'path' => '8',
  'attachments' => '7',
  'custom_breadcrumbs' => '6',
  'detailed_question' => '2',
);


