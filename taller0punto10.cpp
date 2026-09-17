#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    double precio;
    float precio_ganado;
    
cout << "Ingrese el precio de su articulo. $";
cin >> precio;

precio_ganado = precio + (precio*3/10);

cout << "Tendrá que vender su producto en $" << setprecision (30) << precio_ganado << " para obtener una ganancia del 30%." ;

}