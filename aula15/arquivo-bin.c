#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
}Produto;

int salvaDado(Produto p){
    FILE *arquivo = fopen("produtos.bin", "w");
    if (arquivo == NULL){
        printf("Falha ao abrir o arquivo\n");
        return -1;
    }

    int resultado = fwrite(&p, sizeof(p), 1, arquivo);

    if (resultado < 0){
        printf("Falha ao escrever no arquivo\n");
    }else{
        printf("Arquivo salvo com sucesso!\n");
    }

    fclose(arquivo);

    return resultado;
}

int lerProduto(){

    FILE *arquivo = fopen("produtos.bin", "r");
    if (arquivo == NULL){
        printf("Falha ao abrir o arquivo\n");
        return -1;
    }

    Produto p;

    int resultado = fread(&p, sizeof(p), 1, arquivo);

    if (resultado < 0){
        printf("Falha ao ler dados");
    }else{
        printf("Produto lido: [id: %d, nome: %s, preço: %f]\n", p.id, p.nome, p.preco);
    }

    return resultado;

}

int main(){

    Produto p1 = {1, "Caneta", 1.50};
    salvaDado(p1);
    lerProduto();

    return 0;
}