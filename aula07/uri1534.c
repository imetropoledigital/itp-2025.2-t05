#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int matriz[N][N];

        // Construção da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) {
                    matriz[i][j] = 1;  // Diagonal principal
                } else if (i + j == N - 1) {
                    matriz[i][j] = 2;  // Diagonal secundária
                } else {
                    matriz[i][j] = 3;  // Demais elementos
                }
            }
        }

        // Impressão da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}