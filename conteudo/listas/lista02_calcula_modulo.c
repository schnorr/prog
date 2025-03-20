#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int n;
    //Variáveis auxiliares
    int lidos;

    //Entrada de dados 
    printf("Entre com o valor: ");
    lidos = scanf("%d", &n);
    if (lidos != 1) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if (n < 0) printf("O valor absoluto de %d eh %d\n", n, -n);
    else printf("O valor absoluto de %d eh %d\n", n, n);
    
    return 0;
}
