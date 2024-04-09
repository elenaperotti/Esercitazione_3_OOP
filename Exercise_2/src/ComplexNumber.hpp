#ifndef __COMPLEX_H // Header guards
#define __COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexLibrary{

    struct Complex
    {
        double real;
        double imag;

        // creo un costruttore
        Complex(double r, double i):
            real (r),
            imag (i)
        {}

        //costruttore di default
        Complex() = default;

        Complex conjugate(); // funzione che stampa il coniugato


    };

ostream& operator<<(ostream& os, const Complex &c); // print
Complex operator+(const Complex &c1, const Complex &c2); // somma
bool operator==(const Complex &c1, const Complex &c2); // operatore booleano uguaglianza

}
#endif
