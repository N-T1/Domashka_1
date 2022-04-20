#include <iostream>
#include "Complex.h"

int main()
{
    setlocale(LC_ALL, "ru");

    Complex a{ 2,3 };
    Complex b{ 4,-5 };

    a.sum(b).print();
    a.ruz(b).print();
    a.proizv(b).print();
    a.del(b).print();

}