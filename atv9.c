#include <stdio.h>

#define TAM 10

int tabela[TAM];

int hash(int x) {
    return x % TAM;
}

void inserir(int x) {
    int h = hash(x);

    // sondagem linear
    while (tabela[h] != -1) {
        h = (h + 1) % TAM;
    }

    tabela[h] = x;
}

int buscar(int x) {
    int h = hash(x);
    int start = h;

    while (tabela[h] != -1) {
        if (tabela[h] == x)
            return h; // encontrado

        h = (h + 1) % TAM;

        if (h == start)
            break; // deu a volta
    }

    return -1; // não encontrado
}

int main() {
    // inicializar tabela com -1
    for (int i = 0; i < TAM; i++)
        tabela[i] = -1;

    inserir(17);
    inserir(27);
    inserir(37);
    inserir(47);
    inserir(57);

    int pos = buscar(37);

    if (pos != -1)
        printf("37 encontrado na posição %d\n", pos);
    else
        printf("37 não encontrado\n");

    return 0;
}
