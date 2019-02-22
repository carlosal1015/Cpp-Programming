#include <iostream>
//#include <string>

using namespace std;

int main(){

/*
	char franss[] = "Franss Cruz";

	string word = "Hola mundo";

	cout << franss << endl << word.length() << endl;

	cout << word.replace(5,2,"wa") << endl;

	cout << "Ingrese una palabra u oración: ";
	//cin >> word;
	getline(cin,word);
	cout << word << endl;

	//char letra = word[2];

	word[6] = '*';

	cout << word << endl;

	string fc(9, 'f');

	cout << fc << fc.length() << endl;

	string str(fc,4, 2);

	cout << str << endl;

	const char* C_string = str.c_str();
*/

	string s = "AAAAAAAAA";
	string s2 = "Robotaaa";
	string s5 = "Soccer";
	string s6 = s + s2 + s5;

	cout << s6 << endl;
	cout << s2 + s5 << endl;

	cout << s2.substr(4, 2) << endl;

return 0;

}