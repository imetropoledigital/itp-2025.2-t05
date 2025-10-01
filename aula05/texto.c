#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    char texto[6];
    texto[0] = 'h';
    texto[1] = 'e';
    texto[2] = 'l';
    texto[3] = 'l';
    texto[4] = 'o';
    texto[5] = '\0';

    printf("%s\n", texto);

    printf("%p\n", &texto[0]);
    printf("%p\n", &texto[1]);
    printf("%p\n", &texto[2]);
    printf("%p\n", &texto[3]);
    printf("%p\n", &texto[4]);
    printf("%p\n", &texto[5]);

    printf("\n");


    int vet[5] = {10, 20, 30, 40, 50};

    int *a = &vet[0];

    printf("%p\n", &vet[0]);
    printf("%p\n", &vet[1]);
    printf("%p\n", &vet[2]);
    printf("%p\n", &vet[3]);
    printf("%p\n", &vet[4]);

    return 0;
}