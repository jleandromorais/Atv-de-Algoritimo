#include <stdio.h>

int buscaSequencial(int vetor[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            return i; // Encontrou, retorna o índice
        }
    }
    return -1; // <--- CORREÇÃO: Fica FORA do loop. Se acabou o for e não achou, retorna -1.
}

int main (){
    int vetor[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int valor = 25;
    
    // Atenção: O tamanho do vetor é 10, mas você passou 6 na função original. 
    // Se o 25 estivesse na posição 8, ele não acharia. Mudei para 10.
    int pos = buscaSequencial(vetor, 10, valor); 

    if(pos != -1){
        // CORREÇÃO: Se pos é diferente de -1, ele ENCONTROU.
        printf("Valor encontrado na posicao %d\n", pos);
    }
    else{
        printf("Valor nao encontrado\n");
    }
    
    return 0;
}