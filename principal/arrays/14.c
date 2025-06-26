#include <stdio.h>

int main(void){
    int A[3][3];
    int i, j, maiorValor, linhaMaiorValor, linhaMenorValor;

    maiorValor = 0;


    printf("Digite os valores da matriz A[3x3]: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%d][%d] ", i, j);
            scanf("%d", &A[i][j]);

            if(A[i][j] > maiorValor){
                maiorValor = A[i][j];
                linhaMaiorValor = i;
                linhaMenorValor = j;
            }
        }
        printf("\n");
    }

    printf("O maior valor da nossa matriz: %d\n", maiorValor);
    printf("E esta localizado em A[%d][%d]", linhaMaiorValor, linhaMenorValor);


}
