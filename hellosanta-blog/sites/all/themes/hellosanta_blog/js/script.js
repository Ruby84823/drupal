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

            // Place your code here.
            (function($) {
                // Jquery onload function.
                $(document).ready(function() {
                    jQuery(function($) {
                        function fixDiv() {
                            var $cache = $('#header');

                            if ($(window).scrollTop() > 0)

                                $cache.css({
                                    'position': 'fixed',
                                    'top': '0px',
                                    'z-index': '300',
                                }),
                                $("#header").addClass("animated fadeInDown");
                            else
                                $cache.css({
                                    'position': 'relative',
                                    'top': 'auto',
                                }),
                            $("#header").removeClass("animated fadeInDown");
                        }

                        $(window).scroll(fixDiv);
                        fixDiv();
                    });
                });
            })(jQuery);

            (function($) {
                // Jquery onload function.
                $(document).ready(function() {
                    jQuery(function($) {
                        function fixDiv() {
                            if ($(window).scrollTop() > 150)
                                $("#block-views-about-usblock-block img").addClass("animated tada");
                            else
                            	$("#block-views-about-usblock-block img").removeClass("animated tada");
                        }
                        $(window).scroll(fixDiv);
                        fixDiv();
                    });
                });
            })(jQuery);

        }
    };

})(jQuery, Drupal, this, this.document);
