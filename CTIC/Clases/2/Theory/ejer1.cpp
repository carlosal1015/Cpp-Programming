#include <iostream>
using namespace std;
int main(){
   int A,B,aux;
   cout<<"Espa"<<char(164)<<"a";
   cout<<"\nPer"<<char(163);   
   cout<<"\nA= ";	
   cin>>A;
   cout<<"B= ";   
   cin>>B;   
   //intercambio
   aux=A;
   A=B;
   B=aux;
   cout<<"Luego del intercambio\n";
   cout<<"A= "<<A;	
   cout<<"\nB= "<<B;   

}
