#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, delta, R1, R2;

    // Leitura dos coeficientes da equação quadrática
    scanf("%lf %lf %lf", &A, &B, &C);

    // Cálculo do discriminante (delta)
    delta = B * B - 4 * A * C;

    // Verificação das condições para cálculo das raízes
    // Não é possível calcular se A = 0 (não é equação do 2º grau)
    // ou se delta < 0 (raízes não reais)
    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Cálculo das raízes usando a Fórmula de Bhaskara
        // R1 = (-B + √delta) / (2A)
        // R2 = (-B - √delta) / (2A)
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        // Impressão dos resultados com 5 casas decimais
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}

