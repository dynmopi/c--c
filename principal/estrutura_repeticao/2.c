#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR");
    double i, j, soma, n;

    soma = 0;

    printf("Digite a quantidade de valores que ser�o somados: ");
    scanf("%lf", &i);

    while(j < i){

        j++;
        printf("Valor %.lf: ", j);
        scanf("%lf", &n);

        soma = soma + n;

    }


    printf("A quantidade de n�meros somados � de: %.lf\n", i);
    if(i>0){
        printf("A quantidade � maior que zero");
    } else {
        printf("A quantidade n�o � maior que zero");
    }

    return 0;
}
