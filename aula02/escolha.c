#include <stdio.h>

int main(){

    char escolha = 'B';

    switch (escolha){
        case 'a': 
        case 'A':
            printf("Você escolheu A\n"); 
            break;
        case 'B': 
            printf("Você escolheu B\n"); 
            break;
        case 'C':
            printf("Você escolheu C\n"); 
            break;
        default: 
            printf("Você não escolheu nenhuma opção\n");
            break;
    }

    return 0;
}