//Usando la fu ncion recursiva
//Creando una funcion
#include<iostream>
#include<stdlib.h>
using namespace std;
void LeeN(long &N){
	cout<<"Ingrese el valor de N= ";
	cin>>N;
}
long double facto(long N){
	if(N==0||N==1)
		return 1;
	else
		return(N*facto(N-1));
}
double num_e(long N){
	double S=0;
	for(long i=1;i<=N;i++)
	S= S+powf(-1,i+1)*(2*i-1)*1.0/(powf(facto(2*i-1),1.0/(2*i-1)));
	return(S);
}
void main(){
	long M;
	LeeN(M);
	cout<<"el Factorial de N "<<facto(M)<<endl
		<<"El numero e= "<<num_e(M)<<endl;
	system("pause");
}