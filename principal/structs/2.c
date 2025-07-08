#include <stdio.h>

int main(void)
{
    struct ficha_alunos{
        char nome[40];
        int numero;
        float nota;
    };

    struct ficha_alunos aluno;

    printf("\n-----Cadastro de alunos----");
    printf("Entre com o nome do aluno \n");
    scanf("%s", &aluno.nome);

    printf("Entre com o número do aluno \n");
    scanf("%d", &aluno.numero);

    printf("Entre com a nota do aluno \n");
    scanf("%f", &aluno.nota);

    printf("\n\n-----Lendo dados da struct alunos-----\n");
    printf("Nome.....: %s \n", aluno.nome);
    printf("Numero...: %d \n", aluno.numero);
    printf("Nota....: %.2f \n", aluno.nota);
    printf("\nFim dos dados para o aluno");

    return 0;


}
