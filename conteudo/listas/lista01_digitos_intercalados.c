#include <stdio.h>

int main() {

    //declaracao de variaveis
    //Variáveis de entrada
    int digA, digB; 
    //Variável de saída
    int saida;
    //Variáveis auxiliares
    int d1, d2, d3, d4, d5, d6, lidos;
    

    //entrada de dados
    printf("Insira o valor de A: ");
    lidos = scanf("%d", &digA);
    if (lidos != 1) {
        printf("Houve erro ao ler o dígito A\n");
        return 1;
    }
    printf("Insira o valor de B: ");
    lidos = scanf("%d", &digB);
    if (lidos != 1) {
        printf("Houve erro ao ler o dígito B\n");
        return 1;
    }
    
    //calcular os valores
    /*
        Logica utilizada
        pra pegar a centena, pegamos a parte inteira da divisão por 100
        pra pegar a dezena, pegamos o resto da divisao por 100 que dará um valor entre 0 e 99, e dividimos ele por 10
        pra pegar a unidade eh so fazer o modulo por 10 msm
    */

    d1 = digA / 100;
    d2 = digB / 100;
    d3 = (digA % 100) / 10;
    d4 = (digB % 100) / 10;
    d5 = digA % 10;
    d6 = digB % 10;

    saida = d6 + 10 * d5 + 100 * d4 + 1000 * d3 + 10000 * d2 + 100000 * d1;
    //saida de dados
    printf("Os digitos A e B intercalados ficam iguais a %d\n", saida);

    return 0;
}
