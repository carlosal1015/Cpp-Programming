#include <iostream>
using namespace std;

int main(){
    int num, u, d, c, suma;
    cout << "Ingrese el número:\n";
    cin >> num;

    u = num % 10;
    d = (num/10)%10;
    c = (num/10)/10;

    suma = c + d + u;

    cout << "La suma de cifras es " << suma << endl; 

    return 0;
}