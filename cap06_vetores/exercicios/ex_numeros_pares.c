#include <stdio.h>

int main() {

    int num1, numero_ind = 0;
    int numeros[10], num_pares[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num1);

    for(int i = 0; i < num1; i++){
        printf("Digite um numero: ");
        scanf("\n %d", &numeros[i]);

        if((numeros[i] % 2) == 0){
            num_pares[numero_ind] = numeros[i];
            numero_ind++;
        }
    }

    printf(" \nNUMEROS PARES: \n");
    for(int i = 0; i < numero_ind; i++){
        printf("%d  ", num_pares[i]);
    }

    printf("\nQUANTIDADE DE PARES: %d", numero_ind);

    return 0;
    
}