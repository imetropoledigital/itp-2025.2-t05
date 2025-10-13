#include <stdio.h>

int main() {
    long long n;
    long long diagonais;
    
    // Leitura do número de lados da pipa
    scanf("%lld", &n);
    
    // Cálculo do número de diagonais em um polígono de n lados
    // Fórmula: diagonais = n * (n - 3) / 2
    // 
    // Explicação: De cada vértice, podemos traçar (n - 3) diagonais
    // (excluindo o próprio vértice e os dois adjacentes)
    // Como cada diagonal é contada duas vezes, dividimos por 2
    diagonais = (n * (n - 3)) / 2;
    
    // Impressão do resultado
    printf("%lld\n", diagonais);
    
    return 0;
}

