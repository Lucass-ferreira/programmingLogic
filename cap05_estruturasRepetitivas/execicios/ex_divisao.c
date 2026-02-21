#include <stdio.h>

int main(){

    int num_vez;
    float divisao, numerador, denominador;

    printf("Quantos casos voce vai digitar: ");
    scanf("%d", &num_vez);

    for (int ind = 0; ind < num_vez; ind++){

        printf("Entre com o numerador: ");
        scanf("%f", &numerador);

        printf("Entre com o denominador: ");
        scanf("%f", &denominador);

        if(denominador == 0){
            printf("DIVISAO IMPOSSIVEL \n");
        } else {
            divisao = numerador / denominador;
            printf("DIVISAO: %.2f \n", divisao);
        }

    }
    

    return 0;
}