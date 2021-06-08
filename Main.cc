#include <iostream>
#include "convert.h"
#include <string>
using string = std::string;




int main()
{
    int f_currency, s_currency;
    double amount, e_rate;
    double result;
    string c_name;


    std::cout << "Choose the currency you want to convert from:\n" << std::endl;
    std::cout << "(1)EUR - (2)USD - (3)JPY\n";
    std::cin >> f_currency;

    std::cout << "Choose the currency you want to convert to:\n" << std::endl;
    std::cout << "(1)EUR - (2)USD - (3)JPY\n";
    std::cin >> s_currency;

    std::cout << "Enter the amount of money:\n" << std::endl;
    std::cin >> amount;

    Convert currency;

    currency.setCurrency(f_currency, s_currency,e_rate, c_name);

    Convert output;
    
    output.convertion(amount, e_rate, result);

    std::cout << "The Output from the Class is : " << result << " " <<c_name << std::endl;

    
    

    



    

    return 0;
}