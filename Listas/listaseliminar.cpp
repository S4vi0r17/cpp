//En este ejemplo se usa erase para eliminar elementos de una lista
/*
 si la lista original es {1, 2, 3, 4, 3, 5, 3}, al llamar a lista.remove(3), 
 la lista resultante será {1, 2, 4, 5}. Todos los elementos con el valor 3 serán eliminados de la lista.
*/

#include <iostream>
#include <list>

int main() {
    std::list<int> lista = {1, 2, 3, 4, 5};

    // Eliminar el elemento en la posición 2
    auto it = lista.begin();
    std::advance(it, 2);
    it = lista.erase(it);
    
    // Eliminar los elementos en el rango [1, 4)
    auto first = lista.begin();
    auto last = lista.begin();
    std::advance(first, 1);
    std::advance(last, 4);
    lista.erase(first, last);

    std::cout << "Lista después de eliminar elementos: ";
    for (const auto& elem : lista) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
