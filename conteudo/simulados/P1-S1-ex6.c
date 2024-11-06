#include <stdio.h>
#include <math.h>

#define MIN_X -0.5
#define MAX_X 0.75

#define MIN_Y -1
#define MAX_Y 1

#define LIMITE 25

int main() {
    float x, y, s = 0;

    printf("Digite um valor para x (%.2f, %.2f): ", MIN_X, MAX_X);
    scanf("%f", &x);

    printf("Digite um valor para y [%d, %d]: ", MIN_Y, MAX_Y);
    scanf("%f", &y);

    if (x <= MIN_X || x >= MAX_X || y < MIN_Y || y > MAX_Y) {
        printf("Entradas invalidas. \n");

        return 1;
    }

    for (int i = 1; i <= LIMITE; i++) {
        s += pow(x, LIMITE - i + 1) * pow(y, i) / i;
    }

    printf("Valor do somatorio: %f", s);

    return 0;
}