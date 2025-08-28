#include <stdio.h>

int main()
{
    int maior, numero;
    int i = 1;
    int quantidade;

    // lê o primeiro em maior
    printf("Digite a quantidade que deseja verificar o maior: ");
    scanf("%d", &quantidade);

    maior = -2147483647;

    do {

        printf("Digite o número %d: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        i++;

    }while (i <= quantidade);

    printf("O maior foi: %d\n", maior);
}