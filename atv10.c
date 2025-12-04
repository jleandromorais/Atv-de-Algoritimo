#include <stdio.h>

/// Função que ordena um vetor usando Bubble Sort
void bubbleSort(int vet[], int n) {

    // Loop externo: controla quantas passadas serão feitas
    for (int i = 0; i < n - 1; i++) {

        // Loop interno: compara elementos adjacentes
        for (int j = 0; j < n - i - 1; j++) {

            // Se o elemento atual é maior que o próximo, trocamos
            if (vet[j] > vet[j + 1]) {

                // Swap (troca) dos elementos
                int temp = vet[j];       // guarda temporariamente vet[j]
                vet[j] = vet[j + 1];     // move o menor para a esquerda
                vet[j + 1] = temp;       // coloca o maior para a direita
            }
        }
    }
}

int main() {

    // Vetor a ser ordenado
    int vet[] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};

    // Tamanho do vetor
    int tam = 10;

    // Chama a função que ordena o vetor
    bubbleSort(vet, tam);

    // Imprime o vetor ordenado
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);  // "%d" = imprime número inteiro
    }

    return 0;
}
