#include <iostream>
#include "Lista.h"

int main()
{
    Elemento* uno = new Elemento("Pepas");
    Elemento* dos = new Elemento("El martillo");
    Elemento* tres = new Elemento("Las estaciones de Vivaldi");
    Elemento* cuatro = new Elemento("Baby cohete");

    Lista* lista = new Lista();
    lista->Agregar(uno);
    lista->Agregar(dos);
    lista->Agregar(tres);
    lista->Agregar(cuatro);

    Elemento* i = lista->GetPrimer();
    while(i != nullptr)
    {
        std::cout << i->GetNombre() << std::endl;
        i = i->GetSiguiente();
    }
    return 0;
}
