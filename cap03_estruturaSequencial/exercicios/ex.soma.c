#include <stdio.h>

int main(){

    float x, y, soma;
    
    printf("Digite o valor de X: ");
    scanf("%f", &x);
    printf("Digite o valor de Y: ");
    scanf("%f", &y);

    soma = x + y;

    printf("A soma dos valores %.2f + %.2f eh de %.2f", x, y, soma);

    return 0;
};