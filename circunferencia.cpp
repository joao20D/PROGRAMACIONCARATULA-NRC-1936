#include <iostream>
#include <math.h>
//PARA POTENCIA ES (pow(x,2)) y RAIZ (sqrt(x))
using namespace std;

int main()
{
    const float  pi=3.14;
    float RADIO,AREA,PERIMETRO;
    cout<<"CIRCUNFERENCIA"<<endl;
    cout<<"INGRESAR EL RADIO:"<<endl;
    cin>>RADIO;

    AREA=pi*(pow(RADIO,2));
    PERIMETRO=2*pi*RADIO;

    cout<<"AREA="<<AREA<<endl;
    cout<<"PERIMETRO="<<PERIMETRO<<endl;
}
