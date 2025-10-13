#include <stdio.h>

int main() {
    double matriz[12][12];
    int L;
    char T;
    double resultado = 0.0;

    // Leitura do número da linha e do tipo de operação
    scanf("%d %c", &L, &T);

    // Leitura da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos da linha L
    for (int j = 0; j < 12; j++) {
        resultado += matriz[L][j];
    }

    // Se a operação for média, divide-se o resultado pelo número de elementos
    if (T == 'M') {
        resultado /= 12.0;
    }

    // Impressão do resultado com uma casa decimal
    printf("%.1lf\n", resultado);

    return 0;
}
