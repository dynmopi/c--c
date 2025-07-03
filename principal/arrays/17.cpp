#include <stdio.h>

int main() {
    int i, j, k;
    float A[3][3] = {
        {2, 1, 1},
        {1, 3, 2},
        {1, 0, 0}
    };

    // Gauss-Jordan para transformar [A|I] em [I|A^-1]
    for (i = 0; i < 3; i++) {
        // 1. Pivô principal ≠ 0: normalizar a linha
        float pivot = A[i][i];
        for (j = 0; j < 3; j++)
            A[i][j] /= pivot;

        // 2. Zerar os outros elementos da coluna do pivô
        for (k = 0; k < 3; k++) {
            if (k != i) {
                float f = A[k][i];
                for (j = 0; j < 3; j++) {
                    A[k][j] -= f * A[i][j];
                }
            }
        }
    }

    // Exibir a inversa (colunas 3 a 5 da matriz aumentada)
    printf("Matriz inversa:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
