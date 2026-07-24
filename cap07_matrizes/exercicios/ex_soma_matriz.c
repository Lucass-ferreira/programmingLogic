#include <stdio.h>

int main() {
    int lin_mat, col_mat;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &lin_mat);

    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &col_mat);

    int matriz_a[lin_mat][col_mat];
    int matriz_b[lin_mat][col_mat];
    int matriz_c[lin_mat][col_mat];

    printf("Digite os valores da matriz A:\n");
    for (int i = 0; i < lin_mat; i++) {
        for (int j = 0; j < col_mat; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for (int i = 0; i < lin_mat; i++) {
        for (int j = 0; j < col_mat; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    for (int i = 0; i < lin_mat; i++) {
        for (int j = 0; j < col_mat; j++) {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }
\
    printf("\nMATRIZ SOMA:\n");
    for (int i = 0; i < lin_mat; i++) {
        for (int j = 0; j < col_mat; j++) {
            printf("%d ", matriz_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}