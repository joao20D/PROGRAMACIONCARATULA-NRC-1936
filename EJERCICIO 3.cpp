#include<iostream>
using namespace std;
int main(){
int A,B;
cout<<"INGRESAR PRIMER NUMERO:"<<endl;
cin>>A;
cout<<"INGRESAR SEGUNDO NUMERO:"<<endl;
cin>>B;

if(A==B){
    cout<<"LOS NUMEROS SON IGUALES"<<endl;


}
else if (A!=B){
    cout<<"LOS NUMEROS SON DIFERENTES"<<endl;
    if(A>B){
        cout<<"EL NUMERO MAYOR ES:"<<A<<endl;

    }else{
    cout<<"EL NUMERO MAYOR ES:"<<B<<endl;

    }

}
}
