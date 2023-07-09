#include <iostream>
#include <list>

int main() {
    std::list<int> lista = {1, 2, 3, 4, 5};

    std::cout << lista.size() << std::endl;
    // Eliminar el elemento en la posición 2
    auto first = lista.begin();
    auto last = lista.begin();
    std::advance(first, 1);
    std::advance(last, 5);
    auto it = lista.erase(first, last);

    std::cout << lista.size() << std::endl;

    std::cout << "Lista después de eliminar un elemento: ";
    for (const auto& elem : lista) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    if (it != lista.end()) {
        std::cout << "Iterador válido, apunta a: " << *it << std::endl;
    } else {
        std::cout << "Iterador no válido" << *it << std::endl;
    }

    return 0;
}
