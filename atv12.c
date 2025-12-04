#include <stdio.h>

void bubleSort(int vet[],int tam){
    for (int i =0;i<tam-1;i++){
        for (int j=0;j<tam-i-1;j++){
            if(vet[j]<vet[j+1]){
                int temp=vet[j+1];
                vet[j+1]=vet[j];
                vet[j]=temp;
            }
        }
    }
}

int main(){

    
    int vet[]={12, 3, 45, 7, 18, 9, 25, 31, 6, 11} ;
    int tam=10;
    bubleSort(vet,tam);
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);  // "%d" = imprime número inteiro
    }

    return 0;
}