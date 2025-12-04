#include <stdio.h>

void bubleSort(int vet[], int tam) {
    for (int i = 0; i < tam - 1; i++) {

        int houveTroca = 0; // marca se houve troca nessa passada

        for (int j = 0; j < tam - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {

                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;

                houveTroca = 1; // houve troca
            }
        }

        // se não houve troca, o vetor já estava ordenado
        if (houveTroca == 0) {
            break;
        }
    }
}

int main() {

    int vet[] = {1,2,3,4,5,6,7,8,9,10}; 
    int tam = 10;

    bubleSort(vet, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}
