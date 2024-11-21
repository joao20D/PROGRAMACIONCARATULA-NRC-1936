#include <iostream>
using namespace std;

int main() {
    int int_variable;
    float float_variable;

    cout << "Ingresa un número entero: ";
    cin >> int_variable;

    cout << "Ingresa un número flotante: ";
    cin >> float_variable;

    int resultado = int_variable + (int)float_variable;
    cout << "El resultado de la expresión (int)float_variable + int_variable es: " << resultado << endl;

    cout << "El valor del flotante convertido a entero fue: " << (int)float_variable << endl;

    return 0;
}
