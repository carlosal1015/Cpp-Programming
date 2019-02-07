//operadores booleanos
#include <iostream>
using namespace std;
int main(){	
   float x,y;
   cout<<"Ingrese coordenadas de un punto= ";	
   cin>>x>>y;
   if (x>0 && y>0)
      cout<<"IC";
   if (x<0 && y>0)
      cout<<"IIC";
   if (x<0 && y<0)
      cout<<"IIIC";
   if (x>0 && y<0)
      cout<<"IVC";
   return 0;
}
