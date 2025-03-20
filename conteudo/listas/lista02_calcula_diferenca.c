#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    float n1, n2;
    //Variáveis auxiliares
    int lidos;
    //Variáveis de saída
    float resultado;

    //Entrada de dados
    printf("Insira o valor dos números: ");
    lidos = scanf("%f %f", &n1, &n2);
    if (lidos != 2) {
        printf(Houve erro na leitura dos valores!\n);
        return 1;
    }

    //Saída de dados
    if (n1 > n2)
        printf("O valor da diferença de n1 por n2 eh %.2f\n", n1 - n2);
    else 
        printf("O valor da diferença de n2 por n1 eh %.2f\n", n2 - n1);


    return 0;
}
