#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> autos;
    string color;

    cout << "=== LLEGADA DE AUTOS A LA META ===" << endl;
    cout << "(Principio FIFO - Cola)" << endl << endl;

    // Ingresar los 4 autos
    for (int i = 1; i <= 4; i++) {
        cout << "Ingrese el color del auto #" << i << " (llegada " << i << "): ";
        cin >> color;
        autos.push(color);  // Encolar
    }

    // Mostrar en el orden en que llegaron
    cout << endl;
    cout << "=== ORDEN DE LLEGADA A LA META ===" << endl;

    int posicion = 1;
    while (!autos.empty()) {
        cout << posicion << "° lugar: " << autos.front() << endl;
        autos.pop();   // Desencolar
        posicion++;
    }

    return 0;
}