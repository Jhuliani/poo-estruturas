#include <iostream>
using namespace std;

class No {
    friend class Lista;
    private:
        int valor;
        No* proximo;
    public:
        No(int valor) {
            this->valor = valor;
            this->proximo = NULL;
        }
};

class Lista {
    private:
        No* inicio;
        No* fim;
        int tamanho;
    public:
        Lista() {
            this->inicio = NULL;
            this->fim = NULL;
            this->tamanho = 0;
        }

        void adicionarInicio(int valor) {
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

        void adicionarFim(int valor) {
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

        void removerInicio() {
            if (this->inicio != NULL) {
                No* aux = this->inicio;
                this->inicio = this->inicio->proximo;
                delete aux;
                this->tamanho--;
            }
        }

        void imprimir() {
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

        int getTamanho() {
            return this->tamanho;
        }
};


class Pilha {
private:
    Lista lista;
public:
    Pilha() {}
    void empilhar(int valor) {
        lista.adicionarInicio(valor);
    }
    void desempilhar() {
        lista.removerInicio();
    }
    void imprimir() {
        lista.imprimir();
    }
};


class Fila {
private:
    Lista* lista;

public:
    Fila() {
        this->lista = new Lista();
    }

    void enfileirar(int valor) {
        this->lista->adicionarFim(valor);
    }

    void desenfileirar() {
        this->lista->removerInicio();
    }

    void imprimir() {
        this->lista->imprimir();
    }
};



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


