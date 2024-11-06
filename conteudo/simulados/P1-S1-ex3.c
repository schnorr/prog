#include <stdio.h>

int main() {
    int entrada;
    int maiorDivisor;
    int acumulador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &entrada);

    maiorDivisor = entrada / 2;

    for (int i = 1; i <= maiorDivisor; i++) {
        if (entrada % i == 0) {
            acumulador += i;
        }
    }

    if (acumulador == entrada) {
        printf("O numero %d eh perfeito", entrada);
    } else {
        printf("O numero %d nao eh perfeito", entrada);
    }

    return 0;
}