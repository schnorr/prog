#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float c1, c2, c3;
    //Variáveis auxiliares
    int lidos;

    //Entrada de dados
    printf("Insira as cotacoes do dolar: ");
    lidos = scanf("%f %f %f", &c1, &c2, &c3);
    if (lidos != 3) {
        printf("Houve erro na leitura!\n");
        return 1;
    }

    //Saída de dados
    if (c1 == c2 && c2 == c3) printf("Nao houve variacao na cotacao!\n");
    else printf("Houve variacao na cotacao!\n");

    return 0;
}
