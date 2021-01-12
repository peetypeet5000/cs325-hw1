#include "file_io.h"


std::vector<std::vector<int>> read_file() {
    //open file
    std::ifstream file;
    file.open("data.txt");

    //init variables
    std::string line;
    std::vector<std::string> lines;
    std::vector<std::vector<int>> output;

    //tokenize file into lines
    if(file.is_open()) {
        while(getline(file, line, '\n')) {
            lines.push_back(line);
            
        }
    }

    //converts string vector into int vector
    output = parse_ints(lines);
    
    /* for checking
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < output[i].size(); j++) {
            std::cout << output[i][j] << " ";
        }

        std::cout << "\n";
        
    }
    */

    
    //close and return
    file.close();
    return output;
    

}


/*
 * This function takes a vector of string and seperates them into a 2d vector of ints.
 *
 * Params:
 *   lines - the 1D vector of string, with int's seperated by spaces
 */
std::vector<std::vector<int>> parse_ints(std::vector<std::string> lines) {
    //preallocated output with space for all lines
    std::vector<std::vector<int>> output(lines.size());

    std::string temp = ""; //for storing numbers before adding
    
    for(int i = 0; i < lines.size(); i++) { //for each line
        for(int j = 0; j < (lines[i].size() + 1); j++) {  //for each char in line

            //if char is a number, add to temp
            if(lines[i][j] > 47 && lines[i][j] < 58) {
                temp += lines[i][j]; //add char to temp string

            } 
            //else, it must be a space, so insert temp number into int array
            else if(temp != "") {
                //std::cout << "\nadding " << std::stoi(temp) << " to vector";
                output[i].push_back(std::stoi(temp));
                temp.clear();

            }

        }
    }
    
    return output;
}