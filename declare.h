#pragma once

#include <iostream>

class convert
{

private:
    double val3;
public:

    void convertion(double &val1, double &val2)
    {
        std::cout << val1 << " and " << val2 << std::endl;
        val3 = val1 * val2;
        std::cout << "The Output from the Class is : " << val3 << std::endl;

    }

};

void currency(int f_currency, int s_currency, double &val2);

