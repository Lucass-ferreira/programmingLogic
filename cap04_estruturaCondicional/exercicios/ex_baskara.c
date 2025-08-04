#include <stdio.h>
#include <math.h>

int main(){

    double coeficiente_a, coeficiente_b, coeficiente_c, x1, x2, delta;

    printf("Coeficiente a: ");
    scanf("%lf", &coeficiente_a);

    printf("Coeficiente b: ");
    scanf("%lf", &coeficiente_b);

    printf("Coeficiente c: ");
    scanf("%lf", &coeficiente_c);

    delta = (pow(coeficiente_b, 2)) - (4 * coeficiente_a * coeficiente_c);

    if(coeficiente_a == 0 || delta < 0){
        printf("esta equacao nao possui raizes reais");
    } else {
        x1 = (-coeficiente_b + sqrt(delta)) / (2 * coeficiente_a);
        x2 = (-coeficiente_b - sqrt(delta)) / (2 * coeficiente_a);
    }
    
    printf("X1 = %.4f \n", x1);
    printf("X2 = %.4f \n", x2);

    return 0;
}