#include<iostream>
using namespace std;

int main()
{   
    int codigo;
    int provincia, operacion, control;
    bool salir_bucle, codigo_f;


    while (salir_bucle==false)
    {
        cout << "Inserte un codigo de 4 digitos: ";
        cin >> codigo;
        while (codigo_f == false) {    
            if (codigo >= 10000)
            {
                cout << "El codifo es mayor a 4 cifras, inserte un codigo nuevo: ";
                cin >> codigo;
            }
            else if(codigo <= 999)
            {
                cout << "El codigo es menor a 4 cifras, inserte un codigo nuevo: ";
                cin >> codigo;
            }
            else 
            codigo_f = true;
        }
        if (codigo_f == true)
        {
            provincia = codigo / 1000;          
            operacion = (codigo / 10) % 100;   
            control = codigo % 10;   
            if (operacion%provincia == control)
                salir_bucle = true;
            else {
                cout << "El dígito de contrlo no es correct, ";
                codigo_f = false;
            } 
        }
    }          
    cout << "Codigo de provincia: " << provincia << endl;
    cout << "Codigo de operacion: " << operacion << endl;
    cout << "Digito de control: " << control << endl;
    return 0;
    
}