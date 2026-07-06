#include <stdio.h>

int main() {

    int num1;
    double vetor[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("Digite um numero: ");
        scanf("\n %lf", &vetor[i]);
    }

    printf(" \nVALORES: \n");
    for(int i = 0; i < num1; i++){
        printf("%.1lf \n", vetor[i]);
    }

    return 0;
    
}