#include <iostream>
#include <string>

using namespace std;

int main(){

	string message;

	int sum = 0, length;
	char symb;
	bool condition;

/********************************
**	Validación en mayúscula	 	*
*********************************
*/
	do{
		cout << "Ingrese su mensaje a codificar: ";
		getline(cin, message);
		length = message.length() - 1;

		int i = 0;
		while(message[i]!='\0'){

			symb = message[i];	i++;

			condition = ( (symb >= 'A' && symb <= 'Z') || (symb >= '0' && symb <= '9') )
									&& not (symb >= 'a' && symb <= 'z');

		sum += condition;
		}
	} while (sum == length);

	for(int i = 0; i < message.length()+1; i++){
	
	if (message[i] >= '0' && message[i] <= '9')
		(	(message[i] >= '0' && message[i] <= '9') && message[i] != '0' )
		? message[i]-- : message[i] = '9';

	else if (message[i] >= 'A' && message[i] <= 'Z')
		(	(message[i] >= 'A' && message[i] <= 'Z') && message[i] != 'Z' )
		? message[i]++ : message[i] = 'A';
	}

	if (condition)	cout << "Su codificación resultante es " << message << endl;
	else cout << "Entrada inválida" << endl;

	return 0;
}