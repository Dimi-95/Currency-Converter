#include "convert.h"

//it gives us the number for the first and the second chosen currency
void Convert::setCurrency(int f_currency, int s_currency, double &e_rate, string &c_name)
{

    if (f_currency == 1)
    {
        if(s_currency == 1)
        {   
            std::cout << "The result is the same as entered as you are trying to convert into the same currency" << std::endl;
        }
        else if(s_currency == 2)
        {
            
            e_rate = 1.21666;
            c_name = "Dollar";
        }
        else if(s_currency == 3)
        {
            
            e_rate = 133.28273;
            c_name = "Yen";
        }
        else{

        }
    }
    //FOR USD
    else if (f_currency == 2)
    {
        if(s_currency == 1)
        {
            
            e_rate = 0.82193;
            c_name = "Eur";
        }
        else if(s_currency == 2)
        {
            std::cout << "The result is the same as entered as you are trying to convert into the same currency" << std::endl;
        }
        else if(s_currency == 3)
        {
            
            e_rate = 109.54850;
            c_name = "Yen";
        }
        else{

        }
    }
    //FOR JPY
    else if (f_currency == 3)
    {
        if(s_currency == 1)
        {
            
            e_rate = 0.00750;
            c_name = "Eur";
        }
        else if(s_currency == 2)
        {
            
            e_rate = 0.00913;
            c_name = "Dollar";
        }
        else if(s_currency == 3)
        {
            std::cout << "The result is the same as entered as you are trying to convert into the same currency" << std::endl;
        }
        else{

        }
        
    }
}