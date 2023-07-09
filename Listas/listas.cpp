#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lista;
    int opcion;
    int elemento;
    int posicion;

    do {
        cout << "¿Dónde deseas insertar el elemento?\n";
        cout << "1. Al inicio\n";
        cout << "2. Al medio\n";
        cout << "3. Al final\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa el elemento a insertar al inicio: ";
                cin >> elemento;
                lista.push_front(elemento);
                break;
            case 2:
                cout << "Ingresa el elemento a insertar: ";
                cin >> elemento;
                cout << "Ingresa la posición de inserción (índice base 0): ";
                cin >> posicion;
                if (posicion >= lista.size()) {
                    lista.push_back(elemento);
                } else {
                    auto it = lista.begin();
                    advance(it, posicion);
                    lista.insert(it, elemento);
                }
                break;
            case 3:
                cout << "Ingresa el elemento a insertar al final: ";
                cin >> elemento;
                lista.push_back(elemento);
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Inténtalo nuevamente.\n";
                break;
        }

        // Imprimir la lista actualizada
        cout << "Lista actual: ";
        for (const auto& elem : lista) {
            cout << elem << " ";
        }
        cout << endl << endl;

    } while (opcion != 4);

    return 0;
}
