#include "math_m.h"
#include <iostream>
void add(int x, int y)
{
	std::cout << x << " + " << y << " = " << x + y << std::endl;
		
};

void sub(int x, int y)
{
	std::cout << x << " - " << y << " = " << x - y << std::endl;
};

void mul(int x, int y)
{
	std::cout << x << " * " << y << " = " << x * y << std::endl;
};

void divis(double x, double y)
{
	 std::cout << x << " / " << y << " = " << x / y << std::endl;	
}


void exp(int x, int y)
{
	int c{ 1 };
	for (int i = 0; i < y; i++)
	{
		c = c * x;
	};
	std::cout << x << " в степени " << y << " = " << c << std::endl;	
};



