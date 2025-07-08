#include <stdio.h>

int main(){

    double medida_a, medida_b, medida_c, quadrado, triangulo, trapezio;

    printf("Digite a medida A: "); //4.00
    scanf("%lf", &medida_a);

    printf("Digite a medida B: "); //3.5
    scanf("%lf", &medida_b);

    printf("Digite a medida C: "); //5.2
    scanf("%lf", &medida_c);

    quadrado = medida_a * medida_a;
    triangulo = (medida_a * medida_b) / 2;
    trapezio =((medida_a + medida_b) * medida_c) / 2;

    printf("A area do Quadrado eh: %.2f \n", quadrado);
    printf("A area do Triangulo eh: %.2f \n", triangulo);
    printf("A area do Trapezio eh: %.2f", trapezio);
    
    return 0;
}
