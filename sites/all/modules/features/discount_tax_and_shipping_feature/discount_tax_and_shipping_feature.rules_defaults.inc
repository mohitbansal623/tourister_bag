<?php
/**
 * @file
 * discount_tax_and_shipping_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function discount_tax_and_shipping_feature_default_rules_configuration() {
  $items = array();
  $items['commerce_shipping_service_shipping_rate'] = entity_import('rules_config', '{ "commerce_shipping_service_shipping_rate" : {
      "LABEL" : "Rate Shipping Rate",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "shipping_rate",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_sales_tax'] = entity_import('rules_config', '{ "commerce_tax_rate_sales_tax" : {
      "LABEL" : "Calculate Sales Tax",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "sales_tax" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "sales_tax"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_vat'] = entity_import('rules_config', '{ "commerce_tax_rate_vat" : {
      "LABEL" : "Calculate VAT",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "vat"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  return $items;
}
