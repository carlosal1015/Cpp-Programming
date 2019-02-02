/*
	Mayor de dos números
*/
#include <iostream>
using namespace std;
int main(){

	int A, B, mayor;
	
	cout << "\nA= ";
	cin >> A;

	cout << "\nB= ";
	cin >> B;

	mayor = A;

	if (mayor < B)
		mayor = B;
		cout << "Mayor= " << mayor << endl;

	return 0;
}
