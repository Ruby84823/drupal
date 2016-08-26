jQuery(document).ready(function($){

  $(document).ready(function() {
    //$('.slick__arrow').after($('.slick-dots').clone(true));
    for (var i = 0; i < $('.slick').length; i++) {
      $('.slick').eq(i).find('.slick__arrow').after($('.slick').eq(i).find('.slick-dots'));
    }
  });

})
