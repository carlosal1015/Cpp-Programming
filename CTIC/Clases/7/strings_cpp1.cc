#include <iostream>
#include <string>

using namespace std;

int main(){
	// ahora string es el tipo, un objeto tiene los datos miembros y acciones que son metodos o funciones
	//string s;		//s contiene 0 caracteres
	string s1("Hello");
	
	char cs[] = "Napoleón"; // cadena en C
	string s = "Napoleón"; // cadena en C++
	
	cout << s << " tiene " << s.length() << " caracteres." << endl;
	
	s.replace(5,2,"iá"); // cambia s to "Napolian"
	
	cout << s << endl;

	return 0;
}