#include <stdio.h>

int main() {
    char operacao;
    double matriz[12][12], resultado = 0.0;
    int contador = 0;

    // Leitura da operação
    scanf(" %c", &operacao);

    // Leitura da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Processamento dos elementos acima da diagonal secundária
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            resultado += matriz[i][j];
            contador++;
        }
    }

    // Se a operação for 'M', calcular a média
    if (operacao == 'M') {
        resultado /= contador;
    }

    // Exibir o resultado com uma casa decimal
    printf("%.1lf\n", resultado);

    return 0;
}