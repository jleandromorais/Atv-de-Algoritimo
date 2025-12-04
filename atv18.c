#include <stdio.h>

void selectionSortDecrescente(int vet[], int tam) {

    for (int i = 0; i < tam - 1; i++) {

        int max_idx = i;  // índice do maior elemento

        for (int j = i + 1; j < tam; j++) {
            if (vet[j] > vet[max_idx]) {
                max_idx = j;
            }
        }

        // troca o maior encontrado com a posição i
        int temp = vet[i];
        vet[i] = vet[max_idx];
        vet[max_idx] = temp;
    }
}

int main() {

    int vet[] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6};
    int tam = 10;

    selectionSortDecrescente(vet, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}
