#include <stdio.h>

void main(void){
    int a, b, testeMaior, testeMenor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    testeMaior = maiorValor(a, b);
    testeMenor = menorValor(a, b);

    printf("\n");
    printf("O maior valor: %d\n", testeMaior);
    printf("O menor valor: %d", testeMenor);
}

int maiorValor(int primeiro, int segundo){
    if(primeiro > segundo){
        return primeiro;
    } else {
        return segundo;
    }
}

int menorValor(int primeiro, int segundo){
    if(primeiro < segundo){
        return primeiro;
    } else {
        return segundo;
    }
}
