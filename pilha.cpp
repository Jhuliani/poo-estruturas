#include "pilha.h"

Pilha::Pilha() {
}

void Pilha::empilhar(int valor) {
    lista.adicionarInicio(valor);
}

void Pilha::desempilhar() {
    lista.removerInicio();
}

void Pilha::imprimir() {
    lista.imprimir();
}

