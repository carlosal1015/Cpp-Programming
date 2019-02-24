/*Crear la clase Hora con datos miembro enteros hh,mm,ss. 
y con los metodos setHora y MostrarHora
Luego declarar el objeto cena, e inicializarlo con 20, 30, 15
*/
#include <iostream>
using namespace std;
//declaracion de una clase
class EstudianteUNI{
    public:
    	string nombre;
    	float  prom;
};

int main(){
    //declaracion de un objeto    
    EstudianteUNI est;
    //Inicializacion
    est.nombre="Juan";
    est.prom=16.0;
    cout<<"Nombre= "<<est.nombre<<endl;
    cout<<"Promedio= "<<est.prom<<endl;    
	return 0;
}
