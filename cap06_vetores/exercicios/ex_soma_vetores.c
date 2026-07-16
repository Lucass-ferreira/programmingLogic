#include <stdio.h>

int main() {

    int num1;
    double vetorA[10], vetorB[10], vetorC[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    printf("Digite os valores do vetor A: \n");
    for(int i = 0; i < num1; i++){
        scanf("\n %lf", &vetorA[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for(int i = 0; i < num1; i++){
        scanf("\n %lf", &vetorB[i]);
    }

    printf("Vetor Resultante: \n");
    for(int i = 0; i < num1; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("%.2lf \n", vetorC[i]);
    }

    return 0;
    
}