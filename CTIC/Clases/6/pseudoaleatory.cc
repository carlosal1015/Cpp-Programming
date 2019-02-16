#include <iostream>
#include <cstdlib>

using namespace std;

int main (){

	int number, seed;
	cout << "Ingrese una semilla: "; cin >> seed;
	srand(seed);
	//Diez valores entre 0 y 5
	
	for(int i = 0; i < 10; i++){
		number = rand() % 6;
		cout << number << "\t";
	}

	return 0;
}