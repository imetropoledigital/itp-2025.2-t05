#include <stdio.h>

int main(){

    char letra = 'A'; // 1 byte - 2ˆ8 = 256 (possibilidades)

    do {

        printf("Digite uma letra: \n");
        scanf("%c", &letra);
        printf("%d\n", letra);

    }while(letra != '0');
    
    return 0;
}