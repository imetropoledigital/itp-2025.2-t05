#include <stdio.h>

int main(){
    // char text[10];
    // printf("Digite uma palavra: ");
    // fgets(text, 10, stdin);
    // printf("Você digitou: %s", text);
    // printf("FIM\n");

    char text2[10] = {0};
    scanf("%[^\n]", text2);
    //scanf("%[0-9]", text2);
    printf("%s\n", text2);
    

}
    