#include<iostream>
using namespace std;
int main(){
float V,Q,C;
cout<<"INGRESAR  VOLATJE:"<<endl;
cin>>V;
cout<<"INGRESAR CARGA:"<<endl;
cin>>Q;

if(V>=0){
          C=Q/V;
    cout<<"LA CAPACITANCIA ES:"<<C<<endl;

}
else{

cout<<"EL VOLTAJE NO PUEDE SER MENOR A 0 ERROR"<<endl;
}

}
