//Numero Perfecto
#include <iostream>
using namespace std;
int main(){
	int n,c,sumadiv;
	cout<<"c) Numero perfecto\n";	
	cout<<"Ingrese un numero= ";	
	cin>>n;
	sumadiv=0;
	for (c=1;c<n;c++)
	   if (n%c==0)
	      sumadiv+=c; 
	if (sumadiv==n)
	      cout<<n<<" Es Perfecto\n";	    
	else
	      cout<<n<<" NO Es Perfecto\n";	    	
	return 0;
}	
