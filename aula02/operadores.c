#include <stdio.h>

int main(){

    int a = 10;

    int b = ++a; //b==11 | a==11
    int c = ++a + b++; // (12 + 11)
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}