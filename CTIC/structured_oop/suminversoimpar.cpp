//Calcula la suma de los primeros N terminos de 1+1/3+1/5+1/7+...+1/2n-1
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long N,i=1;double S=0;
	cout<<"Ingrese el numero de Terminos N= ";cin>>N;
	while(i<=N){
		S+=1.0/(2*i-1);
		i++;
	}
	cout<<"La suma de los primeros N= "<<N<<"Terminos= "<<S<<endl;
	system("pause");
}
