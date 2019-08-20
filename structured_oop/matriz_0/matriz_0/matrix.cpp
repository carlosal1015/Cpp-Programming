//Una matriz
#include<iostream>
#include<stdlib.h>
using namespace std;
void main(){
	int i,j,fil,col,Ma[100][100];
	cout<<"Ingrese el numero de Filas= ";
	cin>>fil;
	cout<<"Ingrese el numero de Columnas ";
	cin>>col;
	for(i=1;i<=fil;i++)
		for(j=1;j<=col;j++)
			cin>>Ma[i][j];
	cout<<endl<<endl;

	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<Ma[i][j]<<' ';}
			cout<<endl;}
	system("pause");
}
