#include <stdio.h>
 
int main() {
 double numeros[10];
 int i;
 
 for(i=0; i<10; i++)
   scanf("%d", &numeros[i]);
 
 for(i=9; i>=0; i--)
   printf("%d ", numeros[i]);
  printf("\n");
 
 return 0;
}