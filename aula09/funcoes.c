#include <stdio.h>
#include <string.h>

void copy();
void comparacao();

int main(){

    comparacao();
    return 0;
  
}

void comparacao(){
    // char text1[] = "abrao";
    char input[50];
    int isXau = 0;

    do {
        printf("Digite XAU para sair\n");
        fgets(input, 49, stdin);
        isXau = strcmp(input, "XAU") == 0;
        printf("Entrada: %s. strcmp: %d\n", input, isXau);
    }while (isXau != 0);

    printf("FIM");

    // int resultado = strcmp(text1, text2);
    // printf("Resultado: %d\n", resultado);
    // if (resultado == 0)  printf("IGUAIS!\n");

}

void len(){
    char text[] = "Minha terra tem palmeira";
    int tamanho = strlen(text);
    printf("Tamanho: %d\n", tamanho);
}

void copy(){
  char  original[100] = "Meu tesouro! Não se misture com essa gentalha";
  char pirata[100];

  strcpy(pirata, original);
  
  original[0] = '!';

  printf("%s\n", original);
  printf("%s\n", pirata);
}