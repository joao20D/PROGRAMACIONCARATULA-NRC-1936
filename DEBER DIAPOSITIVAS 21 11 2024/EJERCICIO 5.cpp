#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Ingresa 1ER NUMERO : "<<endl;
    cin >> A ;
    cout<<"INGRESAR 2DO NUMERO:"<<endl;
    cin>>B;

    A += B;
    cout << "Resultado de SUMAR : " << A << endl;

    A -= B;
    cout << "Resultado de RESTAR : " << A << endl;

    A *= B;
    cout << "Resultado de  MULTIPLICAR : " << A << endl;

        if(A>0||B>0){
                A/=B;
        cout<<"LA RESPUESTA DE DIVIDIR ES:"<<A<<endl;
        A%=0;
                cout<<"LA RESPUESTA DE USAR % ES:"<<A<<endl;

    } else {
        cout << "La división no se pueden realizar ";
    }

    return 0;
}

