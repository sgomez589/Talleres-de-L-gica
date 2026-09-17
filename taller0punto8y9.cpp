#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

double sueldo;
double opcion;
float gine;
float trau;
float pedi;

cout << "Indique su presupuesto: $";
cin >> sueldo;

gine = sueldo*0.4;

trau = sueldo*0.3;

pedi = sueldo*0.3;


cout << "El sueldo de cada área serán los siguientes: \nGinecología: $" << setprecision (30) << gine << "\nTraumatología: $" << setprecision (30) << trau << "\nPediatría: $" << setprecision (30) << pedi;

}