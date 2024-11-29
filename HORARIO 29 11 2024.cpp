#include <iostream>

using namespace std;

int main()
{
 char LETRA,CONTINUAR;

 do{
   cout<<"HORARIO"<<endl;
   cout<<"a.-LUNES"<<endl;
    cout<<"b.-MARTES"<<endl;
    cout<<"c.-MIERCOLES"<<endl;
    cout<<"d.-JUEVES"<<endl;
    cout<<"e.-VIERNES"<<endl;
    cout<<"f.-SABADO"<<endl;
    cout<<"g.-DOMINGO"<<endl;
    cout<<"INGRESAR DIA:"<<endl;
    cin>>LETRA;
 switch(LETRA){
 case 'a': cout<<"ESCOGISTE DIA: LUNES"<<endl;
break;

  case 'b':cout<<"ESCOGISTE DIA: MARTES"<<endl;
 break;


 case 'c':cout<<"ESCOGISTE DIA: MIERCOLES"<<endl;
 break;


 case 'd':cout<<"ESCOGISTE DIA: JUEVES"<<endl;

break;

 case 'e':cout<<"ESCOGISTE DIA: VIERNES"<<endl;
 break;


 case 'f':cout<<"ESCOGISTE DIA: SABADO "<<endl;
break;

  case 'g':cout<<"ESCOGISTE DIA: DOMINGO"<<endl;
break;

default: cout<<"NO HAS SELECCIONADO LITERAL CORRECTAMENTE"<<endl;
break;

 }

    cout<<"DESEAS INGRESAR OTRO DIA:(S/N)"<<endl;
    cin>>CONTINUAR;

 }while(CONTINUAR=='s');


}
