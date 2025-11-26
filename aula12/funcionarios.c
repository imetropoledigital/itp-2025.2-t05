#include <stdio.h>
#include <stdlib.h>

int main(){

    int input;
    int *vetor;

    printf("Digite a quantidade de numeros que quer entrar: \n");
    scanf("%d", &input);
        
    vetor = calloc(input, sizeof(int));

    printf("Digite os números \n");
    for (int i=0;i<input;i++){
        scanf("%d", &vetor[i]);
    }

    //imprimir
    for (int i=0;i<input;i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");


    return 0;

}