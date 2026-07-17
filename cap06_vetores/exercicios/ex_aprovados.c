#include <stdio.h>
#include <string.h>

int main() {

    int num1;
    char alunos[10][10];
    double nota1[10], nota2[10], media[10];

    printf("Quantas alunos serao digitados? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("digite nome, primeira e segunda nota do %do aluno: \n", i + 1);
        scanf("%49s", alunos[i]);
        scanf("%lf", &nota1[i]);
        scanf("%lf", &nota2[i]);

        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    printf("Alunos Aprovados: \n");
    for(int i = 0; i < num1; i++){
        if(media[i] > 6){
            printf("%s \n", alunos[i]);
        }
    }

    return 0;
    
}