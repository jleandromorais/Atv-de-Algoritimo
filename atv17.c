#include <stdio.h>

int selectionSortContando(int vet[], int tam) {
    int trocas = 0;

    for (int i = 0; i < tam - 1; i++) {

        int min_idx = i;

        for (int j = i + 1; j < tam; j++) {
            if (vet[j] < vet[min_idx]) {
                min_idx = j;
            }
        }

        // troca apenas se min_idx for diferente
        if (min_idx != i) {
            int temp = vet[i];
            vet[i] = vet[min_idx];
            vet[min_idx] = temp;
            trocas++;
        }
    }

    return trocas;
}

int main() {

    int vet[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int tam = 10;

    int total = selectionSortContando(vet, tam);

    printf("Total de trocas: %d\n", total);

    return 0;
}
