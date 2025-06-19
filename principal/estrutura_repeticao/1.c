#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "pt_BR");
    int n;

    while(1){
        printf("Digite um valor inteiro: ");
        scanf("%d",&n);

    if(n % 2 == 0){
        printf("É um número par \n");
    } else {
        printf("É um número ímpar \n");
    }

        if(n<0){
            printf("Estamos lidando com números negativos");
            break;
        }
    }
    return 0;
}
