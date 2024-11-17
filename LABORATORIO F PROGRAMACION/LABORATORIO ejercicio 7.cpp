#include <iostream>

using namespace std;

int main()
{
    float V,I,R;
    cout<<"***********RESISTENCIA************"<<endl;
    cout<<"INGRESAR VOLTAJE:"<<endl;
    cin>>V;
    cout<<"INGRESAR INTENSIDAD:"<<endl;
    cin>>I;

    if(V<=0||I<=0){
            cout<<"ERROR NO PUEDE SER NEGATIVO"<<endl;



    }else{
    R=V/I;
    cout<<"LA RESISTENCIA ES:"<<R<<endl;
    }
}
