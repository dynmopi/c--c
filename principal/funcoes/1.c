#include <stdio.h>
// feito em sala

int main (void){
    int v1, v2, resultado;

    printf("Digite o primeiro valor \n");
    scanf("%d", &v1);
    printf("Digite o segundo valor \n");
    scanf("%d", &v2);

    resultado = multiplica(v1, v2);

    printf("Resultado = %d \n", resultado);

    return 0;

}

int multiplica(int n1, int n2){

    int res;
    res = n1*n2;
    return res;
}
