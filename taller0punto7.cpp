#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double cop;
    float usd = 0.00032;
    float total;

cout << "Ingrese su valor de pesos. $";
cin >> cop;

total = cop*usd;

cout << "Su equivalencia en dólares es: $" << setprecision (30) << total;

}