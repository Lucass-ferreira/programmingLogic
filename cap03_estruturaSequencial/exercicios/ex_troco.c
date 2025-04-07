#include <stdio.h>

int main(){

    float precoProduto, quantidadeComprada, dinheiroRecebido, troco;

    printf("Preco unitario do produto: \n");
    scanf("%f", &precoProduto);

    printf("Quantidade comprada: \n");
    scanf("%f", &quantidadeComprada);

    printf("Dinheiro Recebido: \n");
    scanf("%f", &dinheiroRecebido);

    troco = dinheiroRecebido - (precoProduto * quantidadeComprada);

    printf("\n"); //apenas estilização pra saida no terminal
    printf("Seu troco eh: R$ %.2f", troco);

    return 0;
}