#include <iostream>

using namespace std;

int main()
{
    float V,F,LAMDA;
    cout << "*************FRECUENCIA ONDA*********" << endl;
    cout<<"INGRESAR LA VELOCIDAD:"<<endl;
    cin>>V;
    cout<<"INGRESAR LAMDA:"<<endl;
    cin>>LAMDA;

    if(V<=0||LAMDA<=0){
        cout<<"error no puede ser menor a cero"<<endl;

    }
    else{
        F=V/LAMDA;
        cout<<"la frecuencia de onda es:"<<F<<endl;


    }

    return 0;
}
