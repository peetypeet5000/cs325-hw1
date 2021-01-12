#include "insert.h"

int main() {
    std::vector<std::vector<int>> data;
    data = read_file(data);

    std::cout << "\nUnsorted Data: \n";
    print_array(data);

    std::vector<std::vector<int>> sorted_data(data.size());\

    for(unsigned long int i = 0; i < data.size(); i++) {
        sorted_data[i] = data[i]; //copy data to sort
        insert_sort(sorted_data[i]);
    }
    
    std::cout << "\nSorted Data: \n";
    print_array(sorted_data);

    return 0;
}


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