/*Crear la clase Hora con datos miembro enteros hh,mm,ss. 
y con los metodos setHora y MostrarHora
Luego declarar el objeto cena, e inicializarlo con 20, 30, 15
*/
#include <iostream>
#include <iomanip>
using namespace std;
//declaracion de una clase
class Hora{
    private:
    	int hh,mm,ss;
    public:
    	Hora();                                 //constructor predeterminado
    	Hora(int h1,int m1,int s1);            //constructor con parametros    	
    	
    	void setHora(int h,int m,int s);
    	void MostrarHora();
};
int main(){
    //declaracion de un objeto    
    Hora cena;
    cena.MostrarHora();
    Hora almuerzo(14,7,16);
    almuerzo.MostrarHora();    
    //Inicializacion
//    cena.setHora(7,3,5);

	return 0;
}
Hora::Hora(int h1,int m1,int s1){
	hh=h1;
	mm=m1;
	ss=s1;
}

Hora::Hora(){
	hh=0;
	mm=0;
	ss=0;
}
void Hora::MostrarHora( ){
    cout<<"Hora= "<<setfill('0')<<setw(2)<<hh<<": "<<setfill('0')<<setw(2)<<mm<<": "<<setfill('0')<<setw(2)<<ss<<endl;         
}
void Hora::setHora(int h,int m,int s){
    hh=h;
    mm=m;    
    ss=s;             
}


