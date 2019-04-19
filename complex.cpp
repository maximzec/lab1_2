#include "complex"
#include "complex.h"

void Complex::setComplex(double re , double im)
{
    real = re;
    imag = im;
}

void Complex::printComplex()
{
    std::cout << real << " + " << imag << "i";
}

void Complex::sumComplex(Complex c)
{
    real += c.real;
    imag += c.imag;
}

void Complex::diffCompex(Complex c)
{
    real -= c.real;
    imag -= c.imag;
}

void Complex::multComplex(Complex c)
{
    real = real * c.real - imag * c.imag;
    imag = imag * c.real  + real * c.imag;
}

void Complex::divideComplex(Complex c)
{
    real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
    imag = (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag);
}

double Complex::getAbs()
{
    return sqrt(real*real + imag*imag);
}

