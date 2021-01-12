#ifndef UTIL
#define UTIL

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::vector<int>> read_file(std::vector<std::vector<int>>&);
std::vector<std::vector<int>> parse_ints(std::vector<std::string>);
void print_array(const std::vector<std::vector<int>> &);

#endif


