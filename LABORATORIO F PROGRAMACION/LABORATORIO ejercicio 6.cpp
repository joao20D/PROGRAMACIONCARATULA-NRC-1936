#include <iostream>

using namespace std;

int main()
{
    float C,V,E;

    cout<<"ENERGIA ALMACENADA"<<endl;
    cout<<"INGRESAR VOLTAJE:"<<endl;
    cin>>V;
    cout<<"INGRESAR CAPACITANCIA"<<endl;
    cin>>C;

    if(V>0||C>0){
        E=0.5*C*V*V;
            cout<<"LA ENERGIA ALMACENADA ES:"<<E<<endl;


    }else{
        cout<<"ERROR NO DEBE SER NEGATIVO EL VOLTAJE Y LA CAPACITANCIA"<<endl;
    }


}
