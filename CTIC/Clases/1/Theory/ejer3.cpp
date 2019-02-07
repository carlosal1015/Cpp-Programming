#include <iostream>     //Entrada
using namespace std;
int main(){
  int num,u,d,c,suma;   //Declaracion de variables
  cout<<"Ingrese el numero= ";  
  cin>>num;
  u=num%10;
  d=(num/10)%10;
  c=(num/10)/10;  
  suma=c+d+u;
  cout<<"La suma de cifras es= "<<suma<<"\n";  
  return 0;
}
