#include <stdio.h>

int main() {
    int ord_mat;
    int linha, coluna;
    double matriz[10][10];
    double soma = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ord_mat);

    for (int i = 0; i < ord_mat; i++) {
        for (int j = 0; j < ord_mat; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);

            if (matriz[i][j] > 0) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    printf("Escolha uma linha: ");
    scanf("%d", &linha);

    printf("LINHA ESCOLHIDA: ");
    for (int j = 0; j < ord_mat; j++) {
        printf("%.1lf ", matriz[linha][j]);
    }
    printf("\n");

    printf("Escolha uma coluna: ");
    scanf("%d", &coluna);

    printf("COLUNA ESCOLHIDA: ");
    for (int i = 0; i < ord_mat; i++) {
        printf("%.1lf ", matriz[i][coluna]);
    }
    printf("\n");

    printf("DIAGONAL PRINCIPAL: ");
    for (int i = 0; i < ord_mat; i++) {
        printf("%.1lf ", matriz[i][i]);
    }
    printf("\n");

    for (int i = 0; i < ord_mat; i++) {
        for (int j = 0; j < ord_mat; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = matriz[i][j] * matriz[i][j];
            }
        }
    }

    printf("MATRIZ ALTERADA:\n");
    for (int i = 0; i < ord_mat; i++) {
        for (int j = 0; j < ord_mat; j++) {
            printf("%.1lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}