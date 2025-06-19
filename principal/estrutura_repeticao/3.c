#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "pt_BR");
    double n, soma;

    while(1){
        printf("Digite valores reais: ");
        scanf("%lf", &n);

        if(n < 0){
            printf("Valor negativo!\n");
            break;
        }

        soma = n + soma;
    }
    printf("O total de valores somados: %.lf", soma);
    return 0;
}
