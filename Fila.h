#ifndef FILA_H
#define FILA_H
#include "Lista.h"

// Definição da classe Fila
class Fila {
private:
    Lista* lista;

public:
    Fila();
    void enfileirar(int valor);
    void desenfileirar();
    void imprimir();
};

#endif

