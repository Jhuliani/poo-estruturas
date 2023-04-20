#include <iostream>
#include "fila.h"
#include "pilha.h"

using namespace std;

int main() {
    Fila fila;
    Pilha pilha;
    int opcao, valor;

    do {
        cout << "Escolha uma opcao:" << endl;
        cout << "1 - Adicionar na fila" << endl;
        cout << "2 - Remover da fila" << endl;
        cout << "3 - Imprimir fila" << endl;
        cout << "4 - Empilhar na pilha" << endl;
        cout << "5 - Desempilhar da pilha" << endl;
        cout << "6 - Imprimir pilha" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a ser adicionado na fila: ";
                cin >> valor;
                fila.enfileirar(valor);
                break;
            case 2:
                fila.desenfileirar();
                break;
            case 3:
                cout << "Fila: ";
                fila.imprimir();
                break;
            case 4:
                cout << "Digite o valor a ser empilhado na pilha: ";
                cin >> valor;
                pilha.empilhar(valor);
                break;
            case 5:
                pilha.desempilhar();
                break;
            case 6:
                cout << "Pilha: ";
                pilha.imprimir();
                break;
            case 0:
                break;
            default:
                cout << "Opcao invalida." << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}


