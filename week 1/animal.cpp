/********************************************************************
*** Author: Michael McCabe
*** Date: 09/22/2017
*** Description: A simple program where you enter your favorite animal and the program tells you that.
********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout <<"." << std::endl;

    return 0;
} 
