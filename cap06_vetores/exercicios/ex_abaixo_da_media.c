#include <stdio.h>

int main() {

    int num1;
    double vetorA[10], soma_vet = 0, media_vet = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    printf("Digite os valores do vetor A: \n");
    for(int i = 0; i < num1; i++){
        scanf("\n %lf", &vetorA[i]);

        soma_vet += vetorA[i];
    }

    media_vet = soma_vet / num1;

    printf("MEDIA DO VETOR: %.3lf\n", media_vet);
    printf("ELEMENTOS ABAIXO DA MEDIA: \n");
    for(int i = 0; i < num1; i++){
        if(vetorA[i] < media_vet){
            printf("%.1lf \n", vetorA[i]);
        } 
    }

    return 0;
    
}