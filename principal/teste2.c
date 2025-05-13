#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8*celsius + 32;

    printf("O valor em celsius, %2.f, equivale à %2.f em
           fahrenheit.", celsius, fahrenheit);

    return 0;
}
