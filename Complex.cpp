#include "Complex.h"

void Complex::print()
{
    string sign = (this->im >= 0) ? "+" : "";
    cout << this->re << sign << this->im << "i" << endl;;
}

Complex Complex::sum(Complex cmp)
{
    return Complex { this->re + cmp.re ,  this->im + cmp.im };
}

Complex Complex::ruz(Complex cmp)
{
    return Complex { this->re - cmp.re ,  this->im - cmp.im };
}

Complex Complex::proizv(Complex cmp)
{
    return Complex{ this->re * cmp.re - this->im * cmp.im ,  this->re * cmp.im + this->im * cmp.re };
}

Complex Complex::del(Complex cmp)
{
    return Complex{ (this->re * cmp.re + this->im * cmp.im)/(pow(cmp.re,2)+ pow(cmp.im,2)) ,  (this->im * cmp.re - this->re * cmp.im) / (pow(cmp.re,2) + pow(cmp.im,2)) };
}