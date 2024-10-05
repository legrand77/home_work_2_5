#include <iostream>
#include "math_m.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int x{};
    int y{};
    int z{};
    std::cout << "Введите первое число: ";
    std::cin >> x;
    do{
    std::cout << "Введите второе число : ";
    std::cin >> y;
    }
    while (y == 0);
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> z;

    if (z == 1) { add(x,y); }
    else if (z == 2) { sub(x, y); }
    else if (z == 3) { mul(x, y); }
    else if (z == 4) { divis(static_cast<double>(x), static_cast<double>(y)); }
    else if (z == 5) { exp(x, y); };

}
