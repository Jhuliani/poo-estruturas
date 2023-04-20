#ifndef PILHA_H
#define PILHA_H

#include "lista.h"

class Pilha {
private:
    Lista lista;
public:
    Pilha();
    void empilhar(int valor);
    void desempilhar();
    void imprimir();
};

#endif // PILHA_H

