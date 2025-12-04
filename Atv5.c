#include <stdio.h>

// A função agora recebe um ponteiro para um inteiro (*contador_buscas)
int buscaBinaria(int vetor[], int tamanho, int valor, int *contador_buscas){
    // Corrigido: fim é o último índice, que é tamanho - 1
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    
    // Inicializa o contador que está na main
    *contador_buscas = 0; 

    while(inicio <= fim){
        meio = (fim + inicio) / 2;
        
        // INCREMENTA O CONTADOR EM CADA TENTATIVA (em cada iteração)
        (*contador_buscas)++; 

        if(vetor[meio] == valor){
            return meio;
        }
        else if (vetor[meio] < valor){
            inicio = meio + 1;
        }
        else { 
            fim = meio - 1;
        }
    }
    return -1;
}

int main (){
    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valor = 100;
    
    // 1. Declara a variável que vai receber a contagem
    int buscas_feitas = 0;
    
    // 2. Passa o ENDEREÇO (&) dessa variável para a função
    int pos = buscaBinaria(vetor, 10, valor, &buscas_feitas);

    if (pos != -1) {
        printf("Valor %d encontrado no indice %d.\n", valor, pos);
        printf("Buscas realizadas: %d\n", buscas_feitas);
    } else {
        printf("Valor nao encontrado.\n");
        printf("Buscas realizadas: %d\n", buscas_feitas);
    }

    // Exemplo de Saída:
    // Valor 100 encontrado no indice 9.
    // Buscas realizadas: 3
    
    return 0;
}