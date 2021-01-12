#include "insertTime.h"


/*
 * This program will output timing data insert sorting arrays of ints of various sizes
 */
int main() {
    srand(time(NULL));

    for(int n = 10000; n < 100001; n = n + 10000) {
        std::vector<int> data = random_numbers(n);

        long int start_time = get_time_mil();

        insert_sort(data);

        long int end_time = get_time_mil();

        std::cout << "\nInsert sorted n=" << n << " elements in " << end_time - start_time << " ms.";

    }

    std::cout << "\n";
    
}
