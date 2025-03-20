#include <stdio.h>

int main() {
    
    //Variáveis de entrada
    int a, b, c, validos = 0;
    //Variáveis auxiliares 
    int lidos;

    //Entrada de dados
    printf("Entre com os 3 numeros: ");
    lidos = scanf("%d %d %d", &a, &b, &c);
    if (lidos != 3) {
        printf("Houve um erro na leitura!\n");
        return 1;
    }

    //Processamento e saída de dados
    if ((a < 0 && a % 2 == -1) || (a > 0 && a % 2 == 0)) validos++;
    if ((b < 0 && b % 2 == -1) || (b > 0 && b % 2 == 0)) validos++;
    if ((c < 0 && c % 2 == -1) || (c > 0 && c % 2 == 0)) validos++;
    
    printf("A quantidade de numeros que validam os criterios eh %d\n", validos);


    return 0;
}
