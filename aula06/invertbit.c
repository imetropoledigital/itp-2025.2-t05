#include <stdio.h>
#include <math.h>

int invert(int input, int k){
    int mask = pow(2,k);
    int output = (input & mask);
    return output;
}

int main(){
    int a = 9;

    if (a > 10 | a < 20){}

    int out = invert(a, 1);
    printf("Entrada: %d, Saída: %d \n", a, out);
    return 0;
}