#ifndef ELEMENTO_H  //Se asegura de que la cabecera no se incluya más de una vez (forma tradicional)
#define ELEMENTO_H // Este mecanismo se llama inclusion guard.
#include <string>

class Elemento
{
    public:
        Elemento(std::string nombre);
        std::string GetNombre() { return _nombre; }
        void SetSiguiente(Elemento* siguiente) { _siguiente = siguiente; }
        Elemento* GetSiguiente() { return _siguiente; }

    
    private:
        std::string _nombre;
        Elemento* _siguiente;
};

#endif
