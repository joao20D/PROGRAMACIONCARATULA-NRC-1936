#include <iostream>

using namespace std;

int main()
{
 float A,B,D1,D2,D3,D4,D5,D6;
    cout<<"INGRESAR PRIMER NUMERO:"<<endl;
    cin>>A;
    cout<<"INGRESAR DEGUNDO NUMERO:"<<endl;
    cin>>B;

    D1=A<B;
    D2=A>B;
    D3=A==B;
    D4=A!=B;
    D5=A<=B;
    D6=A>=B;
    cout<<"LA RESPUESTA ES: "<<D1<<endl;
    cout<<"LA RESPUESTA ES: "<<D2<<endl;
    cout<<"LA RESPUESTA ES: "<<D3<<endl;
    cout<<"LA RESPUESTA ES: "<<D4<<endl;
    cout<<"LA RESPUESTA ES: "<<D5<<endl;
    cout<<"LA RESPUESTA ES: "<<D6<<endl;


}
