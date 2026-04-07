#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Cantidad de estudiantes: ";
    cin >> n;

    float* notas = new float[n];

    for(int i = 0; i < n; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
    }

    float suma = 0, mayor = notas[0], menor = notas[0];

    for(int i = 0; i < n; i++) {
        suma += notas[i];

        if(notas[i] > mayor) {
            mayor = notas[i];
        }

        if(notas[i] < menor) {
            menor = notas[i];
        }
    }

    cout << "Promedio: " << suma / n << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    delete[] notas;

    return 0;
}
