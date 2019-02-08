//Uso de acumulador
#include <iostream>
using namespace std;
int main(){
	int n,cont=1,acum=0,dato;
	cout<<"Total de datos a sumar= ";
	cin>>n;
	while (cont<=n){
		cout<<"Ingrese un dato= ";
		cin>>dato;
		acum=acum+dato;
		cont=cont+1;
	}
	cout<<"Suma= "<<acum<<endl;	
}
