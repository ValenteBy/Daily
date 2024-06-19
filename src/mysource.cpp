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
}

void seach_files_txt()
{
    fs::path directory = "D:\\PastaCPP\\Projects\\Project_One\\build\\Debug";
    std::string type_file = ".txt";
    for(const auto& entry : fs::recursive_directory_iterator(directory))
    {
        if(entry.path().extension() == type_file)
            std::cout << entry.path() << std::endl;
    }
}

void modify_txt()
{
    std::string open;
    std::getline(std::cin, open);
    open+=".txt";

    std::ofstream outputFile(open);
    if(outputFile.is_open())
    {
        std::string str = "";
        std::getline(std::cin, str);
        outputFile << str << std::endl;
        outputFile.close();
    }
    else
    {
        std::cerr << "Nao abriu arquivo\n";
    }   
}

void open_txt()
{
    std::string open;
    std::getline(std::cin,open);
    open+=".txt";

    std::ifstream inputFile(open);
    if(inputFile.is_open())
    {
        std::string line;
        while(getline(inputFile,line))
        {
            std::cout << line << std::endl;
        }
    }
    else
    {
        std::cerr << "Nao leu\n";
    }
    
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