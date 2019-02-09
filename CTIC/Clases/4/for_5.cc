#include <iostream>
#include <cmath>
using namespace std;

int main(){
/*
int sign;

```
for(int i = 0; i < 3; i++){
	for(int j = 0; j <4; j++){
		sign = -1^(i+j);
		if(sign < 0) cout << "-";
		else	cout << "+";
	}
}
```
*/
	int d, u;
	
	for(d=1; d<=3; d++){
		for(u=1; u<=5;u++)
			cout << pow(d,u) << "\t";
		cout << endl;
	}
	
	return 0;

}