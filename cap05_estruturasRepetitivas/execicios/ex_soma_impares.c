#include <stdio.h>

int main(){

    int num_x, num_y, num_inicial, num_final, soma_impar = 0;

    printf("Digite dois numeros: ");
    scanf("%d", &num_x); 
    scanf("%d", &num_y); 

    if (num_x < num_y){
        num_inicial = num_x; 
        num_final = num_y; 
    } else {
        num_inicial = num_y; 
        num_final = num_x; 
    }

    for (int indice = num_inicial + 1; indice < num_final; indice++){
        if(indice % 2 != 0){
            soma_impar += indice;
        }
    };

    printf("SOMA DOS IMPARES = %d", soma_impar);
    
    return 0;
}