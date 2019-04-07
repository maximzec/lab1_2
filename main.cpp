#include <iostream>
#include "complex.h"

int main() {
    bool b = true ;
    for(;b;)

    {
        Complex c1, c2;
        char c;
        std::cout << "enter the first complex:";
        std::cin >> c1.real >> c1.imag;
        std::cout << std::endl;
        std::cout << "enter the second complex:";
        std::cin >> c2.real >> c2.imag;

        std::cout
                << "what do you want do to with your number? : + is sum , - is difference , * is multiplication , / is dividing , 0 is exiting the programm ";
        std::cin >> c;

        switch (c) {
            case '+':
                c1.sumComplex(c2);
                c1.printComplex();
                break;
            case '-':
                c1.diffCompex(c2);
                c1.printComplex();
                break;
            case '*':
                c1.multComplex(c2);
                c1.printComplex();
                break;
            case '/':
                c1.divideComplex(c2);
                c1.printComplex();
                break;
            case '0':
                b = false;
                break;
        }

    }
    return 0;
}