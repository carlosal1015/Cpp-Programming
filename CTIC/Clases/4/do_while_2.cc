#include <iostream>
using namespace std;

int main (){
	int a, b;
	
	do{
		cout << "Tecleer un número positivo para A: ";
		cin >> a;
	}while(a <= 0);

	do{
		cout << "Teclee un número positivo para B: ";
		cin >> b;
	}while(b <= 0);
	
	cout << "a * b = " << a * b << endl;
	
	return 0;

}