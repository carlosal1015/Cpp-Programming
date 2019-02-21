#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
	int cont,cw,cod;
	cont=cw=0;
	srand(time(NULL));
	while (cw<20){
		cod=rand()%26+97;
		cout<<char(cod)<<" ";
		if (char(cod)=='w')
		    cw++;
		cont++;
    }
	cout<<"\nTotal de minusculas generadas= "<<cont;
	return 0;	
}
