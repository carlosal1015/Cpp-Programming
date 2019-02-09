// do while, Lazo controlado por valor Centinela
#include <iostream>
#define PUNIT 5 // precio de un kg de naranja
using namespace std;

int main(){

	float cant, importe, total;
	char resp;

	do{
		cout << "Total de kg a llevar: ";
		cin >> cant;
	
		importe = cant * PUNIT;
	
		if (cant > 5)	importe = 0.85 * importe;

		total += importe;		//total es un acumulador
		cout << "¿Quedan clientes(S/N)? = ";
		cin >> resp;	
	}while (resp == 'S');
	
	cout << "Monto Total = " << total << endl;

	return 0;

}