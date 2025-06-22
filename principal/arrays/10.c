#include <stdio.h>
#include <stdbool.h>


bool elemento_existe(int valor, int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            return true;
        }
    }
    return false;

}


void filtrar(int A[], int *tamanhoA, int B[], int tamanhoB){
    int novoIndice = 0;

    for(int i = 0; i < *tamanhoA; i++){
        if(!elemento_existe(A[i], B, tamanhoB)){
            A[novoIndice] = A[i];
            novoIndice++;
        }
    }

    *tamanhoA = novoIndice;
}

int main(void){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tamanhoA = sizeof(A)/sizeof(A[0]);
    int tamanhoB = sizeof(B)/sizeof(B[0]);

    filtrar(A, &tamanhoA, B, tamanhoB);

    printf("Vetor filtrado: \n");
    for(int i = 0; i < tamanhoA; i++){
        printf("%d ", A[i]);
    }
}





