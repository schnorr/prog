#include <stdio.h>

#define TAM 20

int main() {
    int pares[TAM], impares[TAM], qtd_pares = 0, valor;

    printf("Entre com %d valores: \n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares[qtd_pares] = valor;
            qtd_pares++;
        } else {
            impares[i - qtd_pares] = valor;
        }
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