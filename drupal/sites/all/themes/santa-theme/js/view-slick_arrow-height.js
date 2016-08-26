jQuery(document).ready(function($) {
  function slick_arrow($slideshow, $field_class) {
    var slideshow = $($slideshow);
    var arrow_height = slideshow.find($field_class).height();
    slideshow.find('.slick__arrow').css('height', arrow_height);
  }



  $(window).load(function() {
    slick_arrow('.views-slick-slideshow-carousel', '.field-type-image');
  });
  $(window).resize(function() {
  slick_arrow('.views-slick-slideshow-carousel', '.field-type-image');
  });



});
