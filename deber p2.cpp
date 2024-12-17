#include <iostream>
using namespace std;

int pedir(int &a,int &b,int &c,int &d,int &e,int &f);
int edad(int a,int b,int c,int d,int e,int f);

int main(){
 int d,m,a,dd,mm,aa;

 pedir(d,m,a,dd,mm,aa);
 edad(d,m,a,dd,mm,aa);


}

int pedir(int &a,int &b,int &c,int &d,int &e,int &f){

    cout<<"\t\t\t-------INGRESAR FECHA NACIMIENTO-----------"<<endl;
    cout<<"INGRESAR EL DIA:"<<endl;
    cin>>a;

    cout<<"INGRESAR EL MES:"<<endl;
    cin>>b;

    cout<<"INGRESAR EL ANIO:"<<endl;
    cin>>c;


    cout<<"\t\t\t-------INGRESAR FECHA ACTUAL------------"<<endl;

    cout<<"INGRESAR EL DIA:"<<endl;
    cin>>d;

    cout<<"INGRESAR EL MES:"<<endl;
    cin>>e;

    cout<<"INGRESAR EL ANIO:"<<endl;
    cin>>f;


}

int edad(int a,int b,int c,int d,int e,int f){

    int d1,m1,a1;
    d1=d-a;
    m1=e-b;
    a1=f-c;

    cout<<"\t\t\t---------------LA EDAD ES------------"<<endl;
    cout<<"DIA:"<<d1<<endl;
    cout<<"MES:"<<m1<<endl;
    cout<<"ANIO:"<<a1<<endl;


}
