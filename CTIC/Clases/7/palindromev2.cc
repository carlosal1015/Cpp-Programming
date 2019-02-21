#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

	char cad[80];
	int n, i = 0;
	
	bool flag;
	cout << "Ingrese una cadena: ";
	
	gets(cad);
	n = strlen(cad);
	
	flag = true;
	
	while(i < n/2){
		if (cad[i] != cad[n-1-i])
			flag = false;
			
		i++;
	}
	
	if (flag == true)	cout << "Es un palíndromo\n";
	else	cout << "No es un palíndromo\n";

	return 0;

}