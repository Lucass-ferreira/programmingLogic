#include <stdio.h>

int main(){

    int num;
    double total, media, soma;

    soma = 0;
    media = 0;
    
    printf("Digite as idade: \n");
    scanf("%d", &num);

    if(num < 0) {
        printf("Impossivel Calcular");
        return 0;
    };

    while (num > 0){
        soma += num;
        scanf("%d", &num);
        media++;
    }
    
    total = (soma / media);

    printf("MEDIA: %.2f", total);
    
    return 0;
}