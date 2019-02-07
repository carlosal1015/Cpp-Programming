//anidamiento de if
#include <iostream>
using namespace std;
int main(){	
   float n1,n2,n3,n4,prom;
   cout<<"Ingrese las 4 notas= ";	
   cin>>n1>>n2>>n3>>n4;
   if (n1>=0 && n1<=10)
   	  if (n2>=0 && n2<=10)
		  if (n3>=0 && n3<=10)   	  
		      if (n4>=0 && n4<=10){
		           prom=(n1+n2+n3+n4)/4;
		           cout<<"Promedio= "<<prom<<"\n";
				   if (prom<=2)			  
				      cout<<"Malo";
				   else
				       if (prom<=5)    
					      cout<<"Desaprobado";
					   else 
					       if (prom<=7)
						     cout<<"Derecho a sustitutorio";
						   else     
						        cout<<"Aprobado";
			    }
		      else
		          cout<<"Error!";
		  else
		      cout<<"Error!";
	   else
	      cout<<"Error!";
   else
      cout<<"Error!";			
   return 0;
}
