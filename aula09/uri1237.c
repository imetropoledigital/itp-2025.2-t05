#include <stdio.h>
#include <string.h>

#define MAX_LEN 51

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];

    while (fgets(str1, MAX_LEN, stdin) && fgets(str2, MAX_LEN, stdin)) {
        // Remover o caractere de nova linha, se presente
        str1[strcspn(str1, "\n")] = '\0';
        str2[strcspn(str2, "\n")] = '\0';

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int max_len = 0;

        // Percorrer todas as substrings possíveis de str1
        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                int k = 0;
                // Comparar caracteres consecutivos
                while (i + k < len1 && j + k < len2 && str1[i + k] == str2[j + k]) {
                    k++;
                }
                if (k > max_len) {
                    max_len = k;
                }
            }
        }

        printf("%d\n", max_len);
    }

    return 0;
}
