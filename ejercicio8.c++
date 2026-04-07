#include <iostream>
using namespace std;

int main() {
    int num;

    try {
        cout << "Ingrese un numero: ";
        cin >> num;

        if(cin.fail()) {
            throw "Error: no es un numero";
        }

        if(num < 0) {
            throw "Error: numero negativo";
        }

        cout << "Numero valido: " << num;
    }
    catch(const char* mensaje) {
        cout << mensaje;
    }

    return 0;
}
