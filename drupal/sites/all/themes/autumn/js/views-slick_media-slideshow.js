jQuery(document).ready(function($) {
  function item_image_cover($block) {
    var block = $($block);
    for (var i = 0; i < block.find('img').length; i++) {
      var image_src = block.find('img').eq(i).attr('src');
      block.find('img').css('display', 'none');
      block.find('img').eq(i).parent().css({
        'background-image': 'url(' + image_src + ')',
        'background-size': 'cover',
        'background-repeat': 'no-repeat',
        'background-position': 'center',
      });
    }
    //origin height
    $("<img>").attr("src", $($block).find('img').attr("src")).load(function() {
      var realWidth = this.width;
      var realHeight = this.height;
      //alert("Original width=" + realWidth + ", " + "Original height=" + realHeight);
      $($block).find('img').parent().css('height', realHeight);
    });
    
  }
  item_image_cover('.views-slick_media-slideshow');



  // $(document).ready(function() {
  //   var slide_heigh = $(window).height()-$('#header').innerHeight();
  //   $('.views-slick_media-slideshow img').parent().css('height',slide_heigh);
  //   $('.views-slick_media-slideshow video').parent().css('height',slide_heigh);
  // });
  //
  // $(window).resize(function() {
  //   var slide_heigh = $(window).height()-$('#header').innerHeight();
  //   $('.views-slick_media-slideshow img').parent().css('height',slide_heigh);
  // });

  //auto play viedo
  $(document).ready(function() {
          var videoIndex = [];
          $('.slick-slide').each(function() {
            $(this).find('video')[0] !== undefined ? videoIndex.push($(this).attr('data-slick-index')) : '';
          });
          if ($.inArray('0', videoIndex) != -1) {
            var v = $('.slide--0').find('video')[0];
            v.paused == true ? v.play() : v.pause();
          }
          $(".slick").on('beforeChange', function(event, slick, currentSlide, nextSlide) {
            if ($.inArray(currentSlide + '', videoIndex) != -1) {
              var v = $('.slide--' + currentSlide).find('video')[0];
              v.paused == true ? v.play() : v.pause();
            }
            if ($.inArray(nextSlide + '', videoIndex) != -1) {
              var v = $('.slide--' + nextSlide).find('video')[0];
              v.paused == true ? v.play() : v.pause();
            }
          });
        });

})
