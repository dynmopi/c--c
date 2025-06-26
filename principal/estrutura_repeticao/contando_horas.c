#include <stdio.h>
#include <windows.h>

int main(void){
    int segundo, minuto, hora;

    // for aninhados
    for(hora = 0; hora<24; hora++){

        for(minuto = 0; minuto <60; minuto ++){

            for(segundo = 0; segundo <60; segundo++){

                printf("%d:%d:%d \n", hora, minuto, segundo);
                 // isso daqui serve para pausar a aplicacao em milisegundos
                system("cls"); // funciona por causa da biblioteca
            }
        }
    }
    return 0;
}
