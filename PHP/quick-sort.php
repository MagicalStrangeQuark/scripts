<?php

function quickSort($array)
{
    $length = count($array);

    if ($length <= 1) {
        return $array;
    } else {
        $pivot = $array[0];
        $left = $right = [];

        for ($i = 1; $i < count($array); $i++) {
            if ($array[$i] < $pivot) {
                $left[] = $array[$i];
            } else {
                $right[] = $array[$i];
            }
        }

        return array_merge(quickSort($left), [$pivot], quickSort($right));
    }
}

// Exemplo de uso:
$array = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5];
$sortedArray = quickSort($array);

echo "Array original: " . implode(", ", $array) . "\n";
echo "Array ordenado: " . implode(", ", $sortedArray) . "\n";
