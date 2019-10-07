#include <iostream>
#include <time.h>

using namespace std;

int main(void){
	srand((unsigned)time(NULL));
	int pc,dado;
	pc = rand()%6 + 1;
	cout << "Realice el lanzamiento:";
	cin >> dado;
	if(pc == dado)
		cout<<"Acierto";
	else{
		cout << "Sin suerte" << endl;
		cout << "El valor generado fue " << pc << endl;
	}
} 
