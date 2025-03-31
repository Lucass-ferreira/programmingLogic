#include <stdio.h>

int main(){

    float largura, comprimento, metroQuadradoValor, area, preco;

    printf("\n");
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &metroQuadradoValor);

    area = largura * comprimento;
    preco = area * metroQuadradoValor;

    printf("Area do terreno: %.2f\n", area);
    printf("Preco do terreno: R$%.2f\n", preco);
    printf("\n");

    return 0;
}