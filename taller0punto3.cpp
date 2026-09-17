#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

double precio;
float descuento;
float precio_total;

cout << "Ingrese el precio de su compra. $";  
cin >> precio;

cout << "Ingrese el precio del descuento. (Formato 0.XX)";
cin >> descuento;    

precio_total = precio - (precio*descuento);
    
cout << "El precio final de su compra será de: $" << precio_total;
  
    
}
