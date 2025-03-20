#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int n1, n2, n3;
    //Variáveis auxiliares
    int lidos, pares = 0;

    //Entrada de dados 
    printf("Entre com os valores: ");
    lidos = scanf("%d %d %d", &n1, &n2, &n3);
    if (lidos != 3) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (n1 % 2 == 0) {
        printf("O numero %d eh par\n", n1);
        pares++;
    }
    if (n2 % 2 == 0) {
        printf("O numero %d eh par\n", n2);
        pares++;
    }
    if (n3 % 2 == 0) {
        printf("O numero %d eh par\n", n3);
        pares++;
    }

    if (pares == 0) printf("Nao houve nenhum numero par!\n");
    
    return 0;
}
