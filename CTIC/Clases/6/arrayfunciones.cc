//Problema 7: Funciones y arrays
#include <iostream>
#define TAM 80

using namespace std;

void LeerEstaturas (float v[], int n);
float EstaturaMedia (float v[], int n);
void Listado(float v[], int n);//vamos a pasar un listado, solo mostrar algunos valores

int main(){

	int n;
	float sum = 0.0, v[TAM], mean;
	
	do{
		cout << "Cantidad de alumnos = "; cin >> n;

	} while (n > TAM);
	LeerEstaturas(v, n); // solamente van los variables
	mean = EstaturaMedia(v, n);
	cout << "Estatura Media= " << mean;
	Listado(v, n);

	return 0;
}

void LeerEstaturas (float v[], int n){
	cout << "Ingrese las estaturas de los alumnos (en mt) uno por uno" << endl; 
	
	for(int i = 0; i < n; i++){
		cout << "Alumno " << i + 1 << ": "; cin >> v[i];
	}
}

float EstaturaMedia (float v[], int n){
	float acum = 0;
	for(int i = 0; i < n; i++)	acum += v[i];
	return acum / n;
}

void Listado(float v[], int n){
	float mean = EstaturaMedia(v, n); //llamada a una funcion
	int tall = 0, little = 0;
	
	for(int i = 0; i < n; i++){
		if (v[i] < mean) {
			cout << v[i] << "\t";
			little ++;
		}
		if (v[i] > mean) {
			cout << v[i] << "\t";
			tall ++;
		}
	}		
		cout << "Total= " << little << endl;	
		cout << "Total= " << little << endl;
}

/*
	Los valores del arreglos se mantienen almacenados.
*/