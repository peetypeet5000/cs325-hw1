#include "insert.h"


/*
 * This program will parse the data from data.txt and sort it, printing out
 * to the standard output
 */
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
