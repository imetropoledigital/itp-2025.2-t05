#include <stdio.h>
#include <stdlib.h>

void aloca(){
    printf("aloca()\n");
    int tamanho = 1000000;
    int *ponteiro = calloc(tamanho, sizeof(int));
    for (int i=0;i<tamanho;i++){
        ponteiro[i] = 1;
    }
   free(ponteiro);
}

int main(){
    int input;
    while (1){
        printf("input: \n");
        scanf("%d", &input);
        aloca();
        //libere aqui a memoria???
    }
 
}