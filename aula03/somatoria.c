#include <stdio.h>

int main()
{
    int soma = 0;
    int quantidade;

    printf("Digite a quantidade de termos a somar: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        soma += i;
        if (i % 100 == 0 || soma > 2147483647) {
            printf("Soma parcial: %d\n", soma);
        }
    }

    printf("A soma de 1 a %d é: %d\n", quantidade, soma);
    return 0;
}
