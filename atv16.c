#include <stdio.h>

void selectionSortMostrando(int vet[], int tam) {

    for (int i = 0; i < tam - 1; i++) {

        int min_idx = i;

        // encontra o menor elemento
        for (int j = i + 1; j < tam; j++) {
            if (vet[j] < vet[min_idx]) {
                min_idx = j;
            }
        }

        // se precisar trocar, troca
        if (min_idx != i) {
            int temp = vet[i];
            vet[i] = vet[min_idx];
            vet[min_idx] = temp;

            // mostra vetor APÓS a troca
            for (int k = 0; k < tam; k++) {
                printf("%d ", vet[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    int vet[] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18};
    int tam = 10;

    selectionSortMostrando(vet, tam);

    return 0;
}
