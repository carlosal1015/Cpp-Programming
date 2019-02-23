#include <iostream>
using namespace std;
int main(){
    int a=15,b=19;
    int *ptr;
    cout<<"Contenido de a= "<<a<<endl;
    cout<<"Direccion de a= "<<&a<<endl;    
    ptr=&a;
    cout<<"Contenido de ptr= "<<ptr<<endl;
    cout<<"Direccion de ptr= "<<&ptr<<endl;    
    cout<<"Indireccion de ptr= "<<*ptr<<endl;        
	return 0;
}
