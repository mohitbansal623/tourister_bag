(function($) {
  $(document).ready(function(){

    $('#block-views-view-banner-block-1 .view-content').slick({
      arrows: false,
      slidesToShow:1,
      slidesToScroll: 1,
      autoplay: true,
      autoplaySpeed: 10000,
      dots:true,
      pauseOnHover: true,
      pauseOnFocus: false
    });
    //
    //
    // $('#block-views-view-banner-block-1 .view-content .views-row').not('.slick-initialized').slick({
    //   arrows: true,
    //   slidesToShow:3,
    //   slidesToScroll: 1,
    //   dots:false,
    //   infinite: false,
    //   responsive: [
    //     {
    //       breakpoint: 992,
    //       settings: {
    //         slidesToShow: 2,
    //       }
    //     },
    //     {
    //       breakpoint: 500,
    //       settings: {
    //         slidesToShow: 1,
    //       }
    //     }
    //   ]
    // });


  });
})(jQuery);
