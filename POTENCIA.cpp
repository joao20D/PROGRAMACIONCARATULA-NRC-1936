#include <iostream>
#define R 10
using namespace std;

int main()
{
    float P1,P2,I,V;
    cout<<"INGRESAR INTENSIDAD:"<<endl;
    cin>>I;
    cout<<"INGRESAR VOLATJE:"<<endl;
    cin>>V;

    P1=I*I*R;
    P2=(V*V)/R;
cout<<"**************RESULTADOS********************"<<endl;
cout<<"LA POTENCIA 1 ES :"<<P1<<endl;
cout<<"LA POTENCIA 2 ES:"<<P2<<endl;


if(P1>22.4){
    cout<<"CORTOCIRCUITO EN P1"<<endl;




}
else if(P1<22.4){
    cout<<"FUNCIONA P1"<<endl;



}
    if(P2>22.4){

        cout<<"CORTO CIRCUTO EN P2"<<endl<<endl;


    }
    else if(P2<22.4){

        cout<<"FUNCIONA P2"<<endl;

    }



 if(P1==P2){

    cout<<"LAS POTENCIAS SON IGUALES:"<<endl;

}
else if(P1!=P2){
    cout<<"LAS POTENCIAS NO SON IGUALES"<<endl;


}
}
