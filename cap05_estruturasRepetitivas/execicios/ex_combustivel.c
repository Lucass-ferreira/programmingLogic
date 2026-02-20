#include <stdio.h>

int main(){

    int num_dig, alcool = 0, gasolina = 0, disel = 0;

    while (num_dig != 4){
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &num_dig);

        switch (num_dig){
            case 1:
                alcool += 1;
                break;
            case 2:
                gasolina += 1;
                break;
            case 3:
                disel += 1;
                break;
            };
    }
    
    printf("Muito Obrigado! \n");
    printf("ALCOOL: %d \n", alcool);
    printf("GASOLINA: %d \n", gasolina);
    printf("DISEL: %d \n", disel);

    return 0;
}