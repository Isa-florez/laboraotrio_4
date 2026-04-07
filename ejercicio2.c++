#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;

    if(b != 0) {
        cout << "Division: " << a / b << endl;
    } else {
        cout << "No se puede dividir por 0" << endl;
    }

    if(a > b) {
        cout << "El mayor es: " << a;
    } else {
        cout << "El mayor es: " << b;
    }

    return 0;
}
