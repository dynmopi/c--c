#include <stdio.h>

int main(){
    int i;
    int vet[6] = {0};

    for(i = 0; i <=5; i++){
        vet[i] = i;
        printf("vet[%d] = %d\n", i, vet[i]);
    }
    return 0;
}
