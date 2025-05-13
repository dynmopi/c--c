// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <math.h>

int main() {
    float ladoMaior, ladoMenor, altura, area;

    printf("Calculadora de area de trapezio.");

    printf("\nDigite o lado maior: ");
    scanf("%f", &ladoMaior);

    printf("Digite o lado menor: ");
    scanf("%f", &ladoMenor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = ((ladoMaior + ladoMenor)*altura)/2;


    printf("A area do trapezio e de: %2.f", area);
    return (0);
}
