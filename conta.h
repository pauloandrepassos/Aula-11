typedef struct conta Conta;

Conta* cria (long numero, float saldo);
void deposita(Conta *c, float valor);
void saca(Conta *c, float valor);
void imprime(Conta *c, long *numero, float *saldo);