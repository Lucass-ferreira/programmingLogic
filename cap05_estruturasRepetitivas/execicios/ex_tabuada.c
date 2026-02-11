#include <stdio.h>

int main() {

    int num_tabuada;

    printf("Digite o numero da tabuada: ");
    scanf("%d", &num_tabuada);

    for (int indice = 1; indice < 11; indice++){
        printf( "%d X %d = %d \n", indice, num_tabuada, indice * num_tabuada);
    }

    printf("FIM TABUADA!");
    

    return 0;
}