#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, suma;
    cout << "Introduzca el intervalo: ";
    cin >> a >> b;
    cout << "Introduzca dos números: ";
    cin >> c >> d;
    if (a<=b)
    {
        while(a <=b ){
            if ((a % c) == 0 && (a % d) != 0) 
                suma += a;
            a++;
        }
    }
    else {
        while (a>=b) {
            if ((b % c) == 0 && (b % d) != 0) 
                suma += b;
            b++;
        }
    }
    cout << "Resultado: " << suma << endl;
    return 0;
}
