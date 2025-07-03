#include <stdio.h>

int main(void){
    int i, j, k;
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrizB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int matrizC[2][2][3] = {
        {
            {1, 2, 2},
            {3, 4, 2}
        },
        {
            {13, 14, 14},
            {2, 4, 3}
        }
    };
    printf("%.2d\n", matrizC[0][1][0]);

    printf("imprimindo a matriz de tres dimensoes\n");
    for(k = 0; k < 2; k++){ // sao duas matrizes em uma unica matriz, por isso que o controlador k abrange linha i e coluna j
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
                printf("%.2d ", matrizC[k][i][j]);
            }
        printf("\n");
        }
    }

    int matrizResultado[3][3] = {0};


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

    printf("%d ", matrizA[1][1]);
        return 0;

    }













