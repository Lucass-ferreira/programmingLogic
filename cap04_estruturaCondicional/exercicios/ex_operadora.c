#include <stdio.h>

int main(){

    int minutos, total_franquia;
    double valor_pago, resto;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos < 50){
        valor_pago = 50;
    } else {
        total_franquia = minutos / 100;
        resto = minutos % 100;
        valor_pago = (total_franquia * 50) + (resto * 2);
    }

    printf("Total a pagar: %.2f", valor_pago);
    return 0;
}