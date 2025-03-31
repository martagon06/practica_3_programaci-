#include<iostream>
using namespace std;

int main()
{
    int suma, multiplicador, multiplicando, n, n1;
    cout << "Inserte el multiplicador: ";
    cin >> multiplicador;
    cout << "Inserte el multiplicando: ";
    cin >> multiplicando;
    n = multiplicador;
    n1 = multiplicando;
    suma = 0;
    while (multiplicador > 0)
    {
        if (multiplicador % 2 != 0)
            suma += multiplicando;
        multiplicador /= 2;
        multiplicando *= 2;
    }
    cout << n << " * " << n1 << " = " << suma << endl;
    return 0;
}