#include <iostream>
using namespace std;

int main(){

  int contador = 1, suma = 0;

  while(contador <=6){
  //cout << contador << endl;
  suma = suma + contador;
  contador = contador + 1;
  }
  cout << "La suma de los primeros " << contador << " es " << suma << "." << endl;
  return 0;
}