<?php

function binarySearch(array $array, int $item): int|null
{
    $low = 0;
    $high = count($array) - 1;

    while ($low <= $high) {
        $meio = (int) (($low + $high) / 2);
        $valorMeio = $array[$meio];

        //print_r($low . ' - ' . $high . ' - ' . $valorMeio . '<br>');

        if ($valorMeio === $item) {
            return $meio;
        } elseif ($valorMeio > $item) {
            $high = $meio;
        } else {
            $low = $meio;
        }
    }

    //print_r("here...");

    return null;
}

$array = range(1, 1000);

$item = binarySearch($array, 51);

print_r($item);

/*
Question 1: Binary Search - Given an array of integers which is sorted in ascending order, and a target integer, write a function to search for whether the target integer is there in the given array.
If it is there then return its index. Otherwise, return -1. You must write an algorithm with O(log n) runtime complexity. 
*/

/*
Question 2: Search in Rotated Sorted array- You are given an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2]. Given an integer target, return the index of target if it is in the array, else return -1.
You must write an algorithm with O(log n) runtime complexity.
*/