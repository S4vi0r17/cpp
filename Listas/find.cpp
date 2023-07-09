#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> lista = {1, 2, 3, 4, 5};

    // Buscar el elemento 3 en la lista
    int elementoBuscar = 3;
    auto it = std::find(lista.begin(), lista.end(), elementoBuscar);

    if (it != lista.end()) {
        std::cout << "Elemento encontrado en la posición: " << std::distance(lista.begin(), it) << std::endl;
    } else {
        std::cout << "Elemento no encontrado" << std::endl;
    }

    return 0;
}
