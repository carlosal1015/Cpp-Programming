//Uso de acumulador
#include <iostream>
using namespace std;
int main(){
	int cont=1,acum=0;
	while (cont<=6){
		acum=acum+cont;
		cont=cont+1;
	}
	cout<<"Suma= "<<acum<<endl;	
}
