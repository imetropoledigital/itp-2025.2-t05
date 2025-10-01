#include <stdio.h>

int somaArray(int vet[], int n);

int main(){
    int vet[] = {1, 2, 3, 4, 5, 7};
    int tam = (int) sizeof(vet)/(int)sizeof(int);
    int resultado = somaArray(vet, tam);
    printf("Soma: %d\n", resultado);
    return 0;
}

int somaArray(int vet[], int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += vet[i];
    }
    return soma;
}