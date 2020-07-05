<?php

require_once "display_errors.php";

const _CPF_REGEX = '/[0-9]{3}\.[0-9]{3}\.[0-9]{3}\-[0-9]{2}$/';

function CPF(string $str): bool
{
    return ((int) preg_match_all(_CPF_REGEX, $str)) === 1 ? true : false;
}

$CPF_TRUE = [
    '040.453.410-48',
    '000.000.000-00',
    '999.999.999-99'
];

foreach ($CPF_TRUE as $INFO) {
    echo CPF($INFO) === true;
}

$CPF_FALSE = [
    '04045341048',
    '123.456.789-123',
];

foreach ($CPF_FALSE as $INFO) {
    echo CPF($INFO) === false;
}
