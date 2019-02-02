// anidamiento de if
#include <iostream>
using namespace std;

int main(){

	float n1, n2, n3, n4, promedio;
	bool condition;

	cout << "Ingrese las cuatro notas= " << endl;
	cin >> n1 >> n2 >> n3 >> n4;
	
	condition = (n1>=0 && n1<=10) && (n2>=0 && n2<=10) && (n3>=0 && n3<=10) && (n4>=0 && n4<=10);

	if (condition){
		promedio = (n1 + n2 + n3 +n4) / 4;
		
		if (promedio<=2)	cout << "Malo." << endl;
			else if (promedio<=5)	cout << "Desaprobado." << endl;
				else if (promedio<=7)	cout << "Derecho a sustitutorio." << endl;
					else if (promedio<=10)	cout << "Aprobado." << endl;
	}
		
	else
		cout << "Alguna nota se ingresó mal." << endl;
	return 0; 
}
