#include <stdio.h>

int main(){

    double eixo_x, eixo_y;

    printf("Valor de X: ");
    scanf("%lf", &eixo_x);

    printf("Valor de Y: ");
    scanf("%lf", &eixo_y);

    if(eixo_x > 0 && eixo_y > 0){
        printf("Coeficiente 1"); 
    } 
    else if(eixo_x < 0 && eixo_y > 0){
        printf("Coeficiente 2");
    } 
    else if(eixo_x < 0 && eixo_y < 0){
        printf("Coeficiente 3");
    } 
    else if(eixo_x > 0 && eixo_y < 0){
        printf("Coeficiente 4"); 
    } 
    else if(eixo_y == 0 && eixo_x != 0){
        printf("Eixo X"); 
    } 
    else if(eixo_x == 0 && eixo_y != 0){
        printf("Eixo Y"); 
    } else if(eixo_x == 0 && eixo_y == 0){
        printf("Origem"); 
    }

    return 0;
}