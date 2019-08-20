//Una aplicacion con for
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	long N,i,F=1;double S=0;
	cout<<"Ingrese un numero de varias cifras N= ";
	cin>>N;
	for(i=1;i<=N;i++){
		F=F*i;
		S=S+powf(-1,i+1)*(2*i-1)/(powf(sqrtf(F),1.0/(2*i-1)));
	}
	cout<<"La suma de la serie= "<<S<<endl;system("pause");}