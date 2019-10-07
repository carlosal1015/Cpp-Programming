//Lanzamiento de un dado
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void main(){
	srand((unsigned)time (NULL));
	int pc, dado;
	pc=rand()%6+1;
	cout<<"Realice el lanzamiento ->";
	cin>>dado;
	if(pc==dado)
		cout<<"Acierto ";
	else
		cout<<"sin suerte"<<endl;
	cout<<"El valor generado fue "<<pc<<endl;
		cout<<endl;
		system("pause");
}
