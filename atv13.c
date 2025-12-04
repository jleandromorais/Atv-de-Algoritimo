#include <stdio.h>

void insertionSort(int vet[], int n) {
    for (int i = 1; i < n; i++) {
        int key = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];  // CORREÇÃO AQUI
            j--;
        }

        vet[j + 1] = key;
    }
}

int main() {
    int vet[] = {22, 11, 99, 88, 9, 7, 42, 65, 33, 10};
    int tam = 10;
    
    insertionSort(vet, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}
