#include <stdio.h>

int main() {
    int ord_mat;
    int soma = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ord_mat);

    int matriz[ord_mat][ord_mat];

    for (int i = 0; i < ord_mat; i++) {
        for (int j = 0; j < ord_mat; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (j > i) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", soma);

    return 0;
}