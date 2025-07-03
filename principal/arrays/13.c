#include <stdio.h>

int main(void){
    int matrizA[3][3] = {
        {2, 1, 3},
        {5, 4, 6},
        {8, 7, 9}};
    int matrizB[3][3] = {
        {8, 9, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int matrizResultado[3][3] = {0};
    int i, j, k;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }
    return 0;
    }
