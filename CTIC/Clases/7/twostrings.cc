#include <iostream>
#include <string>

using namespace std;

int main(){

	string cad1, cad2; //objeto cad
	
	int n1, n2, i = 0, min;
	cout << "Ingrese la primera palabra: ";
	getline(cin, cad1);// de la sintaxis, s permite leer frasese en el argumento del metodo getline
	n1 = cad1.length();
	
	cout << "Ingrese la segunda palabra: ";
	getline(cin, cad2);
	n2 = cad2.length();
	
	min = n1;
	if (min > n2)
		min = n2;
	
	while (i < min){
		cout << cad1[i] << "\t" << cad2[i] << endl;
		i++;
	}
	
	if (n1 < n2){
		while(i < n2){
			cout << " " << "\t" << cad2[i] << endl;
			i++;
		}
	}
	else{
		while(i < n1){
			cout << cad1[i] << "\t" << " " << endl;
			i++;
		}
	}
	//cout << "Cadena ingresada: " << cad1;

	return 0;
}