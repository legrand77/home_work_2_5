#include "Counter.h"
    int Counter:: add() { return value++; }
    int Counter::subtract() { return value--; };
    int Counter::get_priv_field() { return value; } // ������
    void Counter::set_priv_field(int value) { this->value = value; } // ������
