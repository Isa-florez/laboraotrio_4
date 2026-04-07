#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    // Tabla
    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    // Suma
    for(int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << "Suma: " << suma << endl;

    // Primo
    int contador = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            contador++;
        }
    }

    if(contador == 2) {
        cout << "Es primo";
    } else {
        cout << "No es primo";
    }

    return 0;
}
