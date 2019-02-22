#include <iostream>
#include <cstdlib>
#include <ctime>
#define LENGTH 1000
using namespace std;

int main(){

	int PUCUSANA[LENGTH], contA = 0, contB = 0;

	cout << "¡Bienvenido a las elecciones de Pucusuna 2019!" << endl;

	srand(time(NULL));
	for(int i = 0; i < LENGTH; i++)
		PUCUSANA[i] = rand()%3;
	
	for(int j = 0; j < LENGTH; j++){
		switch (PUCUSANA[j]){
			case 0:
			contA ++;	break;
			case 1:
			contB ++;	break;
		}
	}
	cout << "Votos de A: " << contA << endl;
	cout << "Votos de B: " << contB << endl;
	cout << "Votos viciados: " << LENGTH - (contA + contB) << endl;
	//TODO Chequear cantidad de votos viciados minimos para anular eleccion.
	if (contA > contB)
		cout << "El ganador es A." << endl;
	else if (contB > contA)
		cout << "El ganador es B." << endl;
	else cout << "No hay ganador." << endl;

	cout << "Candidato A: " << (float) contA / LENGTH * 100 << "%" << endl;
	cout << "Candidato B: " << (float) contB / LENGTH * 100 << "%" << endl;

	return 0;
}