#include <stdio.h>

int main()
{
    printf("\n"); // para melhor leitura no terminal

    char *produto1 = "Computador";
    char *produto2 = "TV";
    float preco1 = 2100.5;
    float preco2 = 1830.0;
    int idade = 30;
    int codigo = 5291;
    char genero = 'F';

    printf("O produto %s custa R$ %.2f\n", produto1, preco1);
    printf("O produto %s custa R$ %.2f\n\n", produto2, preco2);

    printf("Codigo = %d\n\n", codigo);

    printf("Dados da pessoa: genero %c e idade %d\n", genero, idade);
    printf("\n"); // para melhor leitura no terminal


    return 0;
}