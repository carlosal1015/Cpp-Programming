#include <iostream>
#define TAM 80
using namespace std;
int Longitud(char *ptr){
    int lon=0;
    while (*ptr!='\0'){
    	lon++;
    	ptr++;      //avanzamos a la siguiente direccion (aritmetica de punteros)
	}
	return lon;
}
int main(){
    char cad[TAM];
    char *ptr;
    int n;
    cout<<"Ingrese una frase=  ";
    gets(cad);
    //ptr=&cad[0];     
	ptr=cad;
    n=Longitud(ptr);
    cout<<"Longitud= "<<n<<endl;
	return 0;
}
