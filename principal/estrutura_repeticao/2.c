#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR");
    double i, j, soma, n;

    soma = 0;

    printf("Digite a quantidade de valores que serão somados: ");
    scanf("%lf", &i);

    while(j < i){

        j++;
        printf("Valor %.lf: ", j);
        scanf("%lf", &n);

        soma = soma + n;

    }

    printf("A soma total de %.lf valores é %.lf.", i, soma);
    return 0;
}
