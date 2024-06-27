#include <iostream>
#include "myheader.h"

int main(){

    //std::cout << "Digite o nome do seu novo arquivo: ";

    std::string str = "";
    std::cin >> str;
    str+=".txt";
    
    create_file(str);
    open_txt(str);
    
    return 0;
    
}