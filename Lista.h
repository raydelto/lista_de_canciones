#pragma once //Se asegura de que la cabecera no se incluya más de una vez (forma moderna)
#include "Elemento.h"

class Lista
{
    public:
        Lista();
        void Agregar(Elemento* elemento);
        Elemento* GetPrimer() { return _primer; }

    private:
        Elemento* _primer;
        Elemento* _ultimo;
};
