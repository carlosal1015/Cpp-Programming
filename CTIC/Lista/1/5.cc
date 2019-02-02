/*
    Escriba un programa que pida dos números enteros que representen al dividendo y divisor y obtenga el cociente y el resto.
*/
#include <iostream>
using namespace std;

int main(){

    int dividend, divisor, quotient, remainderr;

    cout << "Digite el dividendo:" << endl;
    cin >> dividend;
    cout << "Digite el divisor:" << endl;
    cin >> divisor;

    quotient = dividend / divisor;
    remainderr = dividend % divisor; 

    cout << "El dividendo es:" << dividend <<'\n';
    cout << "El divisor es:" << divisor <<'\n';
    cout << "El cociente es:" << quotient <<'\n';
    cout << "El residuo es:" << remainderr <<'\n';

    return 0;
}