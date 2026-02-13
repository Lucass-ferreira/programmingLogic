#include <stdio.h>

int main(){

    float valor_x, valor_y;

    do{
        printf("Digite os valores das cordenadas X e Y: ");
        scanf("%f", &valor_x);
        scanf("%f", &valor_y);

        if( valor_x > 0 && valor_y > 0){
            printf("QUADRANTE Q1 \n");
        } else if (valor_x > 0 && valor_y < 0) {
            printf("QUADRANTE Q4 \n");
        } else if (valor_x < 0 && valor_y < 0){
            printf("QUADRANTE Q3 \n");
        } else if (valor_x < 0 && valor_y > 0) {
            printf("QUADRANTE Q2 \n");
        };
    } while (valor_x != 0 && valor_y != 0);
    

    return 0;
}