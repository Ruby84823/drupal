
	$(document).ready(function(){

		$(window).load(function(){
			$("body").attr("class", "go").addClass("animated zoomIn" );
		});


	$( ".hover_demo" ).hover(
  function() {
    $( ".hover_demo").addClass( "animated bounce infinite" );
  }, function() {
    $( ".hover_demo").removeClass( "animated bounce infinite" );
  }
);

	$('.demo1').addClass('animated infinite bounceOutLeft')

	$('.click_demo').click(function(){
		$(this).toggleClass('animated rotateIn')
	});

	// $('.hover_demo').hover(function(){
	// 	$('.hover_demo').addClass('animated bounce')
	// });


	$('.leave').click(function(){
		$("body").attr("class", "go").addClass('animated bounceOutLeft')
	},2000);


});