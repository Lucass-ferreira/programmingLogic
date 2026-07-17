#include <stdio.h>

int main() {

    int num1, lucro_abaixo = 0, lucro_entre = 0, lucro_acima = 0;
    double preco_comp[10], preco_vend[10], lucro[10], porcentagem = 0, valor_tot_comp = 0, valor_tot_vend = 0, lucro_tot = 0;
    char nome[10][30];

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%29s", nome[i]);
        printf("Preco de compra: ");
        scanf("%lf", &preco_comp[i]);
        printf("Preco de venda: ");
        scanf("%lf", &preco_vend[i]);

        lucro[i] = preco_vend[i] - preco_comp[i];
        porcentagem = (lucro[i] * 100) / preco_comp[i];

        if(porcentagem < 10){
            lucro_abaixo++;
        } else if (porcentagem >= 10 && porcentagem <= 20){
            lucro_entre++;
        } else {
            lucro_acima++;
        }

        valor_tot_comp += preco_comp[i];
        valor_tot_vend += preco_vend[i];

        lucro_tot = valor_tot_vend - valor_tot_comp;
    }

    printf("RELATORIO: \n");

    printf("Lucro abaixo de 10%%: %d\n", lucro_abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", lucro_entre);
    printf("Lucro acima de 20%%: %d\n", lucro_acima);
    printf("Valor total de compra: %.2lf \n", valor_tot_comp);
    printf("Valor total de venda: %.2lf \n", valor_tot_vend);
    printf("Lucro total: %.2lf \n", lucro_tot);

    return 0;
    
}