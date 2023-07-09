#include <iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Punto p1(2, 3);

    cout << "El punto p1 tiene coordenadas: " << p1.getX() << ", " << p1.getY() << endl;

    Punto *p2 = new Punto();

    p2->setX(5);
    p2->setY(7);

    cout << "El punto p2 tiene coordenadas: " << p2->getX() << ", " << p2->getY() << endl;

    return 0;
}
