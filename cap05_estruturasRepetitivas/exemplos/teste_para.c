#include <stdio.h>

int main(){

        int num, soma, numero;

        soma = 0;

        printf("Digite a quantidade de numeros: ");
        scanf("%d", &num);
     
        for (int ind = 0; ind < num; ind++){
            printf("Digite um numero: ");
            scanf("%d", &numero);

            soma += numero;
        };

        printf("SOMA: %d", soma);
        

    return 0;
}