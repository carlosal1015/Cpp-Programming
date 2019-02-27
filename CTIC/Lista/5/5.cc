#include <iostream>
#define INF -6
#define SUP 6

int quadratic (int);

using namespace std;

int main (){

	int min = quadratic(INF);

	for(int p = INF; p < SUP; p++){
		if ( quadratic(p + 1) < min )	min = quadratic(p + 1);
	}

	cout << "El valor mínimo de f en [" << INF << "," << SUP << "] es "
			<< min << "." << endl;

	return 0;
}

int quadratic (int p){

	return  p*p - 2*p - 3;

}