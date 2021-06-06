#include "declare.h"

//it gives us the number for the first and the second chosen currency
void currency(int f_currency, int s_currency, double &val2)
{

    if (f_currency == 1)
    {
        if(s_currency == 1)
        {   
            std::cout << "The result is the same as entered as you are trying to convert into the same currency" << std::endl;
        }
        else if(s_currency == 2)
        {
            
            val2 = 1.21666;
        }
        else if(s_currency == 3)
        {
            
            val2 = 133.28273;
        }
        else{

        }
    }
    //FOR USD
    else if (f_currency == 2)
    {
        if(s_currency == 1)
        {
            
            val2 = 0.82193;
        }
        else if(s_currency == 2)
        {
            std::cout << "The result is the same as entered as you are trying to convert into the same currency" << std::endl;
        }
        else if(s_currency == 3)
        {
            
            val2 = 109.54850;
        }
        else{

        }
    }
    //FOR JPY
    else if (f_currency == 3)
    {
        if(s_currency == 1)
        {
            
            val2 = 0.00750;
        }
        else if(s_currency == 2)
        {
            
            val2 = 0.00913;
        }
        else if(s_currency == 3)
        {
            std::cout << "The result is the same as entered as you are trying to convert into the same currency" << std::endl;
        }
        else{

        }
        
    }
}