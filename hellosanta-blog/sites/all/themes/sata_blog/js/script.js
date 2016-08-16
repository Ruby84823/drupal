/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function($, Drupal, window, document, undefined) {


    // To understand behaviors, see https://drupal.org/node/756722#behaviors
    Drupal.behaviors.my_custom_behavior = {
        attach: function(context, settings) {

            //code start------------------------------------------------------------------------------------------------------------------------------------------
            //code for block class--------------------
            function nodeClass() {
                if ($(".node div").hasClass("node-style")) {
                    var v = $(".node div").attr('class');
                    $("body").addClass(v);
                }
            };
            nodeClass();

            function bookclass() {
                var i = $(".book-navigation .page-links a").length;
                alert(i);
            }


            //bookclass();
            $(window).load(function() {
                $(".not-logged-in").addClass("animated fadeIn");
                $(".line-icon").prepend("<div class='style'><span class='line1'></span><span class='line2'></span><span class='line1'></span></div>");
                $(".circle-icon").prepend("<div class='style'><span class='circle1'><span class='circle2'></span></span>");
                $(".triangle-icon").prepend("<div class='style'><span></span></div>")
                $(".math-icon").prepend("<div class ='style'><span></span></div>");

                $('body').prepend('<div class ="responsive-menu"></div>');
                $(".responsive-menu").html($("#block-menu-menu-santa-menu").html());
                $("#header .header-wrapper").append('<div class="responsive-menu-nav"><span class ="nav-before"></span><span class ="nav"></span><span class ="nav-after"></span></div>')

                responsive_menu();
                responsive_menu_bar_height();
                $("body").addClass("responsive-menu-style");

                //responsive-menu nav觸發click事件
                $(".responsive-menu-nav").click(function() {
                    $("body").toggleClass("responsive-menu-style-click");

                    //menu item fade in
                    var delay = 0;
                    $('.responsive-menu ul li').each(function() {
                        var $li = $(this);
                        setTimeout(function() {
                            $li.toggleClass('responsive-menu-fade-in');
                        }, delay += 80); // delay 100 ms
                    });
                });

                //$('body').disablescroll();
                // $('.responsive-menu').disablescroll("undo");

                $('.responsive-menu').scrollLock();
                $('.responsive-menu .menu__item').removeAttr( "style" );

            });

            function responsive_menu() {
                if ($(window).width() < 768) {
                    $("#header .header-wrapper .region-header").hide();
                    $(".responsive-menu-nav,.responsive-menu").show();
                } else {
                    $("#header .header-wrapper .region-header").show();
                    $(".responsive-menu-nav").hide();
                };
            }

            function responsive_menu_bar_height() {
                if ($("#header").hasClass("header-fix-scroll")) {
                    var responsive_menu_height = $(".header-fix").innerHeight();
                } else {
                    var responsive_menu_height = $(".header-relative").innerHeight();
                };
                $('.responsive-menu').css({
                    "height": $(window).height() - responsive_menu_height,
                })
            }

            //code for icon style----------------------------------------------------------------------------


            //for math-icon style------

            $(function() {
                count = 0;
                wordsArray = ["1", "2", "3"];
                setInterval(function() {
                    count++;
                    $(".math-icon .style span").fadeOut(400, function() {
                        $(this).text(wordsArray[count % wordsArray.length]).fadeIn(400);
                    });
                }, 2000);
            });

            //end for icon style


            //code for fix menu fade in/out----------------------------------------------------------
            $(window).scroll(function() {
                var header_height = $(".header-fix").innerHeight() + 100;
                if ($(window).scrollTop() > header_height) {
                    $(".header-fix").addClass("header-fix-scroll");
                } else {
                    $(".header-fix").removeClass("header-fix-scroll");
                };
            });

            //end code e for fix menu fade in/out



            //code for responsive menu------------------------------------------------------------------------






            // $(document).ready(function() {
            //
            //     // 動畫庫
            //     Draggable.create(".views-field-field-image img", { type: "rotation", throwProps: true });
            //
            //     var tl = new TimelineLite();
            //     var tm = new TimelineMax();
            //     tl.from("#logo img",0.5,{x:300,autoAlpha:0})
            //     .staggerFrom("#block-menu-menu-santa-menu .menu__item", 0.5, {
            //         opacity: 0,
            //         cycle: {
            //             x: function(i) {
            //                 return i * 100;
            //             },
            //             ease: function(i) {
            //                 return Back.easeOut.config(i);
            //             }
            //         }
            //     }, 0.1)
            //     .staggerFrom("#block-menu-block-1 .menu__item", 0.5, {
            //         opacity: 0,
            //         cycle: {
            //             y: function(i) {
            //                 return i * 50;
            //             },
            //             ease: function(i) {
            //                 return Back.easeOut.config(i);
            //             }
            //         }
            //     }, 0.5)
            //     .staggerFrom("#block-block-2 .item", 0.5, {
            //       scale:0,rotation:-180,autoAlpha:0
            //     }, 0.5);
            //     // tl.timeScale(0.5);
            //
            // });


            $(window).resize(function() {
                responsive_menu();
            });
            $(window).scroll(function() {
                responsive_menu_bar_height();
            });

            function webformshow(abc){
            $(abc).prepend( "<div class='webformhide'><span class='right'></span><span class='left'></span></div>" );

            $(abc).after("<div id='webform-wrapper'></div>");

            var switch_webform = false;  
            var switch_webform_buttom=false;
            $(window).bind('scroll.webform', function() {
                if (switch_webform === false) {
                    if ($(window).scrollTop() + $(window).height() == $(document).height()) {
                        $(abc).fadeIn();
                        $('#webform-wrapper').fadeIn();
                        switch_webform = true;
                        switch_webform_buttom=true;
                    }
                }
            })
              $('.webformhide').click(function(){
                if(switch_webform_buttom!=false){
                  $('.right').css({
                    transform: 'rotate(720deg)'
                  });
                  $('.left').css({
                    transform: 'rotate(720deg)'
                  });
                  $('.left').css('top','35px');
                  switch_webform_buttom=false;
                  switch_webform = false;
                  setTimeout(function(){
                    $(abc).fadeOut();
                    $('#webform-wrapper').fadeOut();
                  },1000);
                  $(window).unbind('scroll.webform');
                }
              });

              $('#webform-wrapper').click(function(){
                $(abc).fadeOut();
                $('#webform-wrapper').fadeOut();
                switch_webform = false;
                switch_webform_buttom=false;
              });
          }
          webformshow('#block-webform-client-block-122');

            //end for responsive menu
            //alert("1111");









            //fade in effect
            // var k = $("#page #content .region-wrapper").find(".block-views").length;
            // $("#page #content .region-wrapper .block-views:not(:eq(0))").addClass("fade-in");
            // $(document).ready(function() {
            //     if (k > 1) {
            //         $('.fade-in .views-row').css({
            //             'opacity': '0'
            //         });
            //         $('.fade-in .views-row').addClass("shadow1");

            //         $(window).scroll(function() {
            //             $('.fade-in .views-row').each(function(i) {
            //                 var bottom_of_object = $(this).offset().top + $(this).outerHeight();
            //                 var bottom_of_window = $(window).scrollTop() + $(window).height();
            //                 if (bottom_of_window > bottom_of_object) {
            //                     $(this).animate({
            //                         'opacity': '1'
            //                     }, 500);
            //                     $('.fade-in .views-row').addClass("shadow2");
            //                 }
            //             });
            //         });
            //     } else {
            //         $('.views-row').not(":eq(0),:eq(1),:eq(2),:eq(3)").css({
            //             'opacity': '0'
            //         });
            //         $('.views-row').addClass("shadow1");
            //         $(window).scroll(function() {
            //             $('.views-row').each(function(i) {
            //                 var bottom_of_object = $(this).offset().top + $(this).outerHeight();
            //                 var bottom_of_window = $(window).scrollTop() + $(window).height();
            //                 if (bottom_of_window > bottom_of_object) {
            //                     $(this).animate({
            //                         'opacity': '1'
            //                     }, 500);
            //                     setTimeout(function() {
            //                         $('.views-row').addClass('shadow2');
            //                     }, 5000);
            //                 }
            //             });
            //         });
            //     };
            // });





            //end code--------------------------------------------------------------------------------------



        }
    };
})(jQuery, Drupal, this, this.document);
