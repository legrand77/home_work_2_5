#include "figura.h"
#include <string>
#include <iostream>

     void figura:: printBadge()
    {
        std::cout << name << std::endl;
        std::cout << "�������:  �=" << line_a << " b=" << line_b << " c=" << line_c << std::endl;
        std::cout << "����:  �=" << corner_A << " B=" << corner_B << " C=" << corner_C << std::endl;
    }