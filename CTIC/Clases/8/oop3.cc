/*
* Crear la clase hora con datos miembros
  enteros hh,mm,ss. Luego declarar el objeto
  cena e inicializarlo con 20h, 30m, 15s.
*/
#include <iostream>
#include <iomanip>

using namespace std;

class hora{
	public:
		int hh;
		int mm;
		int ss;
};

int main(){

	hora cena;
	cena.hh = 20;
	cena.mm = 30;
	cena.ss = 15;

	cout << "La hora de la cena es " << setfill('0') << setw(2) << cena.hh << ":"
			<< setfill('0') << setw(2) << cena.mm << ":"
			<< setfill('0') << setw(2) << cena.ss << "." << endl;

	return 0;
}