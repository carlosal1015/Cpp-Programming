#include <iostream>
#include <string>
#define MAX_ATTEMPT 3
using namespace std;

int main(){

	char answer;
	string root_password, user_password, password = "password";
	int attempt = 0;



	cout << "*********************************************************\n"
					"¿Es usted superusario/usuario? (1/2)\n";
	cin >> answer;
	switch (answer){
		case 1:
			if (answer == ('Y' || 'y')) {
				cout << "Ingrese la contraseña:"; getline(cin, root_password);
				if (string ("CTIC").compare(root_password) == 0) {
					cout << "¿Desea cambiar la clave de acceso? (Y/n): ";
					if (answer == ('Y' || 'y'))	cout << "Ingrese la nueva contraseña de acceso: "; getline(cin, password);
				}
			}	break;
		case 2:
			cout << "Por favor ingrese la contraseña para ingresar al sistema:\n";
			getline(cin, user_password);

			do{
				if (password.compare(user_password) == 0) {	attempt ++;
					cout << "¡Bienvenido al sistema!" << endl; break;	
				}
			else{	attempt ++;
				cout << "Le queda " << MAX_ATTEMPT - attempt << " intento(s)." << endl;
				cout << "¡Contraseña incorrecta!" << endl << "Ingrese nuevamente:" << endl;
				getline(cin, user_password);
			}
		} while (attempt < 2);
		
		if (attempt == 2)	cout << "Cuenta bloqueada." << endl;	break;
	}

	return 0;
}