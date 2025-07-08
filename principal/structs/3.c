#include <stdio.h>

int main(void)
{
    struct ficha_alunos{
        char nome[40];
        int numero;
        float nota;
    };

    struct ficha_alunos aluno[3];
    int i;

    printf("\n-----Cadastro de alunos----");

    for(i = 0; i < 3; i++){

    printf("Entre com o nome do aluno \n");
    scanf("%s", &aluno[i].nome);

    printf("Entre com o número do aluno \n");
    scanf("%d", &aluno[i].numero);

    printf("Entre com a nota do aluno \n");
    scanf("%f", &aluno[i].nota);

}

    printf("\n\n-----Lendo dados da struct alunos-----\n");
for(i = 0; i < 3; i++){
    printf("\nNome.....: %s \n", aluno[i].nome);
    printf("Numero...: %d \n", aluno[i].numero);
    printf("Nota....: %.2f \n", aluno[i].nota);
    printf("\nFim dos dados para o aluno");
}

    return 0;


}
