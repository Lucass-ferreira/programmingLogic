#include <stdio.h>

int main(){

    int num_casos;
    float quant_cobaias = 0, cobaia_C = 0, cobaia_R = 0, cobaia_S = 0, total_cobaias = 0;
    char letra_cobaia;

    printf("Quantos casos de teste serao digitados: ");
    scanf("%d", &num_casos);
    
    for (int ind = 0; ind < num_casos; ind++){
        printf("Quantidades de cobaias: ");
        scanf("%f", &quant_cobaias);

        
        printf("Tipo de cobaia: ");
        scanf(" %c", &letra_cobaia);
        
        total_cobaias += quant_cobaias;

        if(letra_cobaia == 'C' || letra_cobaia == 'c'){
            cobaia_C += quant_cobaias;
        } else if (letra_cobaia == 'R' || letra_cobaia == 'r'){
            cobaia_R += quant_cobaias;
        } else {
            cobaia_S += quant_cobaias;
        }
    }

    printf("\nRELATORIO FINAL: \n");
    printf("Total: %.f Cobaias \n", total_cobaias);
    printf("Total de Coelhos: %.f \n", cobaia_C);
    printf("Total de Ratos: %.f \n", cobaia_R);
    printf("Total de Sapos: %.f \n", cobaia_S);

    printf("Porcetagem de coelhos: %.2f \n", (cobaia_C / total_cobaias) * 100);
    printf("Porcetagem de ratos: %.2f \n", (cobaia_R / total_cobaias) * 100);
    printf("Porcetagem de sapos: %.2f \n", (cobaia_S / total_cobaias) * 100);

    return 0;
}