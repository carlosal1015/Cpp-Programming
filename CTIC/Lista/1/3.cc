/*
    Determinar el salario neto de un trabajador que trabajó 36 horas,
    con un pago por hora de S/50.00 soles y la tasa de impuesto del 13%.
*/
#include <iostream>
using namespace std;    

int main(){

    float salary, rate = 0.13;
    int hours = 36, money = 50;

    salary = (hours * money) * (1 - rate);
    cout << "El salario neto del trabajador es " << salary << " soles."<< endl;
    
    return 0;
}