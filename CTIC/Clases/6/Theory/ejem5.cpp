#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
	int x;
	srand(time(NULL));
	//Diez valores entre 0 y 5
	for (int i=1;i<=10;i++){
		x= rand()%6;
		cout<<x<<"\t";	
    }
	return 0;
}
