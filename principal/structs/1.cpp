#include <stdio.h>
#include <string.h>

int main(){
    struct horario{
        int horas;
        int minutos;
        int segundos;
        // char letra;
        char nome[20];

    };

    struct horario agora;

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i : %i : %i", agora.horas, agora.minutos, agora.segundos);
    printf("\n");

    strcpy(agora.nome, "cracken");
    printf("Nome: %s\n", agora.nome);

    // printf("%c", agora.letra);

    return 0;
}
