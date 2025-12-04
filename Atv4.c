#include<stdio.h>

int buscaBinaria(int vetor[],int tamanho,int valor ){
    int init=0,fim=tamanho-1,meio;

    while (init<=fim)
    {
        meio=(fim+init)/2;

        if (vetor[meio]==valor){
            return meio;
        }
        else if (vetor[meio]<valor){
            init=meio+1;
        }
        else
        {
            fim =meio-1;
        }
        
    }
    
        return -1;

}


int main(){

    int vetor[]={2, 4, 6, 8, 10, 12, 13, 14, 16, 18};
    int valor=13;
    int pos=buscaBinaria(vetor,10,valor);

    if (pos!=-1){
        printf("Valor: %d encontrado na posição %d ",valor ,pos);
    }
    else{
        printf("Valor não encontrado");
    }

    return 0;
}