#include <iostream>
using namespace std;
int main(){
    //DEFINIR
    float V,I,P;
    //SOLICITAR
    cout<<"INGRESAR VOLTAJE:"<<endl;
    cin>>V;

    cout<<"INGRESAR INTENSIDAD C:"<<endl;
    cin>>I;
   //CALCULAR
   P=V*I;

   //verificar
   if(P>2500){
        cout<<"LA POTENCIA ES SUFICIENTE"<<endl;



   }
   else if(P<2500){
        cout<<"LA POTENCIA ES INSUFICIENTE"<<endl;




   }
   cout<<"LA POTENCIA ES:"<<P<<endl;



}
