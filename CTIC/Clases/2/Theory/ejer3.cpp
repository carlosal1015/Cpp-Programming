//if doble, ejercicio 3
#include <iostream>
using namespace std;
int main(){
	
   float N1,N2,N3,prom;
   cout<<"Ingrese tres notas= ";	
   cin>>N1>>N2>>N3;
   prom=(N1+N2)*0.30 + N3*0.40;
   if (prom>=11)
      cout<<"Aprobado!!";
   else
      cout<<"Desaprobado";
   return 0;
}
