#include <stdio.h>
#include <string.h>

int main() {

    int num1, num_homem = 0;
    double altura[10], menor_altura = 0, maior_altura = 0, altura_mulher = 0, num_mulher = 0;
    char genero[10];

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &num1);

    while(num1 < 1 || num1 > 10 ){
        printf("Numero invalido! Digite um numero entre 1 e 10. \n");
        scanf(" %d", &num1);
    }

    for(int i = 0; i < num1; i++){
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: (F/M) ", i + 1);
        scanf(" %c", &genero[i]);
    }

    menor_altura = altura[0];

    for(int i = 0; i < num1; i++){
        if(altura[i] > maior_altura){
            maior_altura = altura[i];
        }

        if(altura[i] < menor_altura){
            menor_altura = altura[i];
        }

        if(genero[i] == 'm' || genero[i] == 'M'){
            num_homem++;
        } else {
            num_mulher++;
            altura_mulher += altura[i];
        }
    }

    printf("Menor Altura: %.2lf \n", menor_altura);
    printf("Maior Altura: %.2lf \n", maior_altura);
    printf("Media das alturas das mulheres: %.2lf \n",  altura_mulher / num_mulher);
    printf("Numero de homens: %d", num_homem);

    return 0;
    
}