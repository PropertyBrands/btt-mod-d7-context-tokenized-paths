<?php

/**
 * Class context_tokenized_paths
 * Override the default context_condition_path class to support tokenized
 * values.
 */
class context_tokenized_paths extends context_condition_path {
  protected function match($subject, $patterns, $path = FALSE) {
    foreach($patterns as $ind => $pattern) {
      $patterns[$ind] = token_replace($pattern);
    }
    return parent::match($subject, $patterns, $path);
  }
}