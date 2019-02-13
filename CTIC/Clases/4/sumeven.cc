#include <iostream>
using namespace std;

int sumeven (int k);

int main (){

	int n;

	cout << "Ingrese un número natural" << endl;
	cin >> n;
	cout << "La suma de los impartes es " << sumeven(n) << "." << endl;


	return 0;
}

int sumeven (int k){
	int sum = 0;
	for(int i = 1; i <= k; i = i + 2){
		sum += i;
	}

	return sum;
}