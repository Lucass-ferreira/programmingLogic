#include <stdio.h>
#include <string.h>

int main() {

    int num1, maior_idade = 0, idade[10];
    char pessoas[10][50], maior_pessoa[50];

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        scanf("%49s", pessoas[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);

        if(idade[i] > maior_idade){
            maior_idade = idade[i];
            strcpy(maior_pessoa, pessoas[i]);
        }
    }

    printf("PESSOA MAIS VELHA: %s", maior_pessoa);

    return 0;
    
}