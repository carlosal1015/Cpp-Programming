/*
//POO
//Objeto Circulo
#include<iostream>
#include<stdlib.h>
#include<math.h>
#define pi 2*asin(1.0)
class circulo{
float R;
public:
	void leeR(float P);
	double A(float R);
	double L(float R);
};

using namespace std;
//Implementacion
void circulo::leeR(float P)
{R=P;}

double circulo::A(float R)
{return(pi*powf(R,2));}

double circulo::L(float R)
{return(2*pi*R);}

void main(){
	float M;circulo c1;
	cout<<"Ingrese el radio ";
	cin>>M;
	c1.leeR(M);
	cout<<"El area del circulo= "<<c1.A(M)<<endl
		<<"La longitud del cocul= "<<c1.L(M)<<endl;
	system("pause");
}

//Objeto Trapecio
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class trapecio{
	float B,b,h;
public:
	void leeBbh(float m,float n, float p);
	double area(float B,float b,float h);
};

//Implementacion
void trapecio::leeBbh(float m,float n, float p)
{B=m;b=n;h=p;}

double trapecio::area(float B, float b, float h)
{return((B+b)*h/(2.0));}

void main(){
	float x,y,z;trapecio T1;
	cout<<"Ingrese la base Mayor ";cin>>x;
	cout<<"Ingrese la base menor ";cin>>y;
	cout<<"Ingrese la Altura ";cin>>z;
	T1.leeBbh(x,y,z);
	cout<<"El Area del trapecio= "<<T1.area(x,y,z)<<endl;
	system("pause");
}

//con constructores
#include<iostream>
#include<stdlib.h>
#include<math.h>
#define pi 2*asin(1.0)
using namespace std;
class circulo{
float R;
public:
	circulo(float P);
	circulo();
	double A(float R);
	double L(float R);
	~circulo()
	{cout<<"Liberando Memoria "<<endl;
	system("pause");}
};
circulo::circulo()
{R=15;}
circulo::circulo(float p)
{R=p;}
double circulo::A(float R)
{return(pi*powf(R,2));}
double circulo::L(float R)
{return(2*pi*R);}

void main(){
	float M;circulo C2();
	cout<<"Ingrese el radio R= ";cin>>M;
	circulo C1(M);
	cout<<"El Area= "<<C1.A(M)<<endl
		<<"La longitud= "<<C1.L(M)<<endl;
		//<<"El area desde un valor inicializado "<<C;

	system("pause");
}

//sin parametros
//con constructores
#include<iostream>
#include<stdlib.h>
#include<math.h>
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
	{cout<<"Liberando Memoria "<<endl;
	system("pause");}
};
circulo::circulo()
{R=15;}
circulo::circulo(float p)
{R=p;}
double circulo::A()
{return(pi*powf(R,2));}
double circulo::L()
{return(2*pi*R);}

void main(){
	float M;circulo C2;circulo C3(100);
	cout<<"Ingrese el radio R= ";cin>>M;
	circulo C1(M);
	cout<<"El Area= "<<C1.A()<<endl
		<<"La longitud= "<<C1.L()<<endl
		<<"El area desde un valor inicializado "<<C2.A()
		<<"\nLa longitud= "<<C2.L()<<endl
		<<"El area del circulo desde un valor inicializado desde main"<<endl
		<<C3.A()<<endl
		<<"la LOngitud del circulo desde un valor inicializado desde el main"<<endl
		<<C3.L()<<endl;

	system("pause");
}
*/

//HERENCIA
#include<iostream>
#include<stdlib.h>
using namespace std;
class Calculo{ // Clase Base
protected:
     float n1,n2;//Instancia estatica
     };
class Suma:public Calculo{
	float suma;
public:
	Suma();
	Suma(float p1,float p2);
	float OptSuma();
	double OptCociente();
};
//Implementacion
Suma::Suma()
{n1=17;n2=19;}

Suma::Suma(float p1,float p2)
{n1=p1;n2=p2;}

float Suma::OptSuma()
{return (n1+n2);}

double Suma::OptCociente(){
	if (n2>0)
return(n1/n2);
else{
	cout<<"No es posible la division ";
system("pause");
exit(0);
}
}

void main(){
	float m1,m2;Suma S1;
	cout<<"La suma con valores Inicializados= "<<endl;
	cout<<S1.OptSuma()<<endl;
	cout<<"El cociente con valores Inicializado= "<<endl;
	cout<<S1.OptCociente()<<endl;
	cout<<"Ingrese operando1= ";cin>>m1;
	cout<<"ingrese operando2= ";cin>>m2;

	system("pause");
}
