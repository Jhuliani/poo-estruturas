#include "Fila.h"

Fila::Fila() {
    this->lista = new Lista();
}

void Fila::enfileirar(int valor) {
    this->lista->adicionarFim(valor);
}

void Fila::desenfileirar() {
    this->lista->removerInicio();
}

void Fila::imprimir() {
    this->lista->imprimir();
}

