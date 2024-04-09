#include "ComplexNumber.hpp"

using namespace ComplexLibrary;

int main()
{
    Complex c1(-2.4, 3.2);
    Complex c2(4, -1.1);
    // Complex c3(2,-4);

    // stampo il numero complesso
    cout <<"Il primo numero e': "<< c1<<endl;
    cout <<"Il secondo numero e': "<< c2 <<"\n"<< endl;

    // stampo la somma dei due numeri complessi
    Complex sum = c1 + c2; // + c3
    cout << "La somma dei numeri complessi e': "<< sum <<"\n"<< endl;

    // verifico se i due numeri complessi coincidono
    if (c1 == c2)
    {
        cout << "I numeri complessi sono uguali\n"<< endl;
    }
    else
    {
        cout << "I numeri complessi non sono uguali\n"<< endl;
    }

    // stampo il suo conuigato
    Complex coniugato1 = c1.conjugate();
    Complex coniugato2 = c2.conjugate();

    cout << "Il coniugato di " << c1 << " e': "<< coniugato1<<endl;
    cout << "Il coniugato di " << c2 << " e': "<< coniugato2;

    return 0;
}
