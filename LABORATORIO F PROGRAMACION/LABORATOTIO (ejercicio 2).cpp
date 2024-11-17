#include <iostream>
#define HP 746
using namespace std;

int main()
{
    float v1,v2,i1,i2,p1,p2,pt1,pt2;
    cout<<"INGRESA VOLTAJE 1:"<<endl;
    cin>>v1;
     cout<<"INGRESA VOLTAJE 2 :"<<endl;
    cin>>v2;
     cout<<"INGRESA INTENSIDAD 1:"<<endl;
    cin>>i1;
     cout<<"INGRESA INTENSIDAD 2:"<<endl;
    cin>>i2;

    p1=v1*i1;
    p2=v2*i2;

pt1=p1+p2;

if(p1>0){
    cout<<"LA POTENCIA 1 ES:"<<p1<<endl;



}
else if (p1<0){
        cout<<"ERROR"<<endl;



}
if(p2>0){
    cout<<"LA POTENCIA 2 ES:"<<p2<<endl;



}
else if (p2<0){
        cout<<"ERROR"<<endl;



}
    cout<<"LA POTENCIA TOTAL ES:"<<pt1<<endl;

    pt2=p1/HP;
cout<<"LA POTENCIA EN HP ES:"<<pt2<<endl;
}
