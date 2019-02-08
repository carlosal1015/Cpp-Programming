//Uso de la variable bandera:lazo controlado por bandera
#include <iostream>
using namespace std;
int main(){
	int n,cont=0,dato;
	float prom,acum=0;
	bool flag;
	flag=true;
	while (flag==true){
		cout<<"Ingrese un dato= ";
		cin>>dato;
		if (dato%2==1){
			acum=acum+dato;
			cont=cont+1;	
		}
		else
		    flag=false;   //se detecta el primer par
	}
	prom=acum/cont;
	cout<<"Promedio= "<<prom<<endl;	
}
