#include <stdio.h>

int main() {

    int num1, posicao = 0;
    double vetor[10], maior_val = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    for(int i = 0; i < num1; i++){
        printf("Digite um numero: ");
        scanf("\n %lf", &vetor[i]);

        if(maior_val < vetor[i]){
            maior_val = vetor[i];
            posicao = i;
        }
    }

    printf("\nMAIOR VALOR: %.2lf \n", maior_val);
    printf("POSICAO DO MAIOR VALOR = %d", posicao);

    return 0;
    
}