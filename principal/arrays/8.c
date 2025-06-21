#include <stdio.h>
#include <stdlib.h>

int main(void){
    double A[10];
    double B[10];
    int C[4];
    double D[10];

    for(int i = 0; i <= 10; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%lf", &A[i]);
    }

    printf("\n");

    for(int i = 0; i <= 10; i++){
        printf("Digite o valor de B[%d]: ", i);
        scanf("%lf", &B[i]);

    }
    system("cls");
    printf("0 - Soma\n1 - Subtracao \n2 - Produto \n3 - Divisao\n");

    int operacao;
    for(int i = 0; i <= 10; i++){
        while(1){
            printf("[%d]: ", i);
            scanf("%d", &operacao);

            if(operacao >= 0 && operacao <=3){
                switch(C[operacao]) {
                    case 0:
                        D[i] = A[i] + B[i];
                        break;
                    case 1:
                        D[i] = A[i] - B[i];
                        break;
                    case 2:
                        D[i] = A[i] * B[i];
                        break;
                    case 3:
                        D[i] = A[i] / B[i];
                        break;
            }

                break;
            }
            system("cls");
            printf("[ERRO] Digite apenas valores de 0 a 3\n");
        }


    }
    system("cls");

    // aqui que eu preciso alterar!
    for(int i = 0; i <= 10; i++){
        switch(operacao){
            case 0:
                printf("A[%d] + B[%d] = %.2lf\n", i, i, D[i]);
                break;
            case 1:
                printf("A[%d] - B[%d] = %.2lf\n", i, i, D[i]);
                break;
            case 2:
                printf("A[%d] * B[%d] = %.2lf\n", i, i, D[i]);
                break;
            case 3:
                printf("A[%d] / B[%d] = %.2lf\n", i, i, D[i]);
                break;
        }

    }
    return 0;
}
