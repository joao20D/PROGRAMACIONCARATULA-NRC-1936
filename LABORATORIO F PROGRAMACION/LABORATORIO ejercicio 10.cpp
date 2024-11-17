#include <iostream>

using namespace std;

int main()
{
    float P,I,V;
    cout << "POTENCIA CIRCUITO" << endl;
    cout<<"INGRESAR VOLTAJE:"<<endl;
    cin>>V;
    cout<<"INGRESAR INTENSIDAD:"<<endl;
    cin>>I;
    if(V<0||I<0){
        cout<<"ERROR"<<endl;

    }else{
        P=I*V;
        cout<<"LA POTENCIA ES:"<<P<<endl;

    }
    return 0;
}
