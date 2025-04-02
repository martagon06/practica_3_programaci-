#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, suma, digit, rapido, lento;
    digit = 0;
    
    do {
        cout << "Dime un numero entero y positivo: ";
        cin >> n;
    } while (n <= 0);
    lento = n;
    rapido = n;
    do { 
        suma = 0;
        while (lento > 0) {
            digit = lento % 10;
            suma += digit * digit;
            lento /= 10;
        }
        lento = suma;
        suma = 0;
        while (rapido > 0) {
            digit = rapido % 10;
            suma += digit * digit;
            rapido /= 10;
        }
        rapido = suma;

        suma = 0;
        while (rapido > 0) {
            digit = rapido % 10;
            suma += digit * digit;
            rapido /= 10;
        }
        rapido = suma;
    } while (lento != rapido && rapido != 1);
    if (rapido == 1) 
        cout << "Es un número feliz" << endl;
    else 
        cout << "No es un número feliz" << endl;
    return 0;
}