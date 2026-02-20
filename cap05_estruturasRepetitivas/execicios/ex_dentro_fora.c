#include <stdio.h>

int main(){

    int num_vezes, numero, dentro, fora;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &num_vezes);

    dentro = 0;
    fora = 0;

    for (int ind = 1; ind <= num_vezes; ind++){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero >= 10 && numero <= 20){
            dentro++;
        } else {
            fora++;
        }
    }

    printf("DENTRO: %d \n", dentro);
    printf("FORA: %d", fora);
    

    return 0;
}