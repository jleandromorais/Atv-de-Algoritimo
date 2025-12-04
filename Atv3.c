#include<stdio.h>

int buscaSequencial(int vetor[],int tamanho,int valor){
    for(int i=0;i<tamanho;i++){
        if (vetor[i]==valor){
            return i;
        }
        return -1;
    }
}

int main(){
    int vetor[]={10,20,30,40,50,60,70,80,90,100};
    int valor=55;
    int qnt=buscaSequencial(vetor,10,valor);

    if (qnt==-1){
        printf("Valor não encontrado");
    }
    else{
        printf("Valor encontrado");
    }

}