#include <iostream>

using namespace std;

int main()
{
    int opciones;
    cout << "CAMBIO LLANTA DESINFLADA" << endl;

    cout << "1. SI" << endl;
    cout << "2. NO" << endl;
    cin >> opciones;

    switch (opciones) {
        case 1:
            cout << "EL CARRO PUEDE MOVERSE" << endl;
            break;
        case 2:
            cout << "EL CARRO NO PUEDE MOVERSE" << endl;
            break;
        default:
            cout << "OPCION INVALIDA" << endl;
            break;
    }

}
