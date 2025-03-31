#include <stdio.h>
#include <math.h>

int main(){

    float base, altura, area, perimetro, diagonal;

    printf("\n"); // apenas para estilização, na hora de mostra no terminal.

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);
    diagonal = sqrt((pow(base, 2)) + (pow(altura, 2)));

    printf("Area = %.2f\n", area);
    printf("Perimetro = %.2f\n", perimetro);
    printf("Diagonal = %f\n", diagonal);

    printf("\n"); // apenas para estilização, na hora de mostra no terminal.

    return 0;
};