<?php
/**
 * @file
 * hello_santa_web_design_drupal_and_more_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hello_santa_web_design_drupal_and_more_rules_default_rules_configuration() {
  $items = array();
  $items['scheduler_remove_publish_date_component'] = entity_import('rules_config', '{ "scheduler_remove_publish_date_component" : {
      "LABEL" : "Remove scheduled publishing date",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Scheduler" ],
      "REQUIRES" : [ "scheduler" ],
      "USES VARIABLES" : { "scheduler_node" : {
          "type" : "node",
          "label" : "The node scheduled for publishing via Scheduler"
        }
      },
      "IF" : [
        { "scheduler_condition_node_is_scheduled_for_publishing" : { "node" : [ "scheduler-node" ] } }
      ],
      "DO" : [
        { "scheduler_remove_publish_date_action" : { "node" : [ "scheduler-node" ] } }
      ]
    }
  }');
  $items['scheduler_remove_unpublish_date_component'] = entity_import('rules_config', '{ "scheduler_remove_unpublish_date_component" : {
      "LABEL" : "Remove scheduled unpublishing date",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Scheduler" ],
      "REQUIRES" : [ "scheduler" ],
      "USES VARIABLES" : { "scheduler_node" : {
          "type" : "node",
          "label" : "The node scheduled for unpublishing via Scheduler"
        }
      },
      "IF" : [
        { "scheduler_condition_node_is_scheduled_for_unpublishing" : { "node" : [ "scheduler-node" ] } }
      ],
      "DO" : [
        { "scheduler_remove_unpublish_date_action" : { "node" : [ "scheduler-node" ] } }
      ]
    }
  }');
  $items['scheduler_send_email_after_publishing_node'] = entity_import('rules_config', '{ "scheduler_send_email_after_publishing_node" : {
      "LABEL" : "Send e-mail when content is published by Scheduler",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Scheduler" ],
      "REQUIRES" : [ "rules", "scheduler" ],
      "ON" : { "scheduler_node_has_been_published_event" : [] },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "node:author:mail" ] } } ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "\\u0027[node:title]\\u0027 has been published on [site:name]",
            "message" : "Dear [node:author:name],\\r\\nYour [node:type] \\u0027[node:title]\\u0027 has been published on [site:name].\\r\\nThe link is [node:url]\\r\\n"
          }
        }
      ]
    }
  }');
  $items['scheduler_send_email_after_unpublishing_node'] = entity_import('rules_config', '{ "scheduler_send_email_after_unpublishing_node" : {
      "LABEL" : "Send e-mail when content is unpublished by Scheduler",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Scheduler" ],
      "REQUIRES" : [ "rules", "scheduler" ],
      "ON" : { "scheduler_node_has_been_unpublished_event" : [] },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "node:author:mail" ] } } ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "\\u0027[node:title]\\u0027 has been unpublished on [site:name]",
            "message" : "Dear [node:author:name],\\r\\nYour [node:type] \\u0027[node:title]\\u0027 has been unpublished on [site:name].\\r\\nThe link is [node:url]\\r\\n"
          }
        }
      ]
    }
  }');
  $items['scheduler_set_publish_date_component'] = entity_import('rules_config', '{ "scheduler_set_publish_date_component" : {
      "LABEL" : "Set scheduled publishing date",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Scheduler" ],
      "REQUIRES" : [ "scheduler" ],
      "USES VARIABLES" : {
        "scheduler_node" : { "type" : "node", "label" : "The node for publishing via Scheduler" },
        "scheduler_publish_on_date" : {
          "type" : "date",
          "label" : "The publishing date to be used by Scheduler"
        }
      },
      "IF" : [
        { "scheduler_condition_publishing_is_enabled" : { "node" : [ "scheduler-node" ] } }
      ],
      "DO" : [
        { "scheduler_set_publish_date_action" : {
            "node" : [ "scheduler-node" ],
            "date" : [ "scheduler-publish-on-date" ]
          }
        }
      ]
    }
  }');
  $items['scheduler_set_unpublish_date_component'] = entity_import('rules_config', '{ "scheduler_set_unpublish_date_component" : {
      "LABEL" : "Set scheduled unpublishing date",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Scheduler" ],
      "REQUIRES" : [ "scheduler" ],
      "USES VARIABLES" : {
        "scheduler_node" : { "type" : "node", "label" : "The node for unpublishing via Scheduler" },
        "scheduler_unpublish_on_date" : {
          "type" : "date",
          "label" : "The unpublishing date to be used by Scheduler"
        }
      },
      "IF" : [
        { "scheduler_condition_unpublishing_is_enabled" : { "node" : [ "scheduler-node" ] } }
      ],
      "DO" : [
        { "scheduler_set_unpublish_date_action" : {
            "node" : [ "scheduler-node" ],
            "date" : [ "scheduler-unpublish-on-date" ]
          }
        }
      ]
    }
  }');
  return $items;
}
