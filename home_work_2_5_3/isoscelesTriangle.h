#pragma once
#include "triangle.h"
struct isoscelesTriangle : public triangle
{
private:
    isoscelesTriangle(int a, int b, int �, int �); 
public:
    isoscelesTriangle() : isoscelesTriangle(10, 20, 30, 60) {};
};