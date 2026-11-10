#include <iostream>
#include <vector>

int main() {
    const int TOTAL_PRIMOS = 80;
    std::vector<int> primos(TOTAL_PRIMOS);

    // El primer número primo conocido es el 2
    primos[0] = 2;
    int contador = 1;
    int candidato = 3;

    // Generar primos probando divisibilidad solo por los primos previamente encontrados
    while (contador < TOTAL_PRIMOS) {
        bool esPrimo = true;

        for (int i = 0; i < contador; i++) {
            if (candidato % primos[i] == 0) {
                esPrimo = false;
                break; // No es primo, se descarta
            }
        }

        if (esPrimo) {
            primos[contador] = candidato;
            contador++;
        }

        candidato += 2; // Evaluar solo números impares
    }

    // Visualizar la tabla con los 80 primeros números primos
    std::cout << "=== LOS 80 PRIMEROS NÚMEROS PRIMOS ===" << std::endl;
    for (int i = 0; i < TOTAL_PRIMOS; i++) {
        std::cout << primos[i] << "\t";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl; // Salto de línea cada 10 elementos
        }
    }

    return 0;
}
