#include <stdio.h>

#define TAM 20

int main() {
    int pares[TAM], impares[TAM], qtd_pares = 0, valor, lidos = 0, lido;

    printf("Entre com %d valores: \n", TAM);

    while (lidos < TAM) {
        lido = scanf("%d", &valor);

        if (lido) {
            if (valor % 2 == 0) {
                pares[qtd_pares] = valor;
                qtd_pares++;
            } else {
                impares[lidos - qtd_pares] = valor;
            }
        }

        lidos++;
    }

    printf("Elementos do array com valores pares: \n");
    for (int i = 0; i < qtd_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nElementos do array com valores impares: \n");
    for (int i = 0; i < TAM - qtd_pares; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
