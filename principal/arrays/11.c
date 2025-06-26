# include <stdio.h>

int main(){
    int A[2][2], i, j, k;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Fazendo o produto escalar\n");
    printf("Digite o valor da constante: ");
    scanf("%d", &k);

    printf("\n");

    printf("Exibindo a matriz resultante de A com produto escalar de %d: \n", k);
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            A[i][j] *= k;
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;

}
