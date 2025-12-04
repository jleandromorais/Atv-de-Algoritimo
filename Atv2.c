#include<stdio.h>


int buscaSequencial(int vetor[],int tamanho,int valor){
    int cont=0;
    for(int i=0;i<tamanho;i++){
        if(vetor[i]==valor){
            cont++;
        }
    }
    return cont;
}

int main(){
    int vetor[]={7,3,5,7,9,2,7,1,4,6};
    int valor=7;
    int pos =buscaSequencial(vetor,10,valor);

    if (pos==0){
        printf("Valor %d nao encontrado na posição",valor);
    }
    else{
        printf("Tem cerca de %d,de %d repetidos",pos,valor);
    }
    return 0;
}