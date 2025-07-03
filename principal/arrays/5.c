#include <stdio.h>

int main(void){
    int A[10];
    int B[10];

    for(int i = 0; i < 10; i++){
        printf("Digite valores inteiros: ");
        scanf("%d", &A[i]);

        B[i] = A[i]*10;
    }

    printf("\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%4d", A[j]);
        }
        printf("\n\n");
    }


    for(int k = 0; k < 10; k++){
            printf("B[%d]: %d\n", k, B[k]);
        }

 return 0;

}
