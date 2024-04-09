#include "ComplexNumber.hpp"


namespace ComplexLibrary
{
    double tol = 1.1 * pow(10,-16); //precisione calcolatore

    // scrivo la funzione per stampare il numero complesso
    ostream& operator<<(ostream& os, const Complex &c)
    {
        if(fabs(c.imag) < tol && fabs(c.real) > tol )
            os << c.real;
        else if (fabs(c.real) < tol && fabs(c.imag) > tol)
            os << c.imag <<"i";
        else if (fabs(c.imag) > tol)
            os << c.real <<"+" << c.imag << "i";
        else if (fabs(c.real) < tol && fabs(c.imag) < tol)
            os << NULL;
        else
            os << c.real << c.imag << "i";
        return os;
    }

    // Scrivo la funzione per la somma
    Complex operator+(const Complex &c1, const Complex &other) // mettendo other posso fare la somma di infiniti numeri complessi
    {
        Complex c(c1.real + other.real, c1.imag + other.imag);
        return c;
    }

    // Scrivo la funzione per l'operatore ==
    bool operator==(const Complex &c1, const Complex &c2)
    {
        return (fabs(c1.real- c2.real)<tol) && (fabs(c1.imag - c2.imag)<tol);
    }


    //Scrivo la funzione per il coniugato
    Complex Complex::conjugate()
    {
        return Complex(real,-imag);
    }


}


