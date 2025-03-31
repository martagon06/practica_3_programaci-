#include <iostream>
using namespace std;
int main(){
    int n, digit, suma;
    bool fuera;
    fuera = false;
    cout << "Indique un número: ";
    cin >> n;
    suma = 0;
    while (n>0 && !fuera)
    {
        digit = n%10;
        if(digit == 6) 
            suma++;
        else
            suma = 0;

        if (suma == 3)
            fuera = true;
        n /= 10;
    }
    if(fuera)
        cout << "Es un número diabólico" << endl;
    else 
        cout << "No es un número diabolico" << endl;
    return 0;
}
