#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int c1, c2, c3;
    float s1, s2, s3;
    //Variáveis auxiliares
    int lidos, acima = 0;
    float media;

    //Entrada de dados
    //Cliente 1
    printf("Insira o id do cliente: ");
    lidos = scanf("%d", &c1);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    printf("Insira o saldo do cliente: ");
    lidos = scanf("%f", &s1);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Cliente 2
    printf("Insira o id do cliente: ");
    lidos = scanf("%d", &c2);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    printf("Insira o saldo do cliente: ");
    lidos = scanf("%f", &s2);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Cliente 3
    printf("Insira o id do cliente: ");
    lidos = scanf("%d", &c3);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    printf("Insira o saldo do cliente: ");
    lidos = scanf("%f", &s3);
    if (lidos != 1) {
        printf("Houve erro na leitura!\n");
        return 1;
    }
    

    //Processamento 
    media = (s1 + s2 + s3) / 3;

    //Saída de dados
    if (s1 > media) {
        printf("O cliente %d esta acima da media!\n", c1);
        acima++;
    }
    if (s2 > media) {
        printf("O cliente %d esta acima da media!\n", c2);
        acima++;
    }
    if (s3 > media) {
        printf("O cliente %d esta acima da media!\n", c3);
        acima++;
    }
    
    //Se nenhum ficou acima, mete uma mensagem tb
    if (acima == 0) printf("Nao houve clientes com saldo acima da media!\n");

    return 0;
}
