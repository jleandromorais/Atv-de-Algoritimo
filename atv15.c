#include<stdio.h>

void insertionSortDecrescente(int vet[],int tam){

    for(int i=1;i<tam;i++){
        int key= vet[i];
        int j =i-1;

        while (j>=0 && vet[j]<key)
        {
            vet[j+1]=vet[j];
            j--;
        }
        vet[j+1]=key;
    }
}


int main(){

    int vet[] = {30, 20, 10, 40, 50, 70, 60, 90, 80, 100};
    int tam = 10;

    insertionSortDecrescente(vet, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}