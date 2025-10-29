#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRINGS 1000
#define MAX_LENGTH 100

// Função de comparação para ordenar as strings por tamanho
int compare(const void *a, const void *b) {
    char *strA = *(char **)a;
    char *strB = *(char **)b;
    return strlen(strA) - strlen(strB);
}

// Função para verificar se s1 é uma substring contígua de s2
int is_substring(const char *s1, const char *s2) {
    return strstr(s2, s1) != NULL;
}

int main() {
    int N;
    
    while (scanf("%d", &N) && N != 0) {
        char strings[MAX_STRINGS][MAX_LENGTH + 1];
        int dp[MAX_STRINGS];
        
        // Leitura das strings
        for (int i = 0; i < N; i++) {
            scanf("%s", strings[i]);
        }

        // Ordenação das strings por tamanho usando bubble sort
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (strlen(strings[j]) > strlen(strings[j + 1])) {
                    char temp[MAX_LENGTH + 1];
                    strcpy(temp, strings[j]);
                    strcpy(strings[j], strings[j + 1]);
                    strcpy(strings[j + 1], temp);
                }
            }
        }

        // Inicialização do vetor dp
        for (int i = 0; i < N; i++) {
            dp[i] = 1;
        }

        // Construção da sequência usando programação dinâmica
        int max_sequence = 1;
        for (int i = 1; i < N; i++) {
            for (int j = 0; j < i; j++) {
                if (is_substring(strings[j], strings[i])) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        if (dp[i] > max_sequence) {
                            max_sequence = dp[i];
                        }
                    }
                }
            }
        }

        // Impressão do resultado
        printf("%d\n", max_sequence);
    }

    return 0;
}
