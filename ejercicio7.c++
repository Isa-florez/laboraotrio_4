#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string nombre;

    cout << "Ingrese su nombre completo: ";
    getline(cin, nombre);

    cout << "Cantidad de caracteres: " << nombre.length() << endl;

    // Convertir a mayúsculas
    for(int i = 0; i < nombre.length(); i++) {
        nombre[i] = toupper(nombre[i]);
    }

    cout << "En mayusculas: " << nombre << endl;

    // Fecha actual
    time_t t = time(0);
    tm* now = localtime(&t);

    int anio = now->tm_year + 1900;

    cout << "Año actual: " << anio << endl;

    // Usuario automático
    string usuario = nombre.substr(0,3) + to_string(anio);
    cout << "Usuario: " << usuario << endl;

    return 0;
}
