#include <stdio.h>

struct registros{
    int* inputs;
};

int main() {

   FILE *arquivo = fopen( "teste.txt", "a" ); 
   char linha[255];
   
   if(arquivo == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return -1;
   }else{
    printf("Arquivo aberto com sucesso\n");
   }

   int result = fprintf(arquivo, "algo\n");
   printf("O resultado foi: %d\n", result);
  
//    while (fgets(linha, 255, arquivo) != NULL){
//      printf("%s", linha);
//    }

   fclose(arquivo);

   return 0;
}