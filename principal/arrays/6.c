#include <stdio.h>

int main(void){
    int A[5];
    int B[5];
    int vetorSoma[5]; //vetorSoma[] = A[] + B[]

    for(int i = 0; i <= 4; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for(int i = 0; i <= 4; i++){
        printf("Digite o valor de B[%d]: ", i);
        scanf("%d", &B[i]);

        vetorSoma[i] = A[i] + B[i];
    }

    printf("\n");

    for(int i = 0; i<= 4; i++){
        printf("O vetor soma de A e B; C[%d] = %d\n", i, vetorSoma[i]);
    }
}
