#include <stdio.h>
#include <math.h>

int main() {
    int lado;
    float area;

    printf("Digite o lado do triangulo: ");
    scanf("%d", &lado);

    area = (lado*lado*sqrt(3))/4;


    printf("O triangulo de lado %d possui area de: %2.f", lado, area);

    return (0);
}
