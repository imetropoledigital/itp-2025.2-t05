#include <stdio.h>

int main() {
    char operacao;
    double matriz[12][12];
    double soma = 0.0;
    int contador = 0;

    // Leitura da operação
    scanf(" %c", &operacao);

    // Leitura da matriz 12x12
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos acima da diagonal principal
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += matriz[i][j];
            contador++;
        }
    }

    // Se a operação for 'M', calcular a média
    if (operacao == 'M') {
        soma /= contador;
    }

    // Impressão do resultado com uma casa decimal
    printf("%.1lf\n", soma);

    return 0;
}
