#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  bool R1=a+b;
  bool R2=R1==c;
  bool R3=c!=0;
  bool R4=b-c;
  bool R5=R5>=19;
  bool R6=!R2;
  bool R7=R3&&R5;
  bool R8=R6||R7;
  cout<<"INGRESA VALOR DE a:"<<endl;
  cin>>a;
  cout<<"INGRESA VALOR DE b:"<<endl;
  cin>>b;
  cout<<"INGRESA VALOR DE c:"<<endl;
  cin>>c;

  cout<<"RESPUESTA:"<<R1<<endl;
cout<<"RESPUESTA:"<<R2<<endl;

cout<<"RESPUESTA:"<<R3<<endl;

cout<<"RESPUESTA:"<<R4<<endl;

cout<<"RESPUESTA:"<<R5<<endl;

cout<<"RESPUESTA:"<<R6<<endl;

cout<<"RESPUESTA:"<<R7<<endl;

cout<<"RESPUESTA:"<<R8<<endl;


}
