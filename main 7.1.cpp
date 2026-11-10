#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int valor(char c) {
    switch (toupper(c)) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default:  return 0;
    }
}

int romanoAArabigo(const string& romano) {
    int total = 0;
    int n = romano.length();

    for (int i = 0; i < n; i++) {
        int v = valor(romano[i]);
        if (i + 1 < n && v < valor(romano[i + 1]))
            total -= v;
        else
            total += v;
    }
    return total;
}

int main() {
    string romano;
    cout << "Ingrese un numero romano: ";
    cin >> romano;

    cout << "Numero arabigo: " << romanoAArabigo(romano) << endl;
    return 0;
}