#pragma once
class Counter
{
private:
    int value{};
public:
    int add();
    int subtract();
    int get_priv_field(); // геттер
    void set_priv_field(int value); // сеттер
};