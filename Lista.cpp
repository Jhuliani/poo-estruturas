#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {
    this->inicio = NULL;
    this->fim = NULL;
    this->tamanho = 0;
}

void Lista::adicionarInicio(int valor) {
    No* novo = new No(valor);
    if (this->inicio == NULL) {
        this->inicio = novo;
        this->fim = novo;
    } else {
        novo->proximo = this->inicio;
        this->inicio = novo;
    }
    this->tamanho++;
}

void Lista::adicionarFim(int valor) {
    No* novo = new No(valor);
    if (this->fim == NULL) {
        this->inicio = novo;
        this->fim = novo;
    } else {
        this->fim->proximo = novo;
        this->fim = novo;
    }
    this->tamanho++;
}

void Lista::removerInicio() {
    if (this->inicio != NULL) {
        No* aux = this->inicio;
        this->inicio = this->inicio->proximo;
        delete aux;
        this->tamanho--;
    }
}

void Lista::imprimir() {
    No* atual = this->inicio;
    cout << "[";
    while (atual != NULL) {
        cout << atual->valor;
        atual = atual->proximo;
        if (atual != NULL) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int Lista::getTamanho() {
    return this->tamanho;
}

