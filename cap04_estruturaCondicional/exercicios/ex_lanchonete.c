#include <stdio.h>

int main(){

    int codigo_produto, quantidade;
    double valor_total;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo_produto);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    if((codigo_produto >= 1) && (codigo_produto <= 5)) {
            switch (codigo_produto){
            case 1:
                valor_total = 5.00 * quantidade;
                break;
            case 2:
                valor_total = 3.50 * quantidade;
                break;
            case 3:
                valor_total = 4.80 * quantidade;
                break;
            case 4:
                valor_total = 8.90 * quantidade;
                break;
            case 5:
                valor_total = 7.32 * quantidade;
                break;
            }
        printf("Valor a pagar: R$%.2f reais", valor_total); 
    } else {
        printf("Digite um codigo valido.");
    }

    

    return 0;
}