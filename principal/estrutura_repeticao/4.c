#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-BR");

    for(int i = 1000; i <= 1999; i++){
        if(i % 11 == 5){
            printf("O n�mero abaixo � divis�vel por 11 e resta 5\n");
        }

        printf("%d \n", i);
    }
}
