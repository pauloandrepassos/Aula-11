#include <stdio.h> // printf
#include <stdlib.h>
#include "conta.h"

struct conta {
    long numero;
    float saldo;
};

Conta* cria (long numero, float saldo) {
    Conta *c = (Conta*) malloc(sizeof(Conta));
    if(c == NULL) {
        printf("Memória insuficiente");
        exit(1);
    }
    c->numero = numero;
    c->saldo = saldo;
    return  c;
}
void deposita(Conta  *c, float valor) {
    c->saldo += valor;
}

void saca(Conta *c, float valor) {
    if(valor > c->saldo) {
        printf("Saldo insuficiente");
        exit(1);
    }
    c->saldo -= valor;
}

void imprime(Conta *c, long *numero, float *saldo) {
    *numero = c->numero;
    *saldo = c->saldo;
}