#include <iostream>
#include <cstdio> 		//fPara usar la función gets()
#include <cstring>		//Para usar la función strlen()

using namespace std;

int main(){

	int length, i=0, j;
	
	bool check = true;

	char palyndrome[100];

	cout << "Ingrese una palabra palíndroma:";
	gets(palyndrome);
	
	length = strlen(palyndrome);

//		if (i + j == length)	
	while(palyndrome[i] !='\0'){
		cout << palyndrome[i];
		if (length % 2 == 0){
			for(i = 0; i < length/2; i++)
				if(palyndrome[i] != palyndrome[length-1-i]) check = false;
		}
		else{
			for(j = 0; i < (length/2 + 1); j++){
				if(palyndrome[i] != palyndrome[length-i]) check = false;
			}
		}
		i++;
	}

	if (check)	cout << "Es un palíndromo.";
	else cout << "No es un palíndromo.";

	return 0;
}

// TODO: Revisar este programa y optimizarlo