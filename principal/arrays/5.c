#include <stdio.h>

int main(void){
    int A[10];
    int B[10];

    for(int i = 0; i <= 9; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);

        B[i] = A[i]*10;
    }

    for(int j = 0; j <=9; j++){
        printf("A[%d]: %d\n", j, A[j]);
    }
    printf("\n");

    for(int k = 0; k <=9; k++){
            printf("B[%d]: %d\n", k, B[k]);
        }

 return 0;

}
