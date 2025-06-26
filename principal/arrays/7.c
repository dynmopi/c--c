#include <stdio.h>

int main(void){
    char* nomes[5] = {"Danrley", "Alex", "Paulo", "Jamilly", "Priscilla"};
    int i;

    printf("Digite um numero para encontrar o nome: ");
    scanf("%d", &i);

    if(i < 0 || i >= 5){
        printf("Nao encontrei!");
    } else{
        printf("O nome em questao: %s", nomes[i]);
    }
}
