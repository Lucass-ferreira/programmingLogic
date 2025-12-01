#include <stdio.h>

int main(){

    int num1, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    soma = 0;

    while (num1 != 0){
        soma += num1;

        printf("digite outro numero: ");
        scanf("%d", &num1);

    }

    printf("SOMA = %d", soma);
    

    return 0;
}