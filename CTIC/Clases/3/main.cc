/*
En while la primera ejecucion debe de ser verdadera.

Debemos asegurarnos que cambie de valor en algun momento.
*/

#include <iostream>
using namespace std;

int main(){
    
  int cont = 31;

  while(cont>=1){
      cout << cont << endl;
      cont = cont - 2;
  }
    
	return 0;
}