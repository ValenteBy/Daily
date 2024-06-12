#include <iostream>
#include <fstream>
#include <filesystem>

#include <string>

#include "myheader.h"

namespace fs=std::filesystem;

void create_file()
{
    std::cout << "Digite o nome do seu novo arquivo: ";
    std::string input_new_file = "";
    std::getline(std::cin, input_new_file);
    input_new_file+=".txt";
    if(no_create_file(input_new_file))\
        create_file();
    else
    {
        std::ofstream  MyFile(input_new_file);
        std::cout << "Create file!!\n";

        MyFile.close();
    }
    //MyFile.close();
}

void seach_files_txt()
{
    
}

bool no_create_file(std::string filesearch)
{
    if(fs::exists(filesearch))
    {
        std::cout <<"ARQUIVO JÁ CRIADO!\nTente novamente!\n";
        return true;
    }
    return false;
}