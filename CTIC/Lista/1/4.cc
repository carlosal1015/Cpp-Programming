/*
    Resolver el ejercicio anterior para el caso general,
    conociendo el número de horas trabajadas, pago por hora y
    la tasa de impuesto.
*/
#include <iostream>
using namespace std;

int main(){


    float salary, rate;
    int hours, money;

    cout << "Ingrese el nümero de horas trabajadas:" << '\n';
    cin >> hours;
    
    cout << "Ingrese el pago por hora:" << '\n';
    cin >> money;

    cout << "Ingrese la tasa de impuesto:" << '\n';
    cin >> rate;

    salary = (hours * money) * (1 - rate);
    
    cout << "El salario neto del trabajador es " << salary << " soles."<< endl;
    
    return 0;
}