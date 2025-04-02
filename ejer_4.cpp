#include<iostream>
using namespace std;

int main()
{
    int a, b, c, count;
    count = 1;
    cout << "Introduze tres números: ";
    cin >> a >> b >> c;
    while (a >= b+c || b >= a+c || c >= a+b) {
        cout << "Introduce tres números: ";
        cin >> a >> b >> c;
        count++;
    }
    cout << "Valores correctos: " << a << ", " << b << " y " << c << " en " << count << " intentos " << endl;
} 