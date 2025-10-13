#include <stdio.h>
#include <stdlib.h>

// Função para calcular o Máximo Divisor Comum (MDC) usando o algoritmo de Euclides
int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int n1, d1, n2, d2, num, den;
        char op, barra;

        // Leitura das frações e da operação
        // Formato: N1 / D1 op N2 / D2
        scanf("%d %c %d %c %d %c %d", &n1, &barra, &d1, &op, &n2, &barra, &d2);

        // Realização da operação
        switch (op) {
            case '+':
                num = n1 * d2 + n2 * d1;
                den = d1 * d2;
                break;
            case '-':
                num = n1 * d2 - n2 * d1;
                den = d1 * d2;
                break;
            case '*':
                num = n1 * n2;
                den = d1 * d2;
                break;
            case '/':
                num = n1 * d2;
                den = n2 * d1;
                break;
        }

        // Simplificação da fração
        int divisor = mdc(abs(num), abs(den));
        int simp_num = num / divisor;
        int simp_den = den / divisor;

        // Ajuste de sinais: se o denominador for negativo, inverte os sinais
        if (simp_den < 0) {
            simp_num = -simp_num;
            simp_den = -simp_den;
        }

        // Exibição do resultado
        printf("%d/%d = %d/%d\n", num, den, simp_num, simp_den);
    }

    return 0;
}

