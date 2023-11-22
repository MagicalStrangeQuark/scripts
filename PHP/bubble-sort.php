<?php

function bubbleSort(array $array): array
{
    $size = count($array);

    for ($i = 0; $i < $size - 1; $i++) {
        for ($j = 0; $j < $size - $i - 1; $j++) {
            if ($array[$j] > $array[$j + 1]) {
                $temp = $array[$j];
                $array[$j] = $array[$j + 1];
                $array[$j + 1] = $temp;
            }
        }
    }

    return $array;
}

var_dump(
    bubbleSort([64, 34, 25, 12, 22, 11, 90])
);
