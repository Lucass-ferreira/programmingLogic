#include <stdio.h>

int main(){

    int valor1, valor2, valor3, menor_valor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    menor_valor = valor1;

    if (valor2 < menor_valor){
        menor_valor = valor2;
    }

    if(valor3 < menor_valor){
        menor_valor = valor3;
    }

    printf("O menor valor foi: %d", menor_valor);

    return 0;
}