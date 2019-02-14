#include <iostream>
using namespace std;
void Mensaje(){
	cout<<"Bienvenido a las funciones con tipo de retorno void\n";
}

void Tabla(int n){
	for (int i=1;i<=12;i++)
		cout<<n<<"x "<<i<<"= "<<n*i<<endl;
    return ;
}

int main(){
	int n;
	Mensaje();
	cout<<"Ingrese un valor entero =";
	cin>>n;
	Tabla(n);
}
