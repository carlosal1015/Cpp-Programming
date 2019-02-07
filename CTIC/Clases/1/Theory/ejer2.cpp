#include <iostream>     //Entrada
int main(){
  int edad;   //Declaracion de variables
  float lado,area;
  edad=10;    //Inicializacion de la variable
  std::cout<<"La edad es= "<<edad;
  std::cout<<"\nIngrese el lado= ";
  std::cin>>lado;
  area=lado*lado;
  std::cout<<"El area es= "<<area<<" metros cuadrados";  
  return 0;
}
