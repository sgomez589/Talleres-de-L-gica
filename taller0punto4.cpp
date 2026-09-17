#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
float cp1;
float cp2;
float cp3;
float ef;
float tf;
float nf;

float pcp = 0.55;
float pef = 0.3;
float ptf = 0.15;

cout << "\033[33m" << "Si su nota es decimal, recuerde usar el formato X.XX\n" << "\033[0m";

cout << "Ingrese la nota de su primera calificación parcial (Formato 0-5): ";
cin >> cp1;

cout << "Ingrese la nota de su segunda calificación parcial (Formato 0-5): ";
cin >> cp2;

cout << "Ingrese la nota de su tercera calificación parcial (Formato 0-5): ";
cin >> cp3;

cout << "Ingrese la nota de su evaluación final (Formato 0-5): ";
cin >> ef;

cout << "Ingrese la nota de su trabajo parcial (Formato 0-5): ";
cin >> tf;

nf = pcp*(cp1+cp2+cp3)/3 + (ef*pef) + (tf*ptf);

cout << "Su nota final es: " << nf;

}