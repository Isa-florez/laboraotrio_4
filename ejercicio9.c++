#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int op;

    cout << "1. Registrar\n2. Listar\n3. Buscar\n";
    cin >> op;

    if(op == 1) {
        ofstream archivo("estudiantes.txt", ios::app);

        string nombre;
        int codigo;
        float nota;

        cout << "Nombre: ";
        cin >> nombre;
        cout << "Codigo: ";
        cin >> codigo;
        cout << "Nota: ";
        cin >> nota;

        archivo << nombre << " " << codigo << " " << nota << endl;
        archivo.close();
    }

    else if(op == 2) {
        ifstream archivo("estudiantes.txt");

        string nombre;
        int codigo;
        float nota;

        while(archivo >> nombre >> codigo >> nota) {
            cout << nombre << " " << codigo << " " << nota << endl;
        }

        archivo.close();
    }

    else if(op == 3) {
        ifstream archivo("estudiantes.txt");

        int buscar;
        cout << "Codigo a buscar: ";
        cin >> buscar;

        string nombre;
        int codigo;
        float nota;

        while(archivo >> nombre >> codigo >> nota) {
            if(codigo == buscar) {
                cout << "Encontrado: " << nombre << " " << nota;
            }
        }

        archivo.close();
    }

    return 0;
}
