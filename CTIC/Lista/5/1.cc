#include <iostream>
using namespace std;

void iterador(int, int);

int main(){

	int i, j;

	for(int j = 0; j < 3; j++){
		for(int i = 0; i < 4; i++){
			iterador(i, j);
		}
		iterador(i, j);
		cout << endl;
	}
	

	return 0;
}

void iterador(int i, int j){
	if ((i + j) % 2 == 0)	cout << "- ";
	else cout << "+ ";
	
}