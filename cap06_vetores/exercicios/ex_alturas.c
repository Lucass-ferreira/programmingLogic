#include <stdio.h>
#include <string.h>

int main() {

    int num1;
    double idade[10], altura[10], soma_altura = 0;
    char pessoas[10][50];
    char menor_idade[10][50];
    int num_pessoa = 0;
    float porcentagem;

    printf("Quantos pessoas serao digitadas? ");
    scanf("%d", &num1);

    for(int i = 0; i < num1; i++){
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        scanf("%49s", pessoas[i]);
        printf("Idade: ");
        scanf("%lf", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);

        soma_altura += altura[i];

        if(idade[i] < 16){
            strcpy(menor_idade[num_pessoa], pessoas[i]);
            num_pessoa++;
        }

    }

    porcentagem = (num_pessoa * 100) / num1;

    printf("\nAltura media: %.2lf \n", (soma_altura / num1));
    printf("Pessoas com menos de 18 anos: %.2lf \n", porcentagem);

    for(int i = 0; i < num_pessoa; i++){
        printf("%s \n", menor_idade[i]);
    }

    return 0;
    
}