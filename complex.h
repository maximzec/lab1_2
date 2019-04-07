#ifndef COMPLEX_H
#define COMPLEX_H

#include <math.h>
#include <string.h>
#include <iostream>

struct Complex
{
    double real;
    double imag;

    void sumComplex(Complex c);
    void diffCompex(Complex c);
    void setComplex(double re , double im);
    void printComplex();
    void multComplex(Complex c);
    void divideComplex(Complex c);
    double getAbs();
};
#endif