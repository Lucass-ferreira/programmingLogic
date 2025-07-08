#include <stdio.h>

int main(){

    double distancia_percorrida, combustivel_consumido, media_consumo;

    printf("Distancia percorrida? ");
    scanf("%lf", &distancia_percorrida);

    printf("Combustivel consumido: ");
    scanf("%lf", &combustivel_consumido);

    media_consumo = distancia_percorrida / combustivel_consumido;

    printf("A media de combustivel consumido foi de %.2f litros", media_consumo);

    return 0;
}