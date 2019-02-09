//do while , Lazo controlado por valor Centinela
/*Elabore un programa que solicite al usuario ingresar un entero positivo 
de cualquier cantidad de cifras y retorne la suma de sus cifras.
Ejm
Ingrese un número entero positivo:  25487
La suma de sus cifras es: 26
*/
#include <iostream>
#define PUNIT 5   //precio de un kg de Naranja
using namespace std;
int main(){
	float cant,importe,total;
	char resp;
	do{
		cout<<"Total de kg a llevar: ";
		cin>>cant;
		importe=cant*PUNIT;
		if (cant>5)
		   importe=0.85*importe;
		cout<<"Importe a pagar= "<<importe<<endl;
		total=total+importe;
		cout<<"Quedan clientes(S/N)?= ";
		cin>>resp;
	}while (resp=='S');
	cout<<"Monto Total= "<<total;
	return 0;
}

/*Un expendio de naranjas decide cerrar, a las personas que
aún no se han retirado les ofrece un descuento del 
15% si llevan mas de 5kg. Obtener
a) El importe a pagar por cada uno de estos ultimos clientes.
b) El monto total percibido por la tienda.*/
