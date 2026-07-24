#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    // Preenchendo a matriz
    printf("\nDigite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}