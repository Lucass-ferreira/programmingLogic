#include <stdio.h>


int main() {

    int num1, num_neg;
    double vetor[10];
    int tam = 0;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("Digite um numero: ");
        scanf("%d", &num_neg);

        if(num_neg < 0){
                vetor[tam] = num_neg;
                tam++;
            }
    }

    printf(" \nNumeros Negativos: \n");
    for(int i = 0; i < tam; i++){
        printf("%.1lf \n", vetor[i]);
        
    }

    return 0;
    
}