#include <stdio.h>
#include <locale.h>

void main(void){
    setlocale(LC_ALL, "pt-br");
    int calArea(int base, int altura);
        int x, y, z;
        printf("Entre com os valores da base e da altura do retangulo: \n");
        scanf("%d %d", &x, &y);
        z = calArea(x, y);

        printf("\n");
        printf("A area do retangulo é %d", z);


}

int calArea(int base, int altura){
    int area;
    area = base*altura;
    return area;
}
