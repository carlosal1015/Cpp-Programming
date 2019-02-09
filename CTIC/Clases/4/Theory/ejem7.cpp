//funciones
#include <iostream>
using namespace std;
int MCD(int a,int b){
	//variables locales
    int r=a%b;
    while (r!=0){
    	a=b;
    	b=r;
    	r=a%b;
	}
    return b;
}
int main(){
	int x,y;
	cout<<"Primer Valor= ";cin>>x;
	cout<<"Segundo Valor= ";cin>>y;	
	//invocacion a la funcion MCD
	cout<<"El MCD es= "<<MCD(x,y);
	return 0;
}
