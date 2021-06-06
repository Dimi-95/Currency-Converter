#include <iostream>
#include "declare.h"




int main()
{
    int f_currency, s_currency;
    double val1, val2;

    std::cout << "Choose the currency you want to convert from:\n" << std::endl;
    std::cout << "(1)EUR - (2)USD - (3)JPY\n";
    std::cin >> f_currency;

    std::cout << "Choose the currency you want to convert to:\n" << std::endl;
    std::cout << "(1)EUR - (2)USD - (3)JPY\n";
    std::cin >> s_currency;

    std::cout << "Enter the amount of money:\n" << std::endl;
    std::cin >> val1;

    currency(f_currency, s_currency,val2);

    convert output;

    output.convertion(val1, val2);

    std::cout << "The Output is: "<< val2 << std::endl;
    
    

    



    

    return 0;
}