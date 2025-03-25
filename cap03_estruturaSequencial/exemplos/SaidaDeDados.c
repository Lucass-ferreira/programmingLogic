#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numeroInteiro;
    float numeroReal;
    char *texto;
    bool valorBoolean;

    // char texto[] = "ola, mundo";

    printf("Saida de dados. Boa Tarde!\n");

    numeroInteiro = 2;
    numeroReal = 2.45555;
    texto = "ola, mundo";
    valorBoolean = true;

    printf("Numero inteiro: %d\n", numeroInteiro);
    printf("Numero inteiro alinhado a direita: %10d\n", numeroInteiro);
    printf("Numero inteiro alinhado a esquerda: %-10d\n", numeroInteiro);
    printf("Numero Real: %f\n", numeroReal);
    printf("Texto: %s\n", texto);
    printf("Valor Boolean: %d\n", valorBoolean);
}