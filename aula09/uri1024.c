#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char texto[1001];
    
    // Lê o número de casos de teste
    scanf("%d", &n);
    getchar(); // Consome o '\n' após o número
    
    // Processa cada caso de teste
    for (i = 0; i < n; i++) {
        // Lê a linha de texto
        fgets(texto, 1001, stdin);
        
        // Remove o '\n' do final da string
        int len = strlen(texto);
        if (texto[len-1] == '\n') {
            texto[len-1] = '\0';
            len--;
        }
        
        // Passo 1: Deslocar caracteres alfabéticos 3 posições à direita
        for (j = 0; j < len; j++) {
            if ((texto[j] >= 'a' && texto[j] <= 'z') || 
                (texto[j] >= 'A' && texto[j] <= 'Z')) {
                texto[j] = texto[j] + 3;
            }
        }
        
        // Passo 2: Inverter a string
        for (j = 0; j < len / 2; j++) {
            char temp = texto[j];
            texto[j] = texto[len - 1 - j];
            texto[len - 1 - j] = temp;
        }
        
        // Passo 3: Deslocar caracteres da metade em diante uma posição à esquerda
        for (j = len / 2; j < len; j++) {
            texto[j] = texto[j] - 1;
        }
        
        // Imprime o resultado
        printf("%s\n", texto);
    }
    
    return 0;
}
