#include <stdio.h>

int main(){

    double distancia1, distancia2, distancia3, maior_distancia;

    printf("Digite a primeira distancia: ");
    scanf("%lf", &distancia1);

    printf("Digite a segunda distancia: ");
    scanf("%lf", &distancia2);

    printf("Digite a terceira distancia: ");
    scanf("%lf", &distancia3);

    maior_distancia = distancia1;

    if (distancia2 > maior_distancia){
        maior_distancia = distancia2;
    }

    if(distancia3 > maior_distancia){
        maior_distancia = distancia3;
    }

    printf("A maior distancia foi: %.2f", maior_distancia);

    return 0;
}