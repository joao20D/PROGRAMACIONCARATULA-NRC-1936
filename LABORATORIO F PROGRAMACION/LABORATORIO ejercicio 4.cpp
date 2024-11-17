#include <iostream> // Biblioteca para entrada y salida

using namespace std;

int main() {
    float V, Q, C; // Declaración de variables para voltaje, carga y capacitancia

    // Solicitar al usuario que ingrese el voltaje
    cout << "INGRESAR VOLTAJE (V):" << endl;
    cin >> V;

    // Solicitar al usuario que ingrese la carga
    cout << "INGRESAR CARGA (Coulombs):" << endl;
    cin >> Q;

    // Cálculo de la capacitancia utilizando la fórmula C = Q / V
    if (V != 0) { // Verificar que el voltaje no sea cero para evitar división por cero
        C = Q / V; // Capacitancia en Faradios
    } else {
        cout << "ERROR: El voltaje no puede ser cero." << endl;
        return 1; // Fin del programa con error
    }

    // Mostrar resultados
    cout << "**************RESULTADOS********************" << endl;
    cout << "LA CAPACITANCIA ES :" << C << " Faradios" << endl;

    return 0; // Fin del programa
}
