#include <iostream>
#include <string>

using namespace std;

int main(){

	string s; // s contiene 0 caracteres
	
	string s1("Hello");		//s1 contiene 5 caracteres
	string s2 = "Hello"; 	//s2 contiene 5 caracteres
	
	string s3(8, 'x');
	string s4 = s3;
	
	string s5(s2, 3, 2); // s5 copia una subcadena de s2; almacena "io"

	cout << s << s.length() << endl << s1 << s1.length() << endl << s2 << s2.length() << endl << s3 << s3.length() << endl << s4 << s4.length() << endl << s5 << s5.length() << endl;

	return 0;

}