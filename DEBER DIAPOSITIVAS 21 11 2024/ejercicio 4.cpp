#include <iostream>

using namespace std;

int main()
{
 int a,b,c;
  cout<<"INGRESAR PRIMER NUMERO:"<<endl;
  cin>>a;
  cout<<"INGRESAR SEGUNDO NUMERO:"<<endl;
  cin>>b;
  cout<<"INGRESAR TERCER NUMERO:"<<endl;
  cin>>c;
  if(a>b&&b>c||a==b&&b==c){

    cout<<"CUMPLE CONDICION "<<endl;

  }else{

  cout<<"NO CUMPLE"<<endl;
  }
}
