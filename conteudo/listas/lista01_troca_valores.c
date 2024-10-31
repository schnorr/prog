#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada e saída
    int a, b;
    //Variáveis auxiliares 
    int aux, lidos;

    //entrada de dados
    printf("Insira o valor de A: ");
    lidos = scanf("%d", &a);
    if (lidos != 1) {
        printf("Houve erro ao ler o valor de A\n");
        return 1;
    }

    printf("Insira o valor de b: ");
    lidos = scanf("%d", &b);
    if (lidos != 1) {
        printf("Houve erro ao ler o valor de B\n");
        return 1;
    }


    //Troca de valores
    printf("O valor inicial era:\nA = %d\nB = %d\n", a, b);
    aux = a;
    a = b;
    b = aux;

    //Saida de dados
    printf("O valor finel eh:\nA = %d\nB = %d\n", a, b);

  
    return 0;
}
