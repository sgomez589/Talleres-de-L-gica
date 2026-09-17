#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

double p1;
double p2;
double p3;
double pp1;
double pp2;
double pp3;


float dinero_total;

cout <<  "Ingrese el capital invertido por el primer accionista: $";
cin >> p1;

cout <<  "Ingrese el capital invertido por el segundo accionista: $";
cin >> p2;

cout <<  "Ingrese el capital invertido por el tercer accionista: $";
cin >> p3;

dinero_total = p1 + p2 + p3;

pp1 = p1/dinero_total*100;

pp2 = p2/dinero_total*100;

pp3 = p3/dinero_total*100;

cout <<  "El porcentaje de inversión de cada accionista es:\nPersona 1: " << setprecision (4) << pp1 <<"%"<< "\nPersona 2: "  << setprecision (4) << pp2 << "%" << "\nPersona 3: " << setprecision (4) << pp3 <<"%";

}