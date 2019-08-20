//una tienda comercial
#include<iostream>
#include<stdlib.h>
#define dscto1 0.07
#define dscto2 0.04
#define igv 0.18
using namespace std;
void main(){
	float Q,pneto1,pneto2,pneto,Dscto;
	cout<<"Ingrese el valor de la compra Q= ";cin>>Q;
	if(Q>50)
		Dscto=Q*dscto1;
	else
		Dscto=Q*dscto2;
	pneto1=Q-Dscto;
	pneto2=pneto1*igv;
	pneto=Q+pneto2;

	cout<<"El pago neto= "<<pneto<<endl;system("pause");}