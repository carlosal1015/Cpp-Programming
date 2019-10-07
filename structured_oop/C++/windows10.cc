#include<iostream>
#include<cmath>
#define pi 2*asin(1.0)
using namespace std;
class circulo{
float R;
public:
circulo(float P);
circulo();
double A();
double L();
~circulo()
{cout<<"Liberando Memoria "<<endl;system("pause");}
};
circulo::circulo()
{R=15;}
circulo::circulo(float p)
{R=p;}
double circulo::A()
{return(pi*powf(R,2));}
double circulo::L()
{return(2*pi*R);}

int main(){
float M;circulo C2;circulo C3(100);
cout<<"Ingrese el radio R= ";cin>>M;
circulo C1(M);
cout<<"El Area= "<<C1.A()<<endl
<<"La longitud="<<C1.L()<<endl
<<"El area desde un valor inicializado"<<C2.A()
<<"\n La longitud="<<C2.L()<<endl
<<"El area del circulo desde un valor inicializado desde main="
<<C3.A()<<endl
<<"La longitud del círculo desde un valor inicializado desde main="
<<C3.L()<<endl;

system("pause");
}
