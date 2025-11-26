#include <stdio.h>

void meterODedo(int *x){
    *x = *x * 2;
    int y = *x;
}

int gracioso(int x){
    return x * 2;
}

int main(){
    int input;
    printf("Digite um numero: ");
    scanf("%d", &input);
    printf("Número digitado: %d\n", input);
    meterODedo(&input);
    input = gracioso(input);
    printf("Número digitado pós função meterODedo: %d\n", input);
    return 0;
}