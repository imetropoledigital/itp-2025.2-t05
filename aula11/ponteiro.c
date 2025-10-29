#include <stdio.h>

int main(){

    int numero; 
    printf("Digite o valor para o número: ");
    scanf("%d", &numero);

    int *ponteiro = &numero;

    printf("O valor do numero é: %d\n", numero);

    //nao consigo mais acessar a variável numero

    printf("O valor do ponteiro é: %p\n", ponteiro);

    *ponteiro = *ponteiro + 1;

    printf("O valor do numero é: %d\n", numero);
    printf("O valor do numero obtido a partir do seu endereço é: %d\n", *ponteiro);


    int *numero2 = 0; //Declaração que numero é uma variável do tipo ponteiro para inteiro
    *numero2 = 2; //Derreferenciamento do ponteiro, indo até o endereço de memória e 
    
    printf("O valor do endereço do ponteiro numero2: %p\n", numero2);
    printf("O valor do ponteiro numero2: %d\n", *numero2);

    return 0;
}