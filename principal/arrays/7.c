#include <stdio.h>

int main(void){
    char* nomes[5] = {"Danrley", "Alex", "Paulo", "Jamilly", "Priscilla"}; // aspas duplas = cadeia de caracter
    char letra[2] = {'a', 'b'}; // aspas simples = caracter
    int i;

    printf("Digite um numero para encontrar o nome: ");
    scanf("%d", &i);

    printf("Imprimindo letras quaisquer\n");
    for(i = 0; i < 2; i++){
        printf("%c\n", letra[i]);
    }

    if(i < 0 || i >= 5){
        printf("Nao encontrei!");
    } else{
        printf("O nome em questao: %s", nomes[i]);
    }
}
