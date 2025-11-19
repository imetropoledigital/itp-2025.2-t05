#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef enum dias {
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
} Dia;

typedef struct evento {
    char nome[100];
    Dia diaSemana;
    int dia, mes, ano;
    int hora_inicio, minuto_inicio;
    int hora_final, minuto_final;
} Evento;

void imprimeDiaSemana(Dia dia){
    if (dia == segunda) printf("Segunda");
    if (dia == terca) printf("Terça");
    if (dia == quarta) printf("Quarta");
    if (dia == quinta) printf("Quinta");
    if (dia == sexta) printf("Quinta");
    if (dia == sabado) printf("Sábado");
    if (dia == domingo) printf("Domingo");
    printf(" | ");
}

void imprimeCompromisso(Evento compromisso){
    imprimeDiaSemana(compromisso.diaSemana);
    printf("%s | %d/%d/%d %d:%d - %d:%d\n", compromisso.nome, compromisso.dia, 
        compromisso.mes, compromisso.ano, compromisso.hora_inicio, compromisso.minuto_inicio,
        compromisso.hora_final, compromisso.minuto_final);
}

int sorteiaNumero(int min, int max){
    return (rand() % (max - min + 1)) + min;
}

Evento geraEvento(int idEvento){
    Evento meuEvento = {
        "xpto", sorteiaNumero(0,6), sorteiaNumero(1,31), sorteiaNumero(1,12),  sorteiaNumero(2020,2025),
        sorteiaNumero(0,23), sorteiaNumero(0,59), sorteiaNumero(0,23), sorteiaNumero(0,59)
    };
    return meuEvento;
}

int main(){

    srand(time(NULL));

    Evento agenda[100];

    for (int i=0;i<100;i++){
        agenda[i] = geraEvento(i);
    }

    for (int i=0;i<100;i++){
        imprimeCompromisso(agenda[i]);
    }

    return 0;
}