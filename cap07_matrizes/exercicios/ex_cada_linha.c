#include <stdio.h>

int main() {
    int ord_mat;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ord_mat);

    int matriz[ord_mat][ord_mat];

    for (int i = 0; i < ord_mat; i++) {
        for (int j = 0; j < ord_mat; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMAIOR ELEMENTO DE CADA LINHA:\n");

    for (int i = 0; i < ord_mat; i++) {
        int maior = matriz[i][0];

        for (int j = 1; j < ord_mat; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }

        printf("%d\n", maior);
    }

    return 0;
}