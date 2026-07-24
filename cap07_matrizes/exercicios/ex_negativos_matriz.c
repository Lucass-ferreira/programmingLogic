#include <stdio.h>

int main() {
    int lin_mat, col_mat;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &lin_mat);

    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &col_mat);

    int matriz[lin_mat][col_mat];

    for (int i = 0; i < lin_mat; i++) {
        for (int j = 0; j < col_mat; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nVALORES NEGATIVOS:\n");

    for (int i = 0; i <lin_mat; i++) {
        for (int j = 0; j < col_mat; j++) {
            if (matriz[i][j] < 0) {
                printf("%d\n", matriz[i][j]);
            }
        }
    }

    return 0;
}

