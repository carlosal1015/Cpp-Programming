#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int x,semilla;
	cout<<"Ingrese una semilla: ";
	cin>>semilla;
	srand(semilla);
	//Diez valores entre 0 y 5
	for (int i=1;i<=10;i++){
		x= rand()%6;
		cout<<x<<"\t";	
    }
	return 0;
}
