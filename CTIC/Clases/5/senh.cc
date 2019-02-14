#include <iostream>
#include <cmath>

using namespace std;

float senh(float x){
	float y;

	y = (exp(x) - exp(-x))/2;
	
	return y;
}

int main(){
	float u;
	cout << "Ingrese x= " ;
	cin >> u;
	cout << "senh(" << u << ")=" << senh(u) << endl;

	return 0;
}