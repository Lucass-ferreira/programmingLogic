#include <stdio.h>

int main(){

    int num_x, soma;

    
    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num_x);
        
        if (num_x == 0) {
            break;
        }

        soma = 0;

        if (num_x % 2 != 0) {
            num_x++;
        }
        

        for (int ind = 0; ind < 5; ind++){
                soma += num_x;
                num_x += 2;
        }

        printf("SOMA: %d \n", soma);

    } while (num_x != 0);

    return 0;
}