/*
	Realiza un programa que proporcione el desglose de billetes
	y monedas de una cantidad entera de euros.
	Recuerda que hay billetes de 500, 200, 100, 50, 20, 10 y 5 euros;
	y monedas de 2 y 1 euro.
*/

#include<iostream>
using namespace std;

int main(){

	int monto, b_500, b_200, b_100, b_50, b_20, b_10, b_5, m_2, m_1;

	cout<< "Ingrese el monto en euros:\n";
	cin >> monto;

	b_500 = monto / 500;
	b_200 = (monto%500) / 200;
	b_100 = ( (monto%500) % 200) / 100;
	b_50 = ( ( (monto%500) % 200) % 100) / 50;
	b_20 = ( ( ( (monto%500) % 200) % 100) % 50) / 20;
	b_10 = ( ( ( ( (monto%500) % 200) % 100) % 50) % 20) / 10;
	b_5 = ( ( ( ( ( (monto%500) % 200) % 100) % 50) % 20) % 10) / 5;
	m_2 = ( ( ( ( ( ( (monto%500) % 200) % 100) % 50) % 20) % 10) % 5) / 2;
	m_1 = ( ( ( ( ( ( ( (monto%500) % 200) %100) % 50) % 20) % 10) % 5) % 2) / 1;

	cout<<"Puede desglosar el momto en : \n";
	cout<<"\n Billetes de 500 euros:\n" << b_500;	
	cout<<"\n Billetes de 200 euros:\n" << b_200;
	cout<<"\n Billetes de 100 euros:\n" << b_100;
	cout<<"\n Billetes de 50 euros:\n" << b_50;
	cout<<"\n Billetes de 20 euros:\n" << b_20;
	cout<<"\n Billetes de 10 euros:\n" << b_10;
	cout<<"\n Monedas de 5 euros:\n" << b_5;
	cout<<"\n Monedas de 2 euros:\n" << m_2;
	cout<<"\n Monedass de 1 euros:\n" << m_1;

	return 0;
}
