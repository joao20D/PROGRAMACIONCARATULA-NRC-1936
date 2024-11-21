#include <iostream>

using namespace std;

int main()
{
    float A,B,C,D1,D2,D3;
    cout<<"INGRESAR PRIMER NUMERO:"<<endl;
    cin>>A;
    cout<<"INGRESAR DEGUNDO NUMERO:"<<endl;
    cin>>B;
    cout<<"INGRESAR TERCER NUMERO:"<<endl;
    cin>>C;

    D1=A+B*C;
    D2=A*B+C;
    D3=(A+B)*C;
    cout<<"LA RESPUESTA D1 ES:"<<D1<<endl;
    cout<<"LA RESPUESTA D2 ES:"<<D2<<endl;
    cout<<"LA RESPUESTA D3 ES:"<<D3<<endl;

}
