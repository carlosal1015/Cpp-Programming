//funciones
#include <iostream>
using namespace std;
int sumar(int a,int b){
	//variables locales
    int resul;
	resul=a+b;
	return resul;	
}
int main(){
	int x,y,z;
	cout<<"Primer Valor= ";cin>>x;
	cout<<"Segundo Valor= ";cin>>y;	
	//invocacion a la funcion sumar
	z=sumar(x,y);
	cout<<"La suma es= "<<z;
	return 0;
}
