#include <stdio.h>

int main()
{
    int numeroInteiro;
    float numeroReal;
    char *texto;

    // char texto[] = "ola, mundo";

    printf("Saida de dados. Boa Tarde!\n");

    numeroInteiro = 2;
    numeroReal = 2.45555;
    texto = "ola, mundo";

    printf("Numero inteiro: %d\n", numeroInteiro);
    printf("Numero Real: %.4f\n", numeroReal);
    printf("Texto: %s\n", texto);
}