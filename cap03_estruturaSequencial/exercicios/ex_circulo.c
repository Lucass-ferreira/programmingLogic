#include <stdio.h>
#include <math.h>

int main(){

    double area, raio;

    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);

    area = 3.14159 * pow(raio, 2);

    printf("O valor da area eh: %.2f", area);

    return 0;
}