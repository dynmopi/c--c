#include <stdio.h>

int main(void){
    int i, j, k;
    int matrizResultado[4][4] = {0};

    int A[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16
    }};

    int B[4][4] = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 4; k++){
                matrizResultado[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    printf("Exibindo A x B\n ");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;

}
