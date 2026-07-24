#include <stdio.h>

int main() {
    int lin_mat, col_mat;
    double matriz[lin_mat][col_mat], soma[lin_mat];

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &lin_mat);

    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &col_mat);

    for (int i = 0; i < lin_mat; i++) {
        soma[i] = 0;

        printf("Digite os elementos da %da. linha:\n", i + 1);

        for (int j = 0; j < col_mat; j++) {
            scanf("%lf", &matriz[i][j]);
            soma[i] += matriz[i][j];
        }
    }

    printf("\nVETOR GERADO:\n");

    for (int i = 0; i < lin_mat; i++) {
        printf("%.1lf\n", soma[i]);
    }

    return 0;
}