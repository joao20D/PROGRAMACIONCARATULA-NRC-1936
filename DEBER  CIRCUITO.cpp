#include <iostream>

using namespace std;

int main()
{
    float VOLTAJE,RESISTENCIA,INTENSIDAD;
    cout << "CIRCUITO" << endl;
    cout<<"MATERIALES"<<endl;
    cout<<"-BATERIA,CABLE, FOCO, INTERRUPTOR"<<endl;
    cout<<"INGRESAR VOLTAJE:"<<endl;
    cin>>VOLTAJE;
    cout<<"INGRESAR LA RESISTENCIA:"<<endl;
    cin>>RESISTENCIA;
    cout<<"INGRESAR INTENSIDAD DE CORRIENTE ELECTRICA:"<<endl;
    cin>>INTENSIDAD;

    VOLTAJE=RESISTENCIA*INTENSIDAD;
    INTENSIDAD=VOLTAJE/RESISTENCIA;
    RESISTENCIA=VOLTAJE/INTENSIDAD;

    cout<<"EL VOLTAJE ES:"<<VOLTAJE<<endl;
    cout<<"LA RESISTENCIA ES:"<<RESISTENCIA<<endl;
    cout<<"LA INTENSIDAD ES:"<<INTENSIDAD<<endl;
    return 0;
}
