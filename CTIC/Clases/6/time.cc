#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

	int x;
	//srand(cos(time(NULL)));
	srand(time(NULL));
	
	for(int i = 0; i < 10; i++){
		x = rand()%6;
		cout << x << "\t";
	}
	//cout << time(NULL);

	return 0;
}