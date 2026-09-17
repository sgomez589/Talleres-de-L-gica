#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 
int porcentaje_comision = 10;
 
double sueldo;
float comision;
float sueldo_total;

cout <<  "Ingrese su sueldo. $";
cin >> sueldo;

cout << "Ingrese el número de ventas que realizó. ";
cin >> comision;

sueldo_total = sueldo + (sueldo*comision*porcentaje_comision/100);

cout << "Con " << comision << " ventas realizadas, su sueldo será de: $" << setprecision (30) << sueldo_total;
 
}
 
 
 
    
