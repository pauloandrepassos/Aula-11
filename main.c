#include <stdio.h>
#include "conta.h"

int main() {
    Conta *c1;
    long numero;
    float saldo;

    c1 = cria(123, 0.0);
    deposita(c1, 10);
    saca(c1, 10);
    imprime(c1,  &numero, &saldo);
    printf("Saldo: R$ %.2f", saldo);

    return  0;

}

