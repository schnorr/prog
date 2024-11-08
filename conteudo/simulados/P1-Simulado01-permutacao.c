#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define TAM_MAX 16

int main() {
    char p1[TAM_MAX], p2[TAM_MAX];
    int tamanho, ehPermutacao = 0, rotacoes = 1;

    printf("Entre com a primeira palavra: ");
    fgets(p1, TAM_MAX, stdin);

    printf("Entre com a segunda palavra: ");
    fgets(p2, TAM_MAX, stdin);

    if (strlen(p1) != strlen(p2)) {
        printf("Entradas invalidas \n");
        return 1;
    }

    // Remover \n
    tamanho = strlen(p1) - 1;
    p1[tamanho] = '\0';
    p2[tamanho] = '\0';

    for (int i = 0; i < tamanho; i++) {
        p1[i] = tolower(p1[i]);
        p2[i] = tolower(p2[i]);
    }

    while (!ehPermutacao && rotacoes < tamanho) {
        for (int letra = 0; letra < tamanho; letra++) {
            if (p1[letra] == p2[letra + rotacoes]) {
                ehPermutacao++;
            }
        }

        if (ehPermutacao == tamanho) {
            ehPermutacao = 0;
        }

        rotacoes++;
    }

    if (ehPermutacao) {
        printf("A segunda palavra eh permutacao circular da primeira!");
    } else {
        printf("A segunda palavra nao eh permutacao circular da primeira!");
    }

    return 0;
}
