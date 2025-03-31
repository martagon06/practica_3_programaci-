#include<iostream>
using namespace std;

int main()
{
    int n;
    do{
        cout << "Introduzco n: ";
        cin >> n; 
    } while (n <= 0);
    for (int i = n-1 ; i>=0 ; i--) {
        for (int j=0 ; j<=i ; j++) {
            if (i == n - 1 || j == i || j == 0)
                cout << "&";
            else 
                cout << "." ;
        }
        cout << endl;
    }
    return 0;
}