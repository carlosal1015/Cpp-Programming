//Creando un arreglo
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long N,i,S=0, mayor,V[100];float prome;
	cout<<"Ingrese el valor de N= ";cin>>N;
		for(i=1;i<=N;i++)
			cin>>V[i];
		cout<<'[';
		for(i=1;i<=N;i++)
			cout<<V[i]<<' ';
		cout<<']'<<endl;

		//cout<<"La suma= ";
		for(i=1;i<=N;i++)
			S=S+V[i];
		prome=S*1.0/N;
		cout<<"Halla el Mayor ";
		mayor=V[1];
		for(i=1;i<=N;i++)
			if(V[i]>mayor)
				mayor=V[i];
		cout<<"El peomedio= "<<prome<<endl
			<<"El mayor valor= "<<mayor<<endl
			<<"La Suma= "<<S<<endl;
		system("pause");
}
