#include <iostream>
#include <string>

using namespace std;

int main(){

	string message = "0123456789ABCDEXYZ";

	for(int i = 0; i < message.length()+1; i++){
	
	if (message[i] >= '0' && message[i] <= '9')	(	(message[i] >= '0' && message[i] <= '9') && message[i] != '0' ) ? message[i]-- : message[i] = '9';
	else if (message[i] >= 'A' && message[i] <= 'Z')	(	(message[i] >= 'A' && message[i] <= 'Z') && message[i] != 'Z' ) ? message[i]++ : message[i] = 'A';
	}
	cout << message << endl;

	return 0;
}