#include <stdio.h>

int somar(float nota){
    do{
        if(nota < 0 || nota > 10){
            printf("Valor invalido! Tente Novamente: ");
            scanf("%f", &nota);
        };
    } while (nota < 0 || nota > 10);

    int resultado = nota;
    return resultado;
}

int main(){

    float nota_01, nota_02, soma = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_01);

    soma += somar(nota_01);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_02);

    soma += somar(nota_02);

    printf("NOTA FINAL: %.2f", soma/2);

    return 0;
}