#include <stdio.h>

int main(){

    int quantidade;
    double preco_unitario, dinheiro_recebido, valor_total;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unitario);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro_recebido);

    valor_total = preco_unitario * quantidade;

    if(valor_total > dinheiro_recebido){
        printf("Dinheiro insuficinte, falta: R$%.2f reais", valor_total - dinheiro_recebido);
    } else {
        printf("TROCO: R$%.2f reais", dinheiro_recebido -  valor_total);
    }

    return 0;
}