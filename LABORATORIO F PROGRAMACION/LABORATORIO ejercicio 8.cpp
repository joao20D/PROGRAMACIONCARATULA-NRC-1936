#include <iostream>

using namespace std;

int main()
{
    float V,I,P;
    {
        cout<<"-POTENCIA CIRCUITO-"<<endl;
        cout<<"INGRESAR VOLTAJE:"<<endl;
        cin>>V;
        cout<<"INGRESAR LA INTENSIDAD"<<endl;
        cin>>I;

        if(I<0||V<0){
            cout<<"ERROR"<<endl;


        }
        else{
            P=I*V;
            cout<<P<<endl;

        }
    }
}
