#include <stdio.h>

int main(){

    int numero1, numero2, resto;

    printf("Digite o primeiro numeros: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numeros: ");
    scanf("%d", &numero2);

    if(numero1 < numero2){
        resto = (numero2 % numero1);
    } else {
        resto = (numero1 % numero2);
    }

    if(resto == 0){
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}