#include <iostream>
//#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	//Declarar el contador general y el contador de las letras w.
	
	int count, countw, cod;
	count = countw = 0;

	srand(time(NULL));
	
	while(countw < 20){
		cod = rand()%26+97;
		cout << char(cod) << " ";
		
		if (char(cod) == 'w')	countw++;
		count++;
	}
	
	cout << endl << "Total de letras minúsculas generadas: " << count << endl;

	return 0;

}