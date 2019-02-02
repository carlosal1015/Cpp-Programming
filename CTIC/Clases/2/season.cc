// switch con literales
#include <iostream>
using namespace std;

int main(){
	
	char season;
	cout << "Ingrese la letra inicial de la estación:" << endl;
	cin >> season;

	switch (season){
		case 'V':
		case 'v':
			cout << "Estación verano." << endl; break;
		case 'O':
		case 'o':
			cout << "Estación otoño." << endl; break;
		case 'I':
		case 'i':
			cout << "Estación verano." << endl; break;
		case 'P':
		case 'p':
			cout << "Estación primavera." << endl; break;

		default: cout << "Error." << endl;
	}

	return 0;
}

/*
	https://stackoverflow.com/questions/26343493/how-can-i-make-switch-case-statements-case-insensitive
*/
