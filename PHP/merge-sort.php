<?php
function mergeSort(array $array): array
{
    $length = count($array);

    if ($length <= 1) {
        return $array;
    }

    // Divide o array ao meio
    $middle = (int)($length / 2);
    $left = array_slice($array, 0, $middle);
    $right = array_slice($array, $middle);

    // Recursivamente ordena as duas metades
    $left = mergeSort($left);
    $right = mergeSort($right);

    // Combina as duas metades ordenadas
    return merge($left, $right);
}

function merge(array $left, array $right): array
{
    $result = array();
    $leftLength = count($left);
    $rightLength = count($right);
    $i = $j = 0;

    // Combina as duas metades ordenadas
    while ($i < $leftLength && $j < $rightLength) {
        if ($left[$i] < $right[$j]) {
            $result[] = $left[$i];
            $i++;
        } else {
            $result[] = $right[$j];
            $j++;
        }
    }

    // Adiciona os elementos restantes, se houver, de ambas as metades
    while ($i < $leftLength) {
        $result[] = $left[$i];
        $i++;
    }

    while ($j < $rightLength) {
        $result[] = $right[$j];
        $j++;
    }

    return $result;
}

var_dump(
    mergeSort([17, 26, 93, 17, 77, 31, 44, 55])
);
