Drupal.behaviors.color = function (context) {
  $('h1.title > sup').remove();
  $('<sup>Beta</sup>').appendTo('h1.title');
  $('#enews-preview').find('span.ext').remove();
  $('#enews-wrapper').hover(function(){
    $(this).css('opacity', 0.9);
  },function(){
    $(this).css('opacity', 0.3);
  });
  var f = $.farbtastic('#enews-picker');
  var p = $('#enews-picker').css('opacity', 0.25);
  var selected;
  var inputs = [];
  var focused = null;

  $('.enews-palette').each(function () { 
    var i = inputs.length;
    this.i = i;
    inputs.push(this);
    f.linkTo(this);
    $(this).css('opacity', 0.75); 

    var name = $(this).attr('name').replace('palette[','').replace(']','');
    if(name == 'link'){
      $(this).css('background-color', $('#enews-preview a').css('color'));
    }
    else if(name == 'text'){
      var c = $('#enews-preview').find('[data-type=base]').css('color');
      $(this).css('background-color', c);
    }
    else{
      var c = $('#enews-preview').find('[data-type='+name+']').css('background-color');
      $(this).css('background-color', c);
    }
  });

  $('.enews-palette').focus(function() {
    var input = this;
    focused && $(focused).unbind('keyup', f.updateValue)
        .unbind('keyup', preview).unbind('keyup', resetScheme)
        .parent().removeClass('item-selected');
    if (selected) {
      $(selected).css('opacity', 0.75).removeClass('enews-selected');
    }
    f.linkTo(function(color){
      callback(input, color, true, false);
    });
    f.setColor(this.value);
    p.css('opacity', 1);
    $(selected = this).css('opacity', 1).addClass('enews-selected');
    $(focused).keyup(f.updateValue).keyup(preview).keyup(resetScheme);
  });
  
  $('#edit-scheme').change(function () {
    var colors = this.options[this.selectedIndex].value;
    if (colors != '') {
      colors = colors.split(',');
      for (i in colors) {
        callback(inputs[i], colors[i], false, true);
      }
      preview();
    }
  });

  $('#enews-result').click(function(){
    var result = $('#enews-preview').html();
    var encoded = $("<div/>").text(result).html();
    encoded = encoded.replace(/%7B/g, '{').replace(/%7D/g, '}');
    var popup = '<div id="enews-result-cbox"><textarea rows="8" style="width:430px;height:210px;" onclick="this.select();">'+encoded+'</textarea><div align="center">選擇上方產生的電子報，按 Ctrl+C 複製，貼上到你的編輯器</div></div>';
    $.colorbox({
      html:popup,
      title:'電子報產生結果',
      width:'450px',
      height:'300px',
    });
  });

  function preview(){
    $('.enews-palette').each(function(){
      var name = $(this).attr('name').replace('palette[','').replace(']','');
      var color = $(this).css('background-color');
      if(name == 'link'){
        $('#enews-preview a').css('color', color);
      }
      else if(name == 'text'){
        var p = $('#enews-preview').find('[data-type=base]').css('color', color);
      }
      else{
        var p = $('#enews-preview').find('[data-type='+name+']');
        p.css('background-color', color);
      }
    });
  }
  function resetScheme() {
    $('#edit-scheme').each(function () {
      this.selectedIndex = this.options.length - 1;
    });
  }

  /**
   * Callback for Farbtastic when a new color is chosen.
   */
  function callback(input, color, propagate, colorscheme) {
    // Set background/foreground color
    $(input).css({
      backgroundColor: color,
      'color': f.RGBToHSL(f.unpack(color))[2] > 0.5 ? '#000' : '#fff'
    });

    preview();
    // Change input value
    if (input.value && input.value != color) {
      input.value = color;

      // Update locked values

      // Reset colorscheme selector
      if (!colorscheme) {
        resetScheme();
      }
    }
  }
}

