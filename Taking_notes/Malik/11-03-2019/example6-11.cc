#include <iostream>

using namespace std;

void PrintStars(int, int);

int dimension;

int main(){

	int blanks, ast;

	cout << "Ingrese la dimensión de la matriz:" << endl;
	cin >> dimension;

	for(int i = 1; i <= dimension; i++){
		PrintStars(2*dimension-i, i);
		PrintStars(2*dimension, i);
		cout << endl;
		blanks--;
	}

	return 0;
}

void PrintStars(int blanks, int ast){

	for(int i = 1; i <= - dimension; i++)	cout << " " ;
	for(int i = dimension; i <= dimension - i; i--) cout << " *";
}