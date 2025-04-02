#include<iostream>
using namespace std;

int main ()
{
    int n, r, n2, i,  count;
    i = 0;
    count = 0;
    do {
        cout << "Número de referencia: ";
        cin >> r;
    } while (r < 1);;
    cout << "Introduzca una serie de números (): ";
    cin >> n;
    while (n != 0)
    {
        cin >> n;
        if (n == r)
            count++;
    }
    cout << "Hay " << count << " valores que coinciden con el de referencia" << endl;
    return 0;
}