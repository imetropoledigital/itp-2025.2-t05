#include <stdio.h>

int main() {
    int C;
    char T;
    double matriz[12][12], resultado = 0.0;

    // Leitura da coluna e do tipo de operação
    scanf("%d %c", &C, &T);

    // Leitura da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos na coluna C
    for (int i = 0; i < 12; i++) {
        resultado += matriz[i][C];
    }

    // Se a operação for média, divide o resultado por 12
    if (T == 'M') {
        resultado /= 12.0;
    }

    // Impressão do resultado com uma casa decimal
    printf("%.1lf\n", resultado);

    return 0;
}
