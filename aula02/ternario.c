#include <stdio.h>

int main(){

    int a = 10;
    char c;

    if (a <= 10){
        c = 'Z';
    }else{
        c = 'Y';
    }

    char d = a <= 10 ? 'Z' : 'Y';

    printf("c = %c\n", c);
    printf("d = %c\n", d);

    return 0;
}