#include <stdio.h>
#include <stdlib.h>

struct elemento {
   long long int valor;
   struct elemento* proximo;
   struct elemento* anterior;
};

struct elemento* inicio = NULL;

struct elemento* inserir(long long int valor, struct elemento* local) {
    struct elemento* novo = (struct elemento*) malloc(sizeof(struct elemento));
    
    struct elemento* proximo = local != NULL ? local->proximo : NULL;
    struct elemento* anterior = local != NULL ? local->anterior : NULL;

    novo->valor = valor;

    //ajustar anterior para apontar para mim
    if (local != NULL) {
        local->proximo = novo;
    }else{
        inicio = novo;
    }
    //ajusta o proximo para apontar para mim
    if (local != NULL && proximo != NULL) {
        proximo->anterior = novo;
    }
    //ajusta meus ponteistos
    novo->proximo = proximo;
    novo->anterior = local;

    return novo;
}

void remover(struct elemento* elemento) {
    if (elemento->anterior != NULL) {
        elemento->anterior->proximo = elemento->proximo;
    }
    if (elemento->proximo != NULL) {
        elemento->proximo->anterior = elemento->anterior;
    }
    free(elemento);
}

struct elemento* buscar(int valor) {
    struct elemento* atual = inicio;
    while (atual != NULL) {
        if (atual->valor == valor) {
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
}

int contarEntre(long long int inicio, long long int fim) {
    struct elemento* atual = buscar(inicio)->proximo;
    long long int count = 0;
    while (atual != NULL && atual->valor != fim) {
        count++;
        atual = atual->proximo;
    }
    return count;
}

void imprimir() {
    struct elemento* atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {

    int n;
    scanf("%d", &n);

    struct elemento* anterior = NULL;

    long long int valor;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &valor);
        anterior = inserir(valor, anterior);      // anterior = inserir(valor, anterior);
    }

    // imprimir();

    int operacoes = 3;
    scanf("%d", &operacoes);

    for (int i = 0; i < operacoes; i++) {
        char operacao;
        scanf(" %c", &operacao);
        if (operacao == 'I') {
            long long int valor;
            scanf("%lld", &valor);
            long long int local;
            scanf("%lld", &local);
            inserir(valor, buscar(local));
        }else if (operacao == 'R') {
            long long int valor;
            scanf("%lld", &valor);
            remover(buscar(valor));
        }else if (operacao == 'Q') {
            long long int inicio;
            scanf("%lld", &inicio);
            long long int fim;
            scanf("%lld", &fim);
            printf("%lld\n", contarEntre(inicio, fim));
        }
        // imprimir();
    }

    return 0;
}