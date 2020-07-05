<?php

/** Show Errors */
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

/**
 * Show Errors Method.
 * 
 * @param array $data
 * 
 * @return void
 */
function dd($data = []): void
{
    echo "<pre>";
    print_r($data);
    echo "</pre>";
}
