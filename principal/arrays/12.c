#include <stdio.h>

int main(void){
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrizB[3][3] = {
        {9, 8, 7},
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

    printf("Matriz resultado (AxB): \n");
    for(i= 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }
        return 0;

    }













