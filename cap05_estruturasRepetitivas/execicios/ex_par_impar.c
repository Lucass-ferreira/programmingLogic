#include <stdio.h>

int main(){

    int num_vezes, num_dig;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num_vezes);

    for (int ind = 0; ind < num_vezes; ind++){
        printf("Digite um numero: ");
        scanf("%d", &num_dig);

        if(num_dig == 0){
            printf("NULO \n");
        }
    
        if (num_dig % 2 == 0){
            if(num_dig > 0){
                printf("PAR POSITIVO \n");
            } else if (num_dig < 0) {
                printf("PAR NEGATIVO \n");
            }
        } else {
            if(num_dig < 0){
                printf("IMPAR NEGATIVO \n");
            } else{
                printf("IMPAR POSITIVO \n");
            }
        }
            
    }

    return 0;
}