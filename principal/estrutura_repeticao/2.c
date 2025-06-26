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


    printf("A quantidade de números somados é de: %.lf\n", i);
    if(i>0){
        printf("A quantidade é maior que zero");
    } else {
        printf("A quantidade não é maior que zero");
    }

    return 0;
}
