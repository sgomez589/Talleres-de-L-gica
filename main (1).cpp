#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    double capital;
    double meses;
    float capital_ganado;
    
cout << "Ingrese su capital. $";
cin >> capital;

cout << "Ingrese el número de meses que depositará su dinero en el banco.";
cin >> meses;

capital_ganado = capital + (capital*2/100*meses);

cout << "El capital que tendrá en " << meses << " meses será: $" << setprecision (30) << capital_ganado;

}