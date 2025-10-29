#include <stdio.h>
#include <string.h>

int main(){
    
    char texto[10] = "hello";

    texto[6] = 'A';
    texto[7] = 'B';
    texto[8] = 'C';

    for (int i=0;i<10;i++){
        if (texto[i] == '\0'){
            printf("%c", '*');
        }else{
            printf("%c", texto[i]);
        }
    }
    printf("%c", '\n');
    // texto[0] = 'h';
    // texto[1] = 'e';
    // texto[2] = 'l';
    // texto[3] = 'l';
    // texto[4] = 'o';
    // texto[5] = '\0';

    // char texto[10] = "hello";
    //or
    // char texto[10] = "hello\0";

    printf("%s\n", texto);
    return 0;
}