#include <iostream>

//Ask user for favourite number 1-100
int main()
{
    //Variable declaration
    int favourite_number;
    
    //This is a string literal because it's literally what gets displayed
    std::cout << "Enter your favourite number between 1 and 100" << std::endl;
    //Notice insertion operator >>
    std::cin >> favourite_number;
    
    std::cout << "Your favourite number is: " << favourite_number <<std::endl;
    return 0;
}

//Purpose of compiling is to create obj files
//Cleaning a project will clear these obj files

//Compiler doesn't build project again if the
//project source code hasn't changed.