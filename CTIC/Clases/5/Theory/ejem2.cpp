#include <iostream>
using namespace std;
bool esPrimo(int n){
  int i,cdiv=0;
  bool resul;
  for (i=1;i<=n;i++)
     if (n%i==0)
	    cdiv++;
  if (cdiv==2)
      resul=true;
  else
      resul=false;  	
  return resul;
}
int main(){
	float u;
	cout<<"Ingrese entero n= ";
	cin>>u;
	if (esPrimo(u)==true)
		cout<<u<<" es Primo";
	else
		cout<<u<<" NO es Primo";	
	return 0;
}
