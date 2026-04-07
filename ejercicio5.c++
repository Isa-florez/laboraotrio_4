#include <iostream>
using namespace std;

float areaCirculo(float r) {
    return 3.14 * r * r;
}

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

void parImpar(int n) {
    if(n % 2 == 0)
        cout << "Es par";
    else
        cout << "Es impar";
}

int main() {
    int op;

    cout << "1.Area\n2.Factorial\n3.Par o impar\n";
    cin >> op;

    if(op == 1) {
        float r;
        cin >> r;
        cout << areaCirculo(r);
    } 
    else if(op == 2) {
        int n;
        cin >> n;
        cout << factorial(n);
    } 
    else {
        int n;
        cin >> n;
        parImpar(n);
    }

    return 0;
}
