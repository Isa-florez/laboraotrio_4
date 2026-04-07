#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "Lenguaje compilado: se traduce antes de ejecutarse" << endl;
    cout << "Lenguaje interpretado: se ejecuta linea por linea" << endl;
    cout << "C++ es un lenguaje compilado" << endl;

    cout << "\nElige paradigma:" << endl;
    cout << "1. Estructurado" << endl;
    cout << "2. Orientado a objetos" << endl;
    cin >> opcion;

    if(opcion == 1) {
        cout << "Estructurado: usa funciones y pasos ordenados";
    } else {
        cout << "POO: usa clases y objetos";
    }

    return 0;
}

