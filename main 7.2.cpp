#include <iostream>
using namespace std;

void invertir(int a[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int aux = a[i];
        a[i] = a[j];
        a[j] = aux;
        i++;
        j--;
    }
}

int main() 
{
    int n;
    cout << "Cantidad de numeros (n): ";
    cin >> n;

    int* a = new int[n];
    for (int k = 0; k < n; k++) {
        cout << "a[" << k << "] = ";
        cin >> a[k];
    }

    invertir(a, n);

    cout << "Arreglo invertido: ";
    for (int k = 0; k < n; k++)
        cout << a[k] << " ";
    cout << endl;

    delete[] a;
    return 0;
}
