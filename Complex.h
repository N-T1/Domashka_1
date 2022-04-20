#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

struct  Complex
{
    double re = 0;
    double im = 0;
   
    void print();
   
    Complex sum(Complex cmp);
    Complex ruz(Complex cmp);
    Complex proizv(Complex cmp);
    Complex del(Complex cmp);
    
};


#endif
