
#include <iostream>
#include "Helpers.h"

int main()
{
    int Number1 = 0;
    int Number2 = 0;
    std::cout << "Enter Number 1: ";
    std::cin >> Number1;
    
    std::cout << "Enter Number 2: ";
    std::cin >> Number2;
    std::cout << QuadratSum(Number1, Number2);
}

