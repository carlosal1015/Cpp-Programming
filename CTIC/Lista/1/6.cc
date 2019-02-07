/*
    Dada un número de tres cifras, hallar la suma de sus cifras.
*/
#include <iostream>
using namespace std;

int main(){

	int number, unite, decene, centene, sum;

	cout << "Ingrese un número de tres cifras." << endl;
	cin >> number;

	unite = number % 10;
	decene = (number / 10) % 10;
	centene = (number / 10) / 10;
	sum = unite + decene + centene;

	cout << "La suma de las cifras de " << number << " es " << sum << "." << endl;

	return 0;
}