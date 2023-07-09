#include<iostream>
#include<stdlib.h>
#include<conio.h>


using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

//Prototipos
void agregarPila(Nodo *&, char);
void sacarPila(Nodo *&, char &);


int main()
{
    char n, dato;
    int opc;
    Nodo *pila = nullptr;

    do
    {
        cout << "\n1. Insertar un caracter a la pila" << endl;
        cout << "2. Sacar un caracter de la pila y mostrarlos" << endl;
        cout << "3. Salir" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            
            cout << "Ingrese un caracter: ";
            cin >> n;
            agregarPila(pila, n);
            break;
        case 2:
            cout << "Sacando los elementos de la pila: "<<endl;
            while (pila != nullptr)
            {
                sacarPila(pila, dato);
                if (pila != nullptr)
                {
                    cout << dato << ", ";
                }
                else
                {
                    cout << dato << ".";
                }
            }
            getch();
            break;
        case 3:
            cout << "Saliendo..." << endl;
            getch();
            break;
        }
        system("cls");
    } while (opc!=3);
    
    return 0;
}


//Definicio de funciones
void agregarPila(Nodo *&pila, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"\tElemento "<<n<<" agregado a PILA correctamente"<<endl;
}

void sacarPila(Nodo *&pila, char &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}