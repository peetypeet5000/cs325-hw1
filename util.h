#ifndef UTIL
#define UTIL

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

std::vector<std::vector<int>> read_file(std::vector<std::vector<int>>&);
std::vector<std::vector<int>> parse_ints(std::vector<std::string>);
void print_array(const std::vector<std::vector<int>> &);
std::vector<int> random_numbers(int);

#endif


