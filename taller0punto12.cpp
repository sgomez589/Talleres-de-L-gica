#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
 
float matematicas;
float ematematicas;
float tmatematicas;
float tm1;
float tm2;
float tm3;
float fisica;
float efisica;
float tfisica;
float tf1;
float tf2;
float quimica;
float equimica;
float tquimica;
float tq1;
float tq2;
float tq3;

cout << "\033[33m" << "Si su nota es decimal, recuerde usar el formato X.XX\n" << "\033[0m";

cout << "Indique su nota en el examen de matemáticas: ";
cin >> ematematicas;

cout << "Indique su nota en la primera tarea de matemáticas: ";
cin >> tm1;

cout << "Indique su nota en la segunda tarea de matemáticas: ";
cin >> tm2;

cout << "Indique su nota en la tercera tarea de matemáticas: ";
cin >> tm3;

cout << "Indique su nota en el examen de física: ";
cin >> efisica;

cout << "Indique su nota en la primera tarea de física: ";
cin >> tf1;

cout << "Indique su nota en la segunda tarea de física: ";
cin >> tf2;

cout << "Indique su nota en el examen de química: ";
cin >> equimica;

cout << "Indique su nota en la primera tarea de química: ";
cin >> tq1;

cout << "Indique su nota en la segunda tarea de química: ";
cin >> tq2;

cout << "Indique su nota en la tercera tarea de química: ";
cin >> tq3;

tmatematicas = (tm1+tm2+tm3)/3;
tfisica = (tf1+tf2)/2;
tquimica = (tq1+tq2+tq3)/3;

matematicas = (ematematicas*0.9) + (tmatematicas*0.1);

fisica = (efisica*0.8) + (tfisica*0.2);

quimica = (equimica*0.85) + (tquimica*0.15);

cout << "El promedio que tiene en cada materia es el siguiente: \nMatemáticas: " << matematicas << "\nFísica: " << fisica << "\nQuímica: " << quimica;






}