#include <stdio.h>

int main(){

    short int pequeno = 10; // 2 bytes | 32768
    int medio = 10; // 4 bytes | 2147483648
    long int grande = 0; //8 bytes | 9223372036854775808

    scanf("%hd", &pequeno);
    printf("%hd\n", pequeno);

    scanf("%d", &medio);
    printf("%d\n", medio);

    scanf("%ld", &grande);
    printf("%ld\n", grande);

    return 0;
}