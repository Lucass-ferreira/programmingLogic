#include <stdio.h>

int main(){

    double nivel_glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &nivel_glicose);

    if(nivel_glicose < 100){
        printf("CLASIFICADO: Normal");
    } else if (nivel_glicose <= 140){
        printf("CLASIFICADO: Elevado");
    } else {
        printf("CLASIFICADO: Diabetes");
    }


    return 0;
}