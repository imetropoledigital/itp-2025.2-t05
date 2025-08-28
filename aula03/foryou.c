#include <stdio.h>

int main(){

    printf("Contagem de 1 a 10:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i+1);
    }
    printf("\n");

    printf("Contagem de 10 a 1:\n");
    for (int i = 10; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;

}

