#include <iostream>
using namespace std;

int square (int x);

int main(){
	int result;
	for(int i = 0; i < 10; i++){
		result = square (i + 1);
		cout << "El cuadrado de " << i + 1 << " es " << result << "." << endl; 
	}
	return 0;
}

int square (int x){
	int r;
	r = x * x;
	return r;
}