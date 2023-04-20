#ifndef LISTA_H
#define LISTA_H
#include "No.h"

// Definição da classe Lista
class Lista {
private:
    No* inicio;
    No* fim;
    int tamanho;

public:
    Lista();
    void adicionarInicio(int valor);
    void adicionarFim(int valor);
    void removerInicio();
    void imprimir();
    int getTamanho();
};

#endif

