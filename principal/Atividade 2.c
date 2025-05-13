#include <stdio.h>

int main() {
    double fatorial = 1;
    double numero;

    printf("Digite o valor para calcularmos o fatorial dele: ");
    scanf("%lf", &numero);



    for (int i = numero; i > 0; i--){
        fatorial = fatorial * i;
        printf("%d * ", i);

        // printf("\n%f", fatorial);
    }

    printf("\nFatorial de %2.lf e: %2.lf", numero, fatorial);
    // n*(n-1)*(n-2)*1

    return 0;
}
