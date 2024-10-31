#include <stdio.h>

int main() {

    //declaracao de variaveis
    //Variáveis de entrada
    float a, b;
    //Variáveis de saída
    float soma, sub, mult, div;
    //Variável auxiliar 
    int lidos;

    //entrada de dados
    printf("Insira o valor de A: ");
    lidos = scanf("%f", &a);
    if (lidos != 1) {
        printf("Houve um erro ao ler A\n");
        return 1;
    }

    printf("Insira o valor de B: ");
    lidos = scanf("%f", &b);
    if (lidos != 1) {
        printf("Houve um erro ao ler B\n");
        return 1;
    }

    //calcular os valores
    soma = a + b;
    sub = a - b;
    mult = a * b;
    
    //Garantir que não há divisão por 0
    if (b == 0) {
        printf("Divisao por zero, n houve a divisão\n");
    } else {
        div = a / b;
        printf("Divisao: %.1f\n", div);
    }

    //saida de dados
    printf("Soma: %.1f\n", soma);
    printf("Mult: %.1f\n", mult);
    printf("Sub: %.1f\n", sub);

    return 0;
}