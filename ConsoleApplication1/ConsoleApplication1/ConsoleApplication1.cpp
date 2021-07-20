#include <iostream>
#include "C_Calculate.h"
#include "C_Consumption.h"
#include "C_Count.h"

int main()
{
    stv::consumption::C_Count cost(100.45, 35.85);

    std::cout << cost.calculate();
}
