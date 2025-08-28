#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (0) {
        printf("Diferente de zero!!!!\n");
        printf("Digite um numero: ");
        scanf("%d", &numero);
        printf("O numero digitado foi: %d\n", numero);
        if (numero == 0){
            break;
        }
    }

    printf("Ufa sai desse loop!\n");

    return 0;
}
