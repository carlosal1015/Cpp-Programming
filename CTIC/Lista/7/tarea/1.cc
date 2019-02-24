#include <iostream>
#include <string>		//http://www.cplusplus.com/reference/string/string/compare/
#define MAX_ATTEMPT 3

using namespace std;

int main(){

	char answer;
	string root_password, user_password, password = "password";
	int attempt = 0, option;

	cout << "*********************************************************\n"
					""
					"¿Es usted superusario/usuario? (1/2)\n";
	cin >> option;

	switch (option){
		case 1:
				cout << "Ingrese la contraseña: ";
				cin.ignore(); //https://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs
				getline(cin, root_password);
				cout << (string ("CTIC")).compare(root_password) << endl;

				if (string ("CTIC").compare(root_password) == 0) {
					cout << "¿Desea cambiar la clave de acceso? (Y/n): ";
					cin >> answer;
					if (answer == 'Y' || answer =='y')
						cout << "Ingrese la nueva contraseña de acceso: ";
						cin.ignore();//Limpiar el caracter \n de la leída anterior.
						getline(cin, password);
				}	break;
		case 2:
			cout << "Por favor ingrese la contraseña para ingresar al sistema:\n";
			cin.ignore();
			getline(cin, user_password);

			do{ attempt ++;
				if (password.compare(user_password) == 0) break;
			else{
				cout << "Le queda " << MAX_ATTEMPT - attempt << " intento(s)." << endl;
				cout << "¡Contraseña incorrecta!" << endl << "Ingrese nuevamente:" << endl;
				getline(cin, user_password);
			}
		} while (attempt < 2); break;
	}

	if (attempt < 4)	cout << "¡Bienvenido al sistema!" << endl;
	else cout << "Cuenta bloqueada." << endl;

	return 0;
}