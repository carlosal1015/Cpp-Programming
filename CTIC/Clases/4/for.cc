//do while (Validando el ingreso de valores negativos)
#include <iostream>
using namespace std;

int main(){
	int row = 8, column = 10;
	
	for(int j = 0; j < row; j++){
		for(int i = 0; i < column; i++)
			cout << "*";
		cout << endl;
	}
	
	return 0;

}