#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
int año_actual = 2026;
int mes_actual = 9;
int dia_actual = 15;

double año_nacimiento;
double mes_nacimiento;
double dia_nacimiento;
double edad;
double mes;
double dia;

cout << "Ingrese su año de nacimiento. ";
cin >> año_nacimiento;

cout << "Ingrese su mes de nacimiento. (Formato 1-12) ";
cin >> mes_nacimiento;

cout << "Ingrese su día de nacimiento. (Formato 1-31) ";
cin >> dia_nacimiento;

edad = año_actual - año_nacimiento;

if (mes_nacimiento > mes_actual){
    
mes = 12 - (mes_nacimiento - mes_actual);
edad = año_actual - año_nacimiento - 1;
    
}

if (mes_nacimiento < mes_actual){

mes = mes_actual - mes_nacimiento;
edad = año_actual - año_nacimiento;

}

if (mes_nacimiento = 1,3,5,7,8,10,12 && dia_nacimiento > dia_actual){
    
dia = 31 - (dia_nacimiento - dia_actual);
    
}

if (mes nacimiento = 1,3,5,7,8,10,12 && dia_nacimiento < dia_actual){

dia = dia_actual - dia_nacimiento;

}


if (mes_nacimiento = 4,6,9,11, && dia_nacimiento > dia_actual){
    
dia = 30 - (dia_nacimiento - dia_actual);
    
}

if (mes_nacimiento = 4,6,9,11 && dia_nacimiento < dia_actual){

dia = dia_actual - dia_nacimiento;

}

if (mes_nacimiento = 2 && dia_nacimiento > dia_actual){
    
dia = 28 - (dia_nacimiento - dia_actual);
    
}

if (mes_nacimiento = 2 && dia_nacimiento < dia_actual){

dia = dia_actual - dia_nacimiento;

}

cout << "Tu edad es " << edad << " años, " << mes << " meses y" << dia << " días.";


}