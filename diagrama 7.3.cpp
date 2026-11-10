#include <iostream>

// Función para verificar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Función que retorna la cantidad de días de un mes dado
int diasDelMes(int mes, int anio) {
    switch (mes) {
        case 2:
            return esBisiesto(anio) ? 29 : 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

// Función para calcular y visualizar la nueva fecha
void calcularNuevaFecha(int dia, int mes, int anio, int diasAAnyadir) {
    while (diasAAnyadir > 0) {
        int dMax = diasDelMes(mes, anio);
        dia++;
        diasAAnyadir--;

        if (dia > dMax) {
            dia = 1;
            mes++;
            if (mes > 12) {
                mes = 1;
                anio++;
            }
        }
    }

    std::cout << "Nueva Fecha: " 
              << (dia < 10 ? "0" : "") << dia << "/"
              << (mes < 10 ? "0" : "") << mes << "/"
              << anio << std::endl;
}

int main() {
    int dia, mes, anio, diasAAnyadir;

    std::cout << "=== CALCULAR FECHA ===" << std::endl;
    std::cout << "Ingrese el dia: ";
    std::cin >> dia;
    std::cout << "Ingrese el mes: ";
    std::cin >> mes;
    std::cout << "Ingrese el anio: ";
    std::cin >> anio;
    std::cout << "Ingrese los dias a añadir: ";
    std::cin >> diasAAnyadir;

    calcularNuevaFecha(dia, mes, anio, diasAAnyadir);

    return 0;
}
