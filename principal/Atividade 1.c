#include <stdio.h>

int main(){

double nota, somatorioNotas, totalNotas, media;

totalNotas = 4;

    for(int i = 1; i<=totalNotas; i++){

        printf("Nota %d\n", i);

        scanf("%lf", &nota);
        somatorioNotas += nota;
    }

    media = somatorioNotas/totalNotas;

    printf("somatorioNotas %.2lf\n", somatorioNotas);
    printf("totalNotas %.2lf\n", totalNotas);

    printf("A media das 4 notas e de: %.2lf", media);

    return 0;


}
