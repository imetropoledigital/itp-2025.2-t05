#include <stdio.h>

int main(){

    int a = 10;
    int b = 11;
    int c = 12;

    printf("a=b? %d \n", a == b);

    int d = (!(a > b) || b > c);
    printf("d = %d \n", d);
    printf("!d = %d \n", !d);

    if (a < b || b < c){
        printf("IF\n");
    }else{
        printf("ELSE\n");
    }

    return 0;
}