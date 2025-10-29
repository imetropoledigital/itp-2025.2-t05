#include <stdio.h>

int global = 10;
int grande[50000000] = {};

void outra(){
    global = 11;
}

int main() {

  for (int i=0;i<50000000;i++){
    grande[i] = 10;
  }

  printf("O valor de global aqui é: %d\n", global);
  global = 1;
  printf("O valor de global aqui é: %d\n", global);
  outra();
  printf("O valor de global aqui é: %d\n", global);
  scanf("%d", &global);
  return 0;
}

