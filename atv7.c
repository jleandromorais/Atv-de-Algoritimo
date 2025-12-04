#include <stdio.h>

int main() {
    int valores[] = {15, 25, 35, 45, 55};
    int tamanho = 5;
    int i;

    printf("Valor\tHash (mod 10)\n");
    printf("----------------------\n");

    for (i = 0; i < tamanho; i++) {
        int hash = valores[i] % 10;
        printf("%d\t%d\n", valores[i], hash);
    }

    return 0;
}
