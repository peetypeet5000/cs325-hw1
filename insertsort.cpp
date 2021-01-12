#include "insertsort.h"

/*
 * This function takes a vector of ints and sorts them in ascending order, using the
 * merge sort algorithm.
 * 
 * Worst Case: O(n^2) - reverse sorted array
 * Best Case: Ω(n) - sorted array
 *
 * Params:
 *   array - a referance to a vector containing an array of unsorted ints
 */
void insert_sort(std::vector<int> &array) {
    int curr, key;

    for(long unsigned int j = 1; j < array.size(); j++) {
        key = array[j];
        curr = (j - 1);

        while(curr >= 0 && array[curr] > key) {
            array[curr + 1] = array[curr];
            curr--;
        }
        array[curr + 1] = key;
    }
}