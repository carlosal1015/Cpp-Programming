#include <iostream>
#include <cstdio>
using namespace std;
int main(){
   char cad[80],simb;
   int cmay,cmin,cdig,i;
   cmay=cmin=cdig=0;
   cout<<"Ingrese una cadena: ";
   gets(cad);
   i=0;
   while (cad[i]!='\0'){
   	  simb=cad[i];
   	  if (simb>='A' && simb<='Z')
   	      cmay++;
   	  if (simb>='a' && simb<='z')
   	      cmin++;
   	  if (simb>='0' && simb<='9')
   	      cdig++;
   	  i++;
   }
   cout<<"Total de mayusculas= "<<cmay<<endl;
   cout<<"Total de minusculas= "<<cmin<<endl;
   cout<<"Total de digitos= "<<cdig<<endl;      
   return 0;
}
