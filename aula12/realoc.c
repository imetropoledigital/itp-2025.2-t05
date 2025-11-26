#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 100000;
    int *ponteiro = calloc(tamanho, sizeof(int));
    printf("O ponteiro da primeira alocação é: %p\n", ponteiro);
    int *ponteiro2 = realloc(ponteiro, tamanho*4000);
    printf("O ponteiro da segunda alocação é: %p\n", ponteiro2);

}