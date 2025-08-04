#include <stdio.h>
#include <math.h>

int main(){

    char escala;
    double temperatura , celsius, fahrenheit;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if(escala != 'F' && escala != 'C'){
        printf("Escala esta incorreta, digite apenas F ou C.");
    } else {
        if(escala == 'F'){
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temperatura);

            celsius = (5.0 / 9.0) * (temperatura - 32);

            printf("A temperatura equivalente em Celsius eh: %.2f", celsius);
        } else {
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);

            fahrenheit = (9.0 * temperatura / 5.0) + 32;

            printf("A temperatura equivalente em Fahrenheit eh: %.2f", fahrenheit);
        }

        
    }
    return 0;
}