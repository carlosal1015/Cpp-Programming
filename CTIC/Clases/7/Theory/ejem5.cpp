#include <iostream>
#include <cstring>
using namespace std;
int main(){
   char cad[80];
   int n,i=0;
   bool flag;
   cout<<"Ingrese una cadena: ";
   gets(cad);
   n=strlen(cad);
   flag=true;   //asumo que cad es palindromo
   while (i<n/2){
   	   if ( cad[i]!=cad[n-1-i] )
   	       flag=false;         //no es palindromo 
   	   i++;
   }
   if (flag==true)
      cout<<"Es un palindromo\n";
   else
      cout<<"NO Es un palindromo\n";   
   return 0;
}
