//mayor de dos numeros
#include <iostream>
using namespace std;
int main(){
   int A,B,mayor;
   cout<<"\nA= ";	
   cin>>A;
   cout<<"B= ";   
   cin>>B;   
   mayor=A;
   if (mayor<B)
      mayor=B;
   cout<<"Mayor= "<<mayor;
   return 0;
}
