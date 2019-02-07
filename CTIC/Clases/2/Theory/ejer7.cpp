//switch con enteros
#include <iostream>
using namespace std;
int main(){	
   int opc;
   float radio,base,altura;
   cout<<"\tMenu\n";	
   cout<<"(1) Area del Circulo\n";
   cout<<"(2) Area del Triangulo\n";   
   cout<<"(3) Salir\n";  
   cout<<"Ingrese opcion= "; 
   cin>>opc;
   switch (opc){
   	  case 1: cout<<"Ingrese radio= ";
		      cin>>radio;
			  break;
   	  case 2: cout<<"Ingrese base= ";
		      cin>>base;
		      cout<<"Ingrese altura= ";
		      cin>>altura;
			  break;
   	  case 3: cout<<"Hasta la vista!";break; 		    	  
   }
   return 0;
}
