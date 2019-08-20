//hala la suma de una serie
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long N,i=1,F=1;double S=0;
	cout<<"Ingrese el Numero de Terminos N= ";cin>>N;
	while(i<=N){
		F=F*i;
		S=S+powf(-1,i+1)*(2*i-1)*1.0/powf(F,1.0/2);//sqrt(F)
		i++;
	}
	cout<<"La suma de los primeros N terminos= "<<S<<endl
		<<"Y el factorial de N= "<<N<<" Es "<<F<<endl;
	system("pause");
}