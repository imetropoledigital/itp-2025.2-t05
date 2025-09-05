#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
  double x = 7.0;
  double y = 11.0;
  double z = sqrt(x*x + y*y);
  double r = round(z);
  
  printf("A hipotenusa é: %f\n", z);
  printf("A hipotenusa arredondada é: %f\n", r);
  
  srand(time(NULL));

  for (int i = 0; i < 10; i++){
    int max = rand() % 100;
    printf("%d\n", max);
  }

  return 0;
}