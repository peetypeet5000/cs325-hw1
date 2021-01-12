#include "insert.h"

int main() {
    //get data from file
    std::vector<std::vector<int>> data;
    data = read_file(data);

    //print unsorted
    std::cout << "\nUnsorted Data: \n";
    print_array(data);

    //create another vector for sorted data
    std::vector<std::vector<int>> sorted_data(data.size());

    //sort each line individually
    for(unsigned long int i = 0; i < data.size(); i++) {
        sorted_data[i] = data[i]; //copy data to sort
        insert_sort(sorted_data[i]);
    }
    
    //print sorted data
    std::cout << "\nSorted Data: \n";
    print_array(sorted_data);

    return 0;
}



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