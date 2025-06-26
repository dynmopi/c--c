#include <stdio.h>

int main(void){

    float notas[4];
    int i;

    for(i = 0; i <= 3; i++){
        printf("Digite a nota[%d] do aluno: ", i);
        scanf("%f", &notas[i]);
    }

    for(i = 0; i <= 3; i++){
        printf("Valor da nota [%d]: %.2f \n", i, notas[i]);

    }

    return 0;
}
