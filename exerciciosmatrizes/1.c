// escrever um programa para somar duas matrizes de ordem 3x2. A soma das matrizes A e B dve ser armazenada na matriz c
#include <stdio.h>

int main() {
    int mat1[3][2], mat2[3][2], mat3[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
            scanf("%d", &mat2[i][j]);

            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Impressão da matriz C (resultado)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

