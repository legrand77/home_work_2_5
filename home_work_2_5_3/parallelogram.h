#pragma once
#include "quadrilateral.h"
struct parallelogram : public quadrilateral
{
private:
    parallelogram(int a, int b, int �, int �);
public:
    parallelogram() : parallelogram(30, 40, 20, 30) {};
};