#include <stdio.h>

int main(){

    float tem_celsius, temp_fahrenheit = 0;
    char resp;
    
    do{
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &tem_celsius);

        temp_fahrenheit = 9.0 * tem_celsius / 5.0 + 32;

        printf("Equivalente em Fahrenheit: %.2f \n", temp_fahrenheit);
        printf("Deseja repetir (s/n)? ");
        scanf(" %c", &resp);
        
    } while (resp == 's' || resp == 'S');
    
    return 0;
}