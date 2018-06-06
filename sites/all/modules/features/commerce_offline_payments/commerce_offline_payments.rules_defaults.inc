<?php
/**
 * @file
 * commerce_offline_payments.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_offline_payments_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_payment_via_cash'] = entity_import('rules_config', '{ "commerce_payment_payment_via_cash" : {
      "LABEL" : "Payment via Cash",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_payment_via_cash" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "payment_via_cash"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_payment_via_cash_slip_bank_'] = entity_import('rules_config', '{ "commerce_payment_payment_via_cash_slip_bank_" : {
      "LABEL" : "Payment via Cash Slip (Bank)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_payment_via_cash_slip_bank_" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "payment_via_cash_slip_bank_"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_payment_via_cheque'] = entity_import('rules_config', '{ "commerce_payment_payment_via_cheque" : {
      "LABEL" : "Payment via Cheque",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment", "rules" ],
      "ON" : {
        "commerce_payment_methods" : [],
        "node_insert--upload_cheque" : { "bundle" : "upload_cheque" }
      },
      "DO" : [
        { "commerce_payment_enable_payment_via_cheque" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "payment_via_cheque"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_payment_via_neft'] = entity_import('rules_config', '{ "commerce_payment_payment_via_neft" : {
      "LABEL" : "Payment via NEFT",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_payment_via_neft" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "payment_via_neft"
          }
        }
      ]
    }
  }');
  return $items;
}
