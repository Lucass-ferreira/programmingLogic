#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int idade;
    float salario1, salario2;
    char nome[50];

    printf("escreva seu nome: ");
    scanf("%49[^\n]", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu primeiro salario: ");
    scanf("%f", &salario1);
    printf("Digite seu segundo salario: ");
    scanf("%f", &salario2);
    printf("\n");
    
    printf("Dados Digitados: \n");
    printf(" - Nome: %s\n", nome);
    printf(" - Idade: %d\n", idade);
    printf(" - Salario 1: R$: %.2f\n", salario1);
    printf(" - Salario 2: R$: %.2f\n\n", salario2);


    return 0;
}