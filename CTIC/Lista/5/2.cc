#include <iostream>

using namespace std;

int main (){

	int i, j;

	int n = 33;

	for(int j = 0; j < 9; j++){
		for(int i = 0; i < 10; i++){
			cout << n << ":" << (char)n << "\t";	
			n++;
		}
		cout << endl;
	}
	

	return 0;
}