#include <iostream>
#include <string>

using namespace std;

// Declaración de la clase
class EstudianteUNI{
	public:
		string nombre;
		float prom;
};

int main(){
	// Declaración de un objeto
	EstudianteUNI est;
	// Inicialización
	est.nombre = "Juan";
	est.prom = 16.5;

	cout << "Su nombre es " << est.nombre << "." << endl;
	cout << "Y su promedio es " << est.prom << "." <<  endl;

	return 0;

}