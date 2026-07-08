#include <stdio.h>

int main() {

    int num1;
    double vetor[10], media = 0, soma = 0;

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

    printf("VALORES = ");
    for(int i = 0; i < num1; i++){
        printf("%.1lf  ", vetor[i]);
        soma += vetor[i];
    }

    media = soma / num1;

    printf("\nSOMA = %.2lf", soma);
    printf("\nMEDIA = %.2lf", media);
    
    return 0;
    
}