#include <stdio.h>

int main()
{
    int maior, numero;
    int quantidade;

    // lê o primeiro em maior
    printf("Digite a quantidade que deseja verificar o maior: ");
    scanf("%d", &quantidade);

    printf("Digite o primeiro número: ");
    scanf("%d", &maior);

    for (int i = 1; i < quantidade; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior foi: %d\n", maior);
}