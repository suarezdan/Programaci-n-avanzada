#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Dar un numero entre 0 y 25 aleatoriamente 
int numAleatoriamente() {
    return rand() % 26;
}

int main() {
    // Hacer un vector con 10 valores
    int Vector1[10];

    // Crear número aleatoriamente completando el vector
    srand(time(NULL)); // Generacion del numero aleatorio
    for (int i = 0; i < 10; i++) {
        Vector1[i] = numAleatoriamente();
    }

    // Se genera un puntero para el vector
    int *puntero1;
    puntero1 = & Vector1[0];

    // Por medio del puntero ubicar los datos en el vector
    for (int i = 0; i < 10; i++) {
        cout << *(puntero1 + i) << " ";
    }
    cout << endl;

    // Usando el puntero dar la ubicacion de los valores
    for (int i = 0; i < 10; i++) {
        cout << (puntero1 + i) << " ";
    }
    cout << endl;

    return 0;
}