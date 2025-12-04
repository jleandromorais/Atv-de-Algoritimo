#include <stdio.h>

int buscaBinaria(int vet[], int tamanho, int valor) {
    int init = 0, fim = tamanho, meio;

    while (init < fim) {
        meio = (init + fim) / 2;  // CORRIGIDO
        if (vet[meio] < valor) {
            init = meio + 1;
        } else {
            fim = meio;
        }
    }
    return init;
}

int main() {
    int vet[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int x = 27;

    int pos = buscaBinaria(vet, 10, x);
    printf("Posição de inserção: %d\n", pos);

    return 0;
}
