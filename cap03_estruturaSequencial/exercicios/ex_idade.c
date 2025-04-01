#include <stdio.h>

int main(){

    int idade1, idade2;
    char nome1[50], nome2[50];
    float mediaIdade;

    printf("\n"); // apenas para estilização, na hora de mostra no terminal.
    printf("Digite os dados da Primeira pessoa.\n");
    printf("Digite o nome: ");
    scanf("%49[^\n]", nome1);
    printf("Digite a idade: ");
    scanf("%d", &idade1);

    printf("\n"); // apenas para estilização, na hora de mostra no terminal.

    getchar();
    printf("Digite os dados da Segunda pessoa.\n");
    printf("Digite o nome: ");
    scanf("%49[^\n]", nome2);
    printf("Digite a idade: ");
    scanf("%d", &idade2);

    mediaIdade = (idade1 + idade2) / 2;

    printf("\n"); // apenas para estilização, na hora de mostra no terminal.
    
    printf("A media de %s e %s eh de %.2f", nome1, nome2, mediaIdade);

    printf("\n\n"); // apenas para estilização, na hora de mostra no terminal.

    return 0;
};