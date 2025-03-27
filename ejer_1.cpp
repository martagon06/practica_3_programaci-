#include<iostream>
using namespace std;

int main()
{
    int n, r, n2, i,  count;
    i = 0;
    count = 0;
    cout << "Número de referencia: ";
    cin >> r;
    do {
        cout << "Número de elementos: ";
        cin >> n;
    } while (n <= 1);
    cout << "Introduzca " << n << " números: ";
    while (i<n) {
        cin >> n2;
        if (n2 == r) {
            count++;
        }
        i++;
    }
    cout << "El número de veces que se repite el número de referencia es: " << count << endl;
    return 0;
}