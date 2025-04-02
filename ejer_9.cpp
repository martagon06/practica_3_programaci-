#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introduzca la altura de la matriz: ";
    cin >> n;
    for (int i=0 ; i<n; i++) {
        for (int j=0 ; j<n ; j++){
            if (((j+i)%2) == 0)
                cout << "X";
            else 
                cout << "O";
        }
        cout << endl;
    }
    return 0;
}