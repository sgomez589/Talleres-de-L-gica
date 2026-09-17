#include <iostream>
using namespace std;

int main(){
    
    double hombres;
    double mujeres;
    double estudiantes;
    float porcentaje_hombres;
    float porcentaje_mujeres;
    
cout << "Ingrese el número de hombres de la clase. ";
cin >> hombres;

cout << "Ingrese el número de mujeres en la clase. ";
cin >> mujeres;

estudiantes = hombres + mujeres;

porcentaje_hombres = (hombres/estudiantes) * 100;

porcentaje_mujeres = (mujeres/estudiantes) * 100;

cout << "El número de estudiantes en el salón es: " << estudiantes << "\n";

cout << "El porcentaje de hombres en el salón es: " << porcentaje_hombres << "%\n";

cout << "El porcentaje de mujeres en el salón es: " << porcentaje_mujeres << "%";

}