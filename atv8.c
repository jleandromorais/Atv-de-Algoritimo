#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node *prox;
} Node;

#define TAM 10

Node* tabela[TAM];

// Função hash
int hash(int x) {
    return x % TAM;
}

// Inserção com encadeamento
void inserir(int x) {
    int h = hash(x);
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->valor = x;
    novo->prox = tabela[h];
    tabela[h] = novo;
}

// Buscar valor na tabela hash
Node* buscar(int x) {
    int h = hash(x);
    Node* atual = tabela[h];

    while (atual != NULL) {
        if (atual->valor == x)
            return atual;

        atual = atual->prox;   // AVANÇA NA LISTA
    }

    return NULL;
}

int main() {
    // Inicializar tabela
    for (int i = 0; i < TAM; i++) {
        tabela[i] = NULL;
    }

    // Inserções (APENAS UMA VEZ)
    inserir(12);
    inserir(22);
    inserir(32);
    inserir(42);

    int valor = 22;

    Node* res = buscar(valor);

    if (res != NULL)
        printf("Valor %d encontrado!\n", valor);
    else
        printf("Valor %d NAO encontrado!\n", valor);

    return 0;
}
