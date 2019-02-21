#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int i, lowercase, uppercase, digits, symb;
	i = lowercase = uppercase = digits = 0;

	char str[80];
	cout << "Ingrese una cadena: ";
	//cin >> str;
	gets(str);
	
	cout << "Cadena ingresada:" << str << endl;
	
	while (str[i]!='\0'){
		
		symb = str[i];
		if (symb >= 'A' && symb <= 'Z')	uppercase++;
		if (symb >= 'a' && symb <= 'z') lowercase++;
		if (symb >= '0' && symb <= '9') digits++;
		i++;
		/*
		if (symb >= 'A' && symb <= 'Z'){
			uppercase++;
		}
		else if (symb >= 'a' && symb <= 'z'){
			lowercase++;
		}
		else if (symb >= '0' && symb <= '9'){
			digits++;
		}
		else i++;
		*/
	}
	
	cout << "La cantidad de letras minúsculas es " << lowercase << endl;
	cout << "La cantidad de letras mayúsculas es " << uppercase << endl;
	cout << "La cantidad de dígitos es " << digits << endl;

	return 0;
}