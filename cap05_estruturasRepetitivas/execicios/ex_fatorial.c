#include <stdio.h>

int main(){

    int valor_n, fatorial = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &valor_n);

    if (valor_n == 0){
        fatorial = 1;
    } else {
        for (int ind = valor_n; ind > 0; ind--){
            fatorial *= ind;
        }
    }

    printf("FATORIAL: %d", fatorial);
    

    return 0;
}