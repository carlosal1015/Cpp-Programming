//Creando una funcion
#include<iostream>
#include<stdlib.h>
using namespace std;
void LeeN(long &N){
	cout<<"Ingrese el valor de N= ";
	cin>>N;
}
long double facto(long N){
	long F=1;
	for(long i=1;i<=N;i++)
		F=F*i;
	return(F);
}
double num_e(long N){
	double S=0;
	for(long i=1;i<=N;i++)
	S= S+1.0/facto(i);
	return(S);
}
void main(){
	long M;
	LeeN(M);
	cout<<"el Factorial de N "<<facto(M)<<endl
		<<"El numero e= "<<num_e(M)<<endl;
	system("pause");
}