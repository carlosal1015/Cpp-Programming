#include <iostream> 
#include <iomanip>

using namespace std;

class Hora{
	private:
		int hh, mm, ss;

	public:
		Hora();												// Constructor predeterminado sin parámetros
		Hora(int h1, int m1, int s1);	// Constructor con parámetros
		void setHora(int h, int m, int s);
		void mostrarHora();
};

int main(){

	Hora cena;
	cena.mostrarHora(); 		// Se inicializa con los valores del contructor predeterminado cada vez que se declara el objeto.
	Hora almuerzo(14,7,16);	// Tiene la clase hora
	almuerzo.mostrarHora();
	cena.setHora(7,3,5);
	cena.mostrarHora();

	return 0;

}

Hora::Hora(int h1, int m1, int s1){
	hh = m1;
	mm = m1;
	ss = s1;
}

Hora::Hora(){	// Nombre de la clase operador de resolución de ámbito y el nombre del constructor
	hh = 0;
	mm = 0;
	ss = 0;			// Este es el constructor predeterminado
}

void Hora::mostrarHora(){
	cout << "La hora es " << setfill('0') << setw(2)
			<< hh << ":" << setfill('0') << setw(2)
			<< mm << ":" << setfill('0') << setw(2)
			<< ss << "." <<endl;
}

void Hora::setHora(int h, int m, int s){
	hh = h;
	mm = m;
	ss = s;
}
// Es posible tener varios constructores dentro de una misma clase.