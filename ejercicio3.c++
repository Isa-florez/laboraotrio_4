#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese nota (0-5): ";
    cin >> nota;

    if(nota < 0 || nota > 5) {
        cout << "Nota invalida";
    } else if(nota <= 2.9) {
        cout << "Reprueba";
    } else if(nota <= 4.5) {
        cout << "Aprueba";
    } else {
        cout << "Excelente";
    }

    return 0;
}
