#include <stdio.h>

int global = 10;

void outra(){
    static int contador = 0;
    contador++;
    printf("O contador é: %d\n", contador);
}

int main() {
  int xpto = 10;
  outra();
  outra();
  return 0;
}

