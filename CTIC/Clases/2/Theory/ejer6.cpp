//switch con literales
#include <iostream>
using namespace std;
int main(){	
   char estacion;
   cout<<"Ingrese la inicial de la estacion= ";	
   cin>>estacion;
   switch (estacion){
   	  case 'v':
   	  case 'V': cout<<"Verano";break;
   	  case 'o':
   	  case 'O': cout<<"Otoño";break;
   	  case 'i':
   	  case 'I': cout<<"Invierno";break;
   	  case 'p':
   	  case 'P': cout<<"Primavera";break;
	  default: cout<<"Error";		 		    	  
   }
   return 0;
}
