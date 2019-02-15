/*
	En el curso de programación, el promedio final se compone de los siguientes
	porcentajes:

	- 60% del promedio de 4 exámenes. (PE)
	- 15% del promedio de laboratorios (PL)
	- 15% del promedio de tareas (PT)
	- 10% de la nota del proyecto final (PR)

	Desarrolla un programa en el que solicite las notas de los cuatro exámenes,
	del promedio de laboratorios, del promoedio de las tareas y la nota del proyecto.
	En base a esto, el programa determinará la Nota final de un alumno.
*/
#include <iostream>

using namespace std;

int main(){
	
	float grade1, grade2, grade3, grade4, lab, homework, project, finalgrade;

	cout << "Ingrese la nota del 1er examen:" << endl;
	cin >> grade1;

	cout << "Ingrese la nota del 2do examen:" << endl;
	cin >> grade2;

	cout << "Ingrese la nota del 3er examen:" << endl;
	cin >> grade3;

	cout << "Ingrese la nota del 4to examen:" << endl;
	cin >> grade4;

	cout << "Ingrese la nota promedio del laboratorio:" << endl;
	cin >> lab;
	
	cout << "Ingrese la nota promedio de las tareas:" << endl;
	cin >> homework;

	cout << "Ingrese la nota del proyecto:" << endl;
	cin >> project;

	finalgrade = (0.6 * ( (grade1 + grade2 + grade3 + grade4) / 4) )
							+ (0.15 * lab) + (0.15 * homework) + (0.1 * project);

	cout << "La nota del curso es " << finalgrade << "." << endl;
	
	return 0;
}