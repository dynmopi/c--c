#include <stdio.h>

int main(void){
    float notas[5] = {7, 8, 9.5, 9.9, 5,2};
    int i;

    printf("Exibindo os valores do vetor \n\n");

    for(i = 0; i<=4; i++){
        printf("notas[%d] = %.1f \n", i, notas[i]);
    }

}
