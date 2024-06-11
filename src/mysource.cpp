#include <iostream>
#include <fstream>
#include <string>

#include "myheader.h"

void create_file()
{
    std::string input_new_file = "";
    std::getline(std::cin, input_new_file);
    input_new_file+=".txt";

    std::ofstream  MyFile(input_new_file);
    std::cout << "Create file!!\n";

    MyFile.close();
}