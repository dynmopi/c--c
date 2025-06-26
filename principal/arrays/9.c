#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");
    int matriz[2][2], i, j, k;

    printf("Digite o valor para os elementos da matriz\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Elemento [%d] [%d] = ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }
    printf("\n************* Entrada de dados *************\n\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%4d", matriz [i][j]);
        }
        printf("\n");
    }
    printf("\n************* Produto Escalar *************\n\n");
    printf("\nInsira o valor do coeficiente para a operacao: ");
    scanf("%d", &k);
    printf("\n************* Saída de dados *************\n\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            matriz[i][j] *= k;
            printf("%4d", matriz[i][j]);

        }
        printf("\n");
    }
    return 0;
}

