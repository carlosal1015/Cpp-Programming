#include <iostream>
#include <cmath>
#define mensaje "\nOtra prueba\n"

using namespace std;

int main(){
	
	long N, dM = 0, inv = 0, dg, sd = 0;
	char opc;
	do{
		system("clear");
		sd = 0, inv = 0; dM = 0;
		cout << "Ingrese un nombre de varias cifras: ";
		cin >> N;

		do{
			dg = N % 10;
			inv = inv*10 + dg;
			sd = sd + dg;
			if (dg > dM)
				dM = dg;
			N = N/10;
		}while(N > 0);
			cout << "El digito mayor " << dM << endl
				<< "La suma de digitos " << sd << endl
				<< "El numero invertido " << inv << endl
				<< mensaje;
			cin >> opc;
			}while(opc == 's' || opc == 'S');
 
	return 0;
}
