#include<iostream>
using namespace std;
int main(){
float R,V,I,P;
cout<<"INGRESAR VOLTAJE:"<<endl;
cin>>V;

cout<<"INGRESAR POTENCIA:"<<endl;
cin>>P;

R=(V*V)/P;
I=P/V;


if(R<40){

    cout<<"INSUFIENTE"<<endl;
}
else{
   cout<<"SUFICIENTE"<<endl;

}
cout<<"LA RESISTENCIA ES:"<<R<<endl;
cout<<"LA INTENSIDAD DE CORRIENTE ES:"<<I<<endl;
}
