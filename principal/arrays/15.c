#include <stdio.h>

int main(void){
    int A[3][3];
    int diagonalPrincipal[3];
    int i, j;

    printf("Digite os valores da matriz A[3x3]\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);

            if(i == j){
                diagonalPrincipal[i] = A[i][j];
            }
        }
        printf("\n");
    }

    printf("Mostrando os elementos da diagonal principal da matriz A:\n");
    for(i = 0; i < 3; i++){
        printf("%d ", diagonalPrincipal[i]);
    }
}
