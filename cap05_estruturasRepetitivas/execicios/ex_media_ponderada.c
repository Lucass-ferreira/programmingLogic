#include <stdio.h>

int main(){

    int num_casos, peso_01 = 2, peso_02 = 3, peso_03 = 5;
    float num_01, num_02, num_03, soma_total = 0, media_total = 0;

    printf("Quantos casos de teste serao digitados: ");
    scanf("%d", &num_casos);
    
    for (int ind = 0; ind < num_casos; ind++){
        printf("Digite 3 numeros: \n");
        scanf("%f", &num_01);
        scanf("%f", &num_02);
        scanf("%f", &num_03);

        soma_total = (num_01 * peso_01) + (num_02 * peso_02) + (num_03 * peso_03);
        media_total = soma_total / (peso_01 + peso_02 + peso_03);
    
        printf("MEDIA = %.1f \n", media_total);
    }

    return 0;
}