#include <stdio.h>

int main(){

    double nota1, nota2, nota_final;

    printf("Digite sua primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%lf", &nota2);

    nota_final = nota1 + nota2;

    printf("Nota final: %.1f \n", nota_final);

    if (nota_final < 60.0) {
        printf("REPROVADO!");
    }

    return 0;
}