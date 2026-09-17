#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

int a, b, m, s;

cout << "Ingrese la cantidad de segundos. ";
cin >> a;

b = 60;

s = a % b;

m = int (a/b);

cout << "La cantidad convertida es la siguiente.\n" << setprecision(30) << m << " minutos y "  << setprecision (30) << s << " segundos.";
 



    
}
