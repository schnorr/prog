#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int id;
    float compra;
    //Variáveis auxiliares
    int lidos;

    //Entrada de dados 
    printf("Entre com o valor da compra: ");
    lidos = scanf("%f", &compra);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }
    printf("Entre com o id do cliente: ");
    lidos = scanf("%d", &id);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (id == 1) printf("O valor da compra eh de R$%.2f\n", compra);    
    else if (id == 2) printf("O valor da compra eh de R$%.2f\n", compra * .95);    
    else if (id == 3) printf("O valor da compra eh de R$%.2f\n", compra * .9);    
    else printf("ID invalido!\n");

    return 0;
}
