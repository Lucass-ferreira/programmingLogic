#include <stdio.h>

int main() {

    int num1, vetor[10], media = 0, soma = 0;
    double media_final = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("Digite um numero: ");
        scanf("\n %d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            soma += vetor[i];
            media++;
        }
    }

    media_final = soma / media;

    if((soma / media) < 0){
        printf("NENHUM NUMERO PAR");
    } else {
        printf("MEDIA DOS PARES = %.1lf", media_final);
    }
    
    return 0;
    
}