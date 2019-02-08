//Uso de for
#include <iostream>
using namespace std;
int main(){
	int n,c,cdiv;
	cout<<"Ingrese un numero= ";	
	cin>>n;
	cout<<"a) Divisores\n";
	for (c=1;c<=n;c++)
	   if (n%c==0)
	      cout<<c<<"\t";
	cout<<"\nb) Es Primo?\n";
	cdiv=0;
	for (c=1;c<=n;c++)
	   if (n%c==0)
	      cdiv++; 
	if (cdiv==2)
	      cout<<n<<" Es Primo\n";	    
	else
	      cout<<n<<" NO Es Primo\n";	    	
	return 0;
}	
