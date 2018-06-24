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

    var tax = 0;
    var tax_type = '';
    var total_amount = $(".page-user-orders.page-user-orders- .component-type-commerce-price-formatted-amount  td.component-total").text();
    $(".page-user-orders.page-user-orders- tr.all-taxes").each(function( index ) {

         tax_type += $( this ).text() + "+";
         total_tax = $("tr.all-taxes td.component-total").text();
         tax += parseFloat(total_tax.match(/[\d\.]+/));

    });
    tax_type = tax_type.slice(0,-1);
    var taxes = '<div class="bill-summary container"><div class="total-amount-with-GST"> Total Amount including GST: ' + total_amount +'</div><div class="total-taxes-type">' + tax_type + '= ₹' +  tax + '</div></div>';
    $(".page-user-orders.page-user-orders- .bank-details").before(taxes);



  });
})(jQuery);
