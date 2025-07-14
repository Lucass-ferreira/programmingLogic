#include <stdio.h>

int main(){

    int hora;

    // estrutura simples --------------
    // printf("bom dia \n");

    // if(hora < 0){
    //     printf("boa tarde \n");
    // };

    // printf("boa noite \n");


    printf("escreva uma hora do dia: ");
    scanf("%d", &hora);


    //estrutura composta --------------
    // if(hora < 12){
    //     printf("boa dia \n");;
    // } else {
    //     printf("bom tarde \n");
    // }


    //estrutura aninhada --------------
    if(hora < 12){
        printf("bom dia");
    } else {
        if( hora >= 12 && hora < 18){ // aqui pode apagar a condição com o 12, pois se o numero for menor que 18 já se é boa tarde.
            printf("boa tarde");
        } else {
            printf("boa noite");
        }
    }

    return 0;
}