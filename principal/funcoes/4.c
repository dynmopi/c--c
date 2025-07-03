#include <stdio.h>

void main(void){
    double numero, resultado;

    printf("Digite o valor para calcularmos o fatorial dele: ");
    scanf("%lf", &numero);

    resultado = calcularFatorial(numero);

    printf("O resultado do fatorial de %.2lf, é de: %.2lf", numero, resultado);
}
// por algum motivo se colocar a função do tipo double, isso da erro;

int calcularFatorial(double a){
    double fatorial = 1;
    for (double i = a; i > 0; i--){
        fatorial = fatorial * i;
        // printf("\n%f", fatori al);
    }
    return fatorial;
}
