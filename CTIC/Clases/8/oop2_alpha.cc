/*
Crear la clase hora con datos miembro enteros hh, mm, ss.
y con los métodos setHora y MostrarHora
Luego declarar el objeto cena, e inicializarlo con 20, 30 y 15.
*/

#include <iostream> 
#include <iomanip>

using namespace std;

// Declaración de una clase

class Hora{
	private:
		int hh, mm, ss;
	
	public:
		void setHora(int h, int m, int s);
		void mostrarHora();
};

int main(){

	// Declaración de un objeto
	Hora cena;
	// Inicialización
	cena.setHora(7,3,5);	// El objeto cena ya sido inicializado con los valores 20, 30 y 15.
	cena.mostrarHora();

	return 0;

}

void Hora::setHora(int h, int m, int s){
	hh = h;
	mm = m;
	ss = s;
}

void Hora::mostrarHora(){
	cout << "La hora es " << setfill('0') << setw(2)
			<< hh << ":" << setfill('0') << setw(2)
			<< mm << ":" << setfill('0') << setw(2)
			<< ss << "." << endl;
}