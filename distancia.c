#include <stdio.h>
#include "math.h"
struct ponto {
    float x;
    float y;
};

void captura (struct ponto *p) {
    printf("Coordenadas do ponto: (x y)");
    scanf("%f %f", &p->x, &p->y);
}

void imprime (struct ponto *p) {
    printf("%.2f, %.2f\n", p->x, p->y);
}

float distancia(struct ponto *p, struct ponto *q) {
    float d1, d2, dist;
    d1 = p->x - p->y;
    d2 = q->x - q->y;
    dist = sqrt(d1 * d1 + d2 * d2);
    return dist;
}

int main() {
    struct ponto p;
    struct ponto q;
    captura(&p);
    captura(&q);
    printf("Ponto P: ");
    imprime(&p);
    printf("Ponto Q: ");
    imprime(&q);
    printf("Distancia: %.2f", distancia(&p, &q));
    return 1;
}