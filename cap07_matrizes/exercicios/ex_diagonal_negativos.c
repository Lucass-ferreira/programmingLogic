#include <stdio.h>

int main() {
    int ordem_matriz, negativos = 0;


    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem_matriz);

    int matriz[ordem_matriz][ordem_matriz];

    for (int i = 0; i < ordem_matriz; i++) {
        for (int j = 0; j < ordem_matriz; j++) {
            printf("Elemnto [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] < 0) {
                negativos++;
            }
        }
    }

    printf("DIAGONAL PRINCIPAL: \n");
    for (int i = 0; i < ordem_matriz; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", negativos);

    return 0;
}