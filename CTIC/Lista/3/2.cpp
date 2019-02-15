#include <iostream>

using namespace std;

int main (){

	int number; float mount = 0, deposit = 0, withdraw = 0;

	while(number != 4){
		cout << "\n**************** Menú de opciones ****************\n"
						"0: Limpiar la cuenta.\n"
						"1: Depositar dinero a la cuenta.\n"
						"2: Retirar dinero de la cuenta.\n"
						"3: Mostrar el salido actual.\n"
						"4: Salir del programa.\n"
						"Ingrese una opción: ";
		cin >> number;

		switch (number){
			case 0:
				cout << "Se ha borrado los valores de su cuenta." << endl;
				deposit = 0, withdraw = 0; break;

			case 1:
			do{
				cout << "Monto a depositar: ";
				cin >> deposit;
			} while (deposit <= 0);
			
			mount += deposit;
			cout << "Se ha depositado S/"	<< deposit << " a su cuenta." << endl; break;

			case 2:
			do{
				cout << "Monto a retirar: ";
				cin >> withdraw;
			} while (withdraw < 0);

			if (withdraw <= mount) {
				mount -= withdraw;
				cout << "Se ha retirado S/"	<< withdraw << " de su cuenta." << endl;
			}
			else
				cout << "No está permitido retirar montos mayores a su saldo actual.\n"
								"Verifique su saldo en la opción 3." << endl; break;

			case 3:
				cout << "Su saldo actual es S/" << mount << "." <<endl; break;

			case 4:
				cout << "Ha salido del programa con éxito." << endl; break;

			default: cout << "Ingrese una opción:" << endl;
		}
	}

	return 0;
}

//Corregir depositar y ver saldo