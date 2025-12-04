#include <stdio.h>

void insertionSortPares(int vet[], int tam) {
    // 1. Criar vetor auxiliar para guardar apenas os pares
    int pares[tam];
    int qtdPares = 0;

    // Coleta os pares
    for (int i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0) {
            pares[qtdPares] = vet[i];
            qtdPares++;
        }
    }

    // 2. Ordenar o vetor de pares usando Insertion Sort
    for (int i = 1; i < qtdPares; i++) {
        int key = pares[i];
        int j = i - 1;
        while (j >= 0 && pares[j] > key) {
            pares[j + 1] = pares[j];
            j--;
        }
        pares[j + 1] = key;
    }

    // 3. Devolver os pares ordenados para o vetor original
    int k = 0; // índice para percorrer o vetor 'pares' ordenado
    for (int i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0) {
            vet[i] = pares[k];
            k++;
        }
    }
}

int main() {
    int vet[] = {9, 8, 3, 4, 7, 6, 1, 2, 5, 0};
    int tam = 10;

    insertionSortPares(vet, tam);

    printf("Vetor ordenado (apenas pares): ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}