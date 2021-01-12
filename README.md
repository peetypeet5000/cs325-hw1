# cs325 Homework 1
## Program Requirements:
### Part 1:
Implement merge sort and insertion sort to sort anarray/vector of integers.  You may implement the algorithms in C, C++ or Python, name the programs “mergesort” and “insertsort”. Your programs should be able to read inputs from a file called “data.txt” where the first value of each line is the number of integers that need to be sorted, followed by the integers. Example values for data.txt:  
4 19 2 5 11  
8 1 2 3 4 5 6 1 2  
The output will be displayed to the terminal. For the above example the output would be:  
2 5 11 19  
1 1 2 2 3 4 5 6   
### Part 2:
Modify code- Now that you have verified that your code runs correctly using the data.txt input file, you can modify the code to collect running time data.  Instead of reading arrays from the file data.txt and sorting, you will now generate arrays of size ncontaining random integer values from 0 to 10,000 to sort.  Use the system clock to record the running times of each algorithm for ten different values of n for example: n = 5000, 10000, 15000, 20,000, ..., 50,000.You may need to modify the values of n if an algorithm runs too fast or too slow to collect the running time data(do not collect times over a minute). Output to the terminal the array size n and time to sort.  Name these new programs insertTime and mergeTime.  


