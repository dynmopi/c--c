#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "pt_BR");
    int n;

    while(1){
        printf("Digite um valor inteiro: ");
        scanf("%d",&n);

    if(n % 2 == 0){
        printf("� um n�mero par \n");
    } else {
        printf("� um n�mero �mpar \n");
    }

        if(n<0){
            printf("Estamos lidando com n�meros negativos");
            break;
        }
    }
    return 0;
}
