#include "triangle.h"
#include "figura.h"
#include "straighTriangle.h"
#include <iostream>
#include <string>

    straighTriangle::straighTriangle(int a, int b, int c, int �, int �)
    {
        name = { "������������� �����������: " };
        line_a = a;
        line_b = b;
        line_c = c;
        corner_A = �;
        corner_B = �;
        corner_C = 90;
    }