#include <iostream>
#include "myheader.h"

std::string directory;

int main()
{
    
    if(directory.empty())
    {
        std::cout << "Colocar nome diretorio: ";
        std::cin >> directory;
    }else{
        std::string str = "";
        std::cin >> str;
        str+=".txt";
    
        create_file(str);
        open_txt(str);
    }
    
    return 0;
    
}

//struct
//Nome do usuario e data da conta criada
//Chave e local de