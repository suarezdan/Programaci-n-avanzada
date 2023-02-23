#include <iostream>
#include <fstream>

using namespace std;

// Cada cliente indica sus datos
struct Cliente {
    string nombre;
    string correo;
    long int cedula;
};

int main() {
    // Se genera un puntero
    Cliente *Cliente1 = new Cliente;

    // Recopilacion de los datos del cliente 
    cout << "Ingrese su nombre: ";
    getline(cin, Cliente1->nombre);

    cout << "Ingrese su correo: ";
    getline(cin, Cliente1->correo);

    cout << "Ingrese su cedula: ";
    cin >> Cliente1->cedula;

    // Leer los datos para generar la factura
    ofstream Facturafuente("factura.txt");

    // Se genera la factura
    Facturafuente << "FACTURA" << endl;
    Facturafuente << "Nombre: " << Cliente1->nombre << endl;
    Facturafuente << "Correo: " << Cliente1->correo << endl;
    Facturafuente << "Cedula: " << Cliente1->cedula << endl;

    // Hacer que no se almacene los datos del cliente
    Facturafuente.close();
    delete Cliente1;

    return 0;
}