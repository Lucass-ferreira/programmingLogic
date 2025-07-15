#include <stdio.h>
#include <string.h>

int main(){

    int valor_dia;
    char dia[50];


    scanf("%d", &valor_dia);

    switch (valor_dia){
    case 1:
        strcpy(dia, "Domingo");
        break;
    case 2:
        strcpy(dia, "Segunda-feira");
        break;
    case 3:
        strcpy(dia, "Terca-feira");
        break;
    case 4:
        strcpy(dia, "Quarta-feira");
        break;
    case 5:
        strcpy(dia, "Quinta-feira");
        break;
    case 6:
        strcpy(dia, "Sexta-feira");
        break;
    case 7:
        strcpy(dia, "Sabado");
        break;
    default:
        strcpy(dia, "Invalido");
        break;
    }

    printf("Dia da semana: %s", dia);

    return 0;
}