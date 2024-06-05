#include <iostream>
#include <direct.h>
#include "myheader.h"

void myFunction(){

    std::cout << "Hello, cmake\n";

    //_chdir("D:\\github");
    //system("dir ");
    //system("dir");

}

void myFunctionCMD(){
    _chdir("cd ..");
    system("dir");
}