#pragma once
#include <iostream>
#include <string>
using string = std::string;

class Convert
{

private:
    double _result;
public:

    double convertion(double &amount, double &e_rate, double &_result)
    {
        _result = amount * e_rate;
        //std::cout << "The Output from the Class is : " << result << std::endl;
        return _result;
    }

    void setCurrency(int f_currency, int s_currency, double &e_rate, string &c_name);

};

//void currency(int f_currency, int s_currency, double &e_rate);

