#include <iostream> 

using namespace std; 

int main() { 

    int platos[5]; // Arreglo de tamaño 5 

    int tope = -1; // Indica que la pila está vacía al inicio 

    int opcion; 

    cout << "--- Simulador de Pila de Platos (LIFO) ---" << endl; 

    while (tope < 4) { 

        cout << "\nIngrese el numero del plato para ponerlo en la pila: "; 

        cin >> platos[++tope]; // Incrementa el tope y guarda el plato 

        // Regla LIFO: El último en entrar es el que se ve arriba 

        cout << ">>> El plato que esta arriba de todo es el: " << platos[tope] << endl; 

        if (tope == 4) { 

            cout << "\n¡La pila de platos esta llena!" << endl; 

        } 

    } 

    // Mostrar el estado final de la pila (de arriba hacia abajo) 

    cout << "\nOrden de la pila (Cima -> Base):" << endl; 

    for (int i = tope; i >= 0; i--) { 

        cout << "| Plato " << platos[i] << " |" << endl; 

    } 

    return 0; 

} 